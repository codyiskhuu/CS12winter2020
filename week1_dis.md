## Lesson Plan

We will be reviewing CS10 material this week.

* Variables
* Types
  * `int`
  * `double`
  * `string`
* Vectors
* Pass by value vs. pass by reference
* Functions

### Functions

* Improve readability
* Modularize your code/avoid writing redudant code

```cpp
#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& v) {
    for (auto index : v) {
        cout << index << " ";
    }
    cout << endl;
}

int main() {
    vector<int> items = {1, 2, 3, 4, 5};

    // we clearly know what's going on here and can be reused as many times as needed
    printVector(items);

    // we have to read these 4 lines to figure out what's going on, must copy-paste to keep printing vector
    for (auto index : items) {
    cout << index << " ";
    }
    cout << endl;

    return 0;
}
```

### Testing

As programmers, we need to strive to writing correct code. This means our code should work properly for any set of inputs.

* Asserts
  * `#include <cassert>`
    * Need to include `cassert` to use the `assert` function
  * `assert(func(a, b) == c)`
    * This will test whether the output of `func(a, b)` equals `c`.

```cpp
#include <iostream>
#include <math>
#include <cassert>
using namespace std;

int pow(int a, int b) {
  return pow(a, b);
}
int main() {
  assert(pow(2, 2) == 4);
  assert(pow(2, 3) == 8);
  assert(pow(3, 3) == 10); // this will throw an error

  return 0;
}
```

### Pass by Value vs. Pass by Reference

These are 2 options for when you need to pass variables into functions

* **Pass by value**
  * The function creates a local variable with the same value
  * Uses time and memory to create a new variable
  * Changes to the local variable **do not** affect the original variable
* **Pass by reference**
  * The function creates a reference that points to the original variable
  * Does not use additional memory to create a copy
  * Changes to the referenced variable will apply to the original variable
    * You can prevent this by prefixing with `const`.

```cpp
#include <iostream>
using namespace std;

void passByValue(int x) {
    x = x + 1; // Copy of x is incremented, but then thrown away
}

void passByReference(int &x) {
    x = x + 1; // Reference to x is actually incremented
}

int main() {
    int variable = 0;

    passByValue(variable);
    cout << variable << endl; // prints '0'

    passByReference(variable);
    cout << variable << endl; // prints '1'

    return 0;
}

```

### Function Overloading

Function overloading allows us to create functions that share the same name but accept different argument types
and/or a different number of arguments

```cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void printVector(const vector<int>& v) {
    for (auto index : v) {
        cout << index << " ";
    }
    cout << endl;
}

// Different parameter type
void printVector(const vector<string>& v) {
    for (auto index : v) {
        cout << index << " ";
    }
    cout << endl;
}

// Different number of parameters
void printVector(const vector<string>& v, string title) {
    cout << title << endl;
    for (auto index : v) {
        cout << index << " ";
    }
    cout << endl;
}

int main() {
    vector<int> itemsA = {1, 2, 3, 4, 5};
    vector<string> itemsB = {"Foo", "Boo", "Bar"}

    printVector(itemsA);
    printVector(itemsB);
    printVector(itemsB, "Example");

    return 0;
}
```

### Common Pitfalls

**Integer divison**
```cpp
double a = 5 / 2; // WRONG: Performs integer division, then converts to double!
cout << a << endl; // prints 2
```

```cpp
#include <iostream>
using namespace std;

double a = 5 / 2.0; //CORRECT: Converts to double before division!
cout << a << endl; // prints 2.5
```

**Comparison between `signed` and `unsigned`**
```cpp
vector<int> v;
for(int i = 0; i < v.size(); i++) { // WRONG: v.size() returns an unsigned!
    cout << v.at(i) << endl;
}
```

```cpp
vector<int> v;
for(unsigned i = 0; i < v.size(); i++) { // CORRECT: unsigned compares to another unsigned
    cout << v.at(i) << endl;
}
```

**Out of bounds errors**
```cpp
vector<int> v;
v.at(v.size()); // WRONG: Accesses array element AFTER last one
```

```cpp
vector<int> v;
v.back(); // CORRECT: Accesses last array element
```

```cpp
vector<int> v;
for (unsigned i = v.size() - 1; i >= 0; i--) {
    cout << v.at(i) << endl; // WRONG: At the last iteration, i goes to -1, check the type!
}
```

## Exercises

1. Write a function that swaps the value in 2 variables
2. Write a function that reverses a `string` *Hint: try swapping*
3. Write a function that prints out a `vector<int>` backwards

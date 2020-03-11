## Week 10 Lesson Plan :thinking:
###### Email: ckhuu001@ucr.edu
###### SI Leader Cody Khuu

![alt text](https://github.com/codyiskhuu/CS-12-SI-Winter-2020/blob/master/images/wait.jpg "Logo Title Text 1")

Don't forget to sign in at: https://signmein.online/student/checkin
* **9:00 AM - 10:00 AM KWIxdf**
* **11:00AM - 12:00 PM TSwck_**

---

* Function Overloading
* Streams (`getline`, `cin`, files, `stringstreams`)
* Encapsulation (private vs. public)
* Classes (member vs. global vs. friend)
* Constructor / Destructor (Initialization list)
* Inheritance (`protected`, how to call base constructor, `virtual` , `overriding`)
* Pointers
* Stack vs. Heap (using `new` and `delete`)
* Linked List
* Operator Overloading
* Arrays
* Recursion
* Big O / Sorting

## Conceptual Questions
* Can you override a `friend` function? Why or why not?
* Explain `private` vs `public` vs `protected`
* `const operator+(const Rational &rhs) const` - Explain each const
* `virtual` vs. `pure virtual` - Explain the differences and give example syntax for each
* `Tree & Forest`, `Computer & Desktop` - Should we use inheritance for any of these?
* Calling `delete` on a pointer set to `nullptr` - What happens?

## Coding Snippets
**What's the runtime of this function?**
```cpp
for (int i = 1; i < n; i *= 2) {
    cout << i << endl;
}
```
**What happens?**
```cpp
#include <iostream>
using namespace std;

class Base {
    protected:
        int x;
    public:
        Base(int x) {
            this->x = x;
            cout << x << endl;
        };
};

class Derived : public Base {
    private:
        int y;
    public:
        Derived(int x, int y) {
            Base(x);
            this->y = y
            cout << x << " " << y << endl;
        }
};

int main() {
    Derived d(1, 2);
}
```
**Spot any errors (Don't point out anything that isn't an error)**
```cpp
class Base {
    protected:
        int* x;
    public:
        Base() : x(new int[10]) {};
        ~Base() {
            delete x;
        }
};

class Derived : public Base {
    private:
        int y;
    public:
        Derived(int y) : y(new int[10]) {};
        ~Derived() {
            delete y;
            Base::~Base()
        }
};
```

**Identify the implicit operator in line 3**
```cpp
Rational one(1, 1);
Rational two(2, 1);
Rational three = two + one;
```
**What gets printed out with the following *stdin*: `"You \nhave 4 more years left"`**
```cpp
cin >> a;
getline(cin, b);
cin >> c;
cout << a << b << c << endl;
```
**What does this do?**
```cpp
int magic(unsigned x) {
    if (x == 0) {
        return 0;
    }
    m = max(1 + magic(x/2), 1 + magic(x+1))
    return m;
}

int main() {
    cout << magic(5) << endl;
}
```

**What gets printed out?**
```cpp
    #include <iostream> 
    using namespace std; 

    int main() 
    { 
        int i[] = {1, 2, 3};
        int* ptr = i + 1; 
        (*ptr)++; 
        ptr++;
        cout << *ptr << endl;
        for (int a : i) {
            cout << a << endl;
        }
        return 0; 
    }
```

## Coding

**Linked List**
```cpp
/*
    reverse a linked list using recursion, don't worry about head and tail
    curr represents the head of the list you want to reverse
    this function returns the tail of the reversed list
 */
Node* reverse(Node* curr);
```
```cpp
/*
    creates a node with the given value and inserts it as the SECOND node in the list
    you are given head and tail and MUST set them accordingly
    if you cannot insert as the second node, then return
*/
void push_second(int value);
```
**Inheritance**
```cpp
/*
    Create an animal base class (header and cpp file)
    Create a dog class (header and cpp) that inherits from animal
    All behaviour is specified by the main
*/

int main() {
    Animal a("Jesse", 3);
    cout << a.getName() << endl; // prints out name
    cout << a.getAge() << endl; // prints out 3
    a.setAge(5); // sets age to 5
    a.setName("Doggo"); // sets name to doggo
    a.print(); // prints out <Name: Jesse, Age: 3> without brackets
    Dog d("Jesse", 3, "German Schauzzer");
    d.print(); // prints out <Name: Jesse, Age: 3, Breed: German Schauzzer> without brackets
}
```
**Pointers**
```cpp
/*
    Implement the assignment operator for the IntVector class.
    This operator must perform a deep copy
    You have access to the following private variables:

    int* data
    unsigned sz
    unsigned cap
*/
IntVector& operator=(const IntVector &);
```
**Recursion**
```cpp
/*
    implement recursive atoi, it converts a string to an int
    you can assume string is non-empty and always valid
    i.e. "1234" becomes 1234 (as an integer of course!)
*/
int recursive_atoi(const string &s);
```
```cpp
/*
    Implement recursive merge sort
*/
void mergeSort(vector<int> &v, int start, int end);

// You have access to this function (don't implement it)
void merge(vector<int> &v, int start, int mid, int end);
```
## Closing
* [Study Guide](https://docs.google.com/document/d/10nH91bvU3094zdNHyyM165p7E6NlWdMR7Rmpms2cxwY/edit?usp=sharing)
* [Mock Final](https://docs.google.com/document/d/1vbVrhDWwMmS0QXwF-uBmdTmYEmjELzc9Mcl1_SSs_Ms/edit?usp=sharing)
* [Mock Final Answer](https://docs.google.com/document/d/14Aef_0OHYAUV-nIIAMiqmRNzDQy5T4UDKiBYxIwwSxE/edit?usp=sharing) 

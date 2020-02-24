## Week 8 Lesson Plan :thinking:
###### Email: ckhuu001@ucr.edu
###### SI Leader Cody Khuu

![alt text](https://github.com/codyiskhuu/CS-12-SI-Winter-2020/blob/master/images/wait.jpg "Logo Title Text 1")

Don't forget to sign in at: https://signmein.online/student/checkin
* **9:00 AM - 10:00 AM MvJEVG**
* **11:00AM - 12:00 PM SXnHKX**

---

# Lesson Plan

This week we'll be doing some `Linked List` practice and introducing inheritance.

## Warm-Up

Give an example for each of the following syntax:
* Creating a subclass
* Calling the base constructor from the derived constructor
* Calling a base function from the derived class
* Overriding a function
* Overloading a function

## Conceptual Questions

* What is the main difference between overloading vs. overriding?
* Why would we ever want to extend a function?

## Code Review

Spot any errors with this code segment:
```cpp
#include <iostream>
using namespace std;

class Base {
  protected:
  	int x;
  public:
    Base(int x) : x(x) {};
    print() {
        cout << x << endl;
    };
};

class Derived {
  private:
  	int y;
  public:
    Derived(int x, int y) {
        Base(x);
        this->y = y;
    };
    print() {
        print();
        cout << y << endl;
    };
};
```

Spot any errors with this code segment:
```cpp
#include <iostream>
using namespace std;

class Base {
  private:
  	int x;
  public:
    Base(int x) : x(x) {
      cout << x << endl;
    };
  	~Base() {
      cout << "Destructing Base" << endl;
    };
};

class Derived {
  private:
  	int y;
  public:
    Derived(int x, int y) : Base(x), y(y) {
      cout << x << " " << y << endl;
    };
    Derived() : y(0) {
       cout << x << " " << y << endl;
    };
  	~Derived() {
      cout << "Destructing Derived" << endl;
    };
};

int main() {
  Derived d1(3, 5);
  // Derived d;
  return 0;
}
```

What does the following code segment output?
```cpp
#include <iostream>
using namespace std;

class Base {
  protected:
  	int x;
  public:
    Base(int x) : x(x) {
      cout << x << endl;
    };
    Base() : x(0) {
      cout << x << endl;
    }; 
  	~Base() {
      cout << "Destructing Base" << endl;
    };
};

class Derived : public Base {
  private:
  	int y;
  public:
    Derived(int x, int y) : Base(x), y(y) {
      cout << x << " " << y << endl;
    };
    Derived() : y(0) {
       cout << x << " " << y << endl;
    };
  	~Derived() {
      cout << "Destructing Derived" << endl;
    };
};

int main() {
  Derived d1(3, 5);
  // Derived d;
  return 0;
}
```

## Linked List Practice

Complete the following function, assume you have access to `head` and `tail`:


```cpp
// This function deletes the kth node from the head
// i.e. if k = 1, then the second node in the list is deleted
// if k = 0, then the head itself is deleted
// if there is no kth node, don't do anything
void deleteKthNode(unsigned k)
```

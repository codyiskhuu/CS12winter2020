## Week 4 Lesson Plan :thinking:
###### Email: ckhuu001@ucr.edu
###### SI Leader Cody Khuu

![alt text](https://github.com/codyiskhuu/CS-12-SI-Winter-2020/blob/master/images/wait.jpg "Logo Title Text 1")

Don't forget to sign in at: https://signmein.online/student/checkin
* **9:00 AM - 10:00 AM 8ytfYa**
* **11:00AM - 12:00 PM IOFYwg**

---

# Lesson Plan

This week we will be covering:

* Operator Overloading
* Classes within classes
* What preprocessors do
* Splitting up your code into separate files

## Operator Overloading

Operator overloading allows you to add functionality to operators. Operator overloading takes this form:

`<ClassName> operator<operator>();`

An example of this is adding 2 rationals:

```cpp
class Rational {
  public:
    int numerator;
    int denominator;

    Rational operator+(Rational rhs);
}

Rational Rational::operator+(Rational rhs) {
  Rational sum;

  sum.numerator = this.numerator + rhs.numerator;
  sum.denominator = this.denominator + rhs.denominator;

  return sum;
}
```

With operator overloading, we can define mechanisms to support the classes we create.

## Friend Keyword

The friend keyword allows you to declare a non-member function with access to a classes private varaibles.

For example:
```c++
class Rectangle {
    int width, height;
  public:
    Rectangle() {}
    Rectangle (int x, int y) : width(x), height(y) {}
    int area() {return width * height;}
    friend ostream& operator<<(ostream &out, const Rectangle& rhs);
};
```

In the above class definition, we are overloading the `operator<<` function and declaring it as a friend.

We declare `operator<<` as a friend and not member function because operators are members of their left-hand arguments class. 
In this case we call the << operator with the line: `cout << "hello"`. 
The << operator is member of the cout class.

Since this function is not a member function of the Rectangle class, we do not include the `Rectangle::` when defining the function.

The function is defined like such below:
```c++
ostream& opserator<< (ostream& out, const Rectangle& rhs){
	//write code here
}
```

## Classes within classes

Classes are simply new data types that we can create. Just as we have ints, strings, and such as data members
of our classes, we can also have the classes we defined in other classes.

Let's take a look at an example of a class roster program:

```cpp
class Roster {
  private:
    vector<Student> roster;
}

class Student {
  private:
    string name;
}
```

## Preprocessors

Preprocessors allow us to modify our source files before they get compiled. Preprocessors start with `#`. You
have been using preprocessors since day one. So what does `#include <>` do? It takes whatever code you are
including into your program and replaces that line with the code from that file.

## Splitting up your code into separate files

Why should we split up our program into multiple files? Let's image we write Facebook in 1 file. Imagine how
many lines that would be. What if we want to change a feature? How do we find that feature?

We can follow the convention of splitting up our code into different files based on what functionality/feature
it is. This will make it easier to find portions of the code base that we want to modify.

When we split our code into different files, different parts of our code might need to use the same 
functionality. To minimize the size of our code, we can use **header file guards** to prevent the same file
from being imported more than once.

View the examples below:
```c++
// main.cpp

#include "Class.h"

/* rest of file */
```

```c++
// Class.h
#ifndef CLASS_H
#define CLASS_H

/* Class declaration here */

#endif
```

```c++
// Class.cpp

#include "Class.h"

/* Class definitions here */
```

To compile a program that is split into multiple files

```bash
g++ main.pp Class.cpp
```

To compile individual classes into object files, and then link them together.

```bash
# compile Class into an object file:
g++ -c Class.cpp
# compile main into an object file:
g++ -c main.cpp
# link all object files together:
g++ *.o
```


## Warm-Up

In the following source code files, spot the error(s):
* The comment at the top indicates the file name

### Exercise 1
```cpp
// main.cpp
#include <iostream>
#include "Rectangle.cpp"
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

int main() {
  Rectangle r(3, 4, 10, 10); // Square of size 10 x 10, lower left is (3, 4)
  cout << r.getArea() << endl;
  return 0;
}
```

### Exercise 2
```cpp
// rectangle.h
class Rectangle {
  private:
    int x, y;
    int width, length;

  public:
    Rectangle(int, int, int, int);
    int getArea();
    int getLength();
    int getWidth();
    int setLength(int l);
    int setWidth(int w);
};
```

### Exercise 3
```cpp
// rectangle.cpp
#include <iostream>
using namespace std;

Rectangle::Rectangle(int x, int y, int width, int length) : x(x), y(y), width(width), length(length) {};

int Rectangle::getArea() { 
  return width * height;
}

int Rectangle::getLength() {
  return length;
}

int Rectangle::getWidth() {
  return width;
}

void operator<<(const Rectangle &rhs) const {
  cout << "Lower Left: " << x << ", " << y << endl;
  cout << "Width: " << width << endl;
  cout << "Lenth: " << length << endl;
}

int Rectangle::setWidth(int w) {
  this->width = w;
  return w;
}

int Rectangle::setLength(int l) {
  this->length = l;
  return w;
}
```

* For this exercise, look at Exercise 2 for the header class

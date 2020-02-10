## Whomst'd've 6 Lesson Plan :thinking:
###### Email: ckhuu001@ucr.edu
###### SI Leader Cody Khuu

![alt text](https://github.com/codyiskhuu/CS-12-SI-Winter-2020/blob/master/images/wait.jpg "Logo Title Text 1")

Don't forget to sign in at: https://signmein.online/student/checkin
* **9:00 AM - 10:00 AM b1ShpG**
* **11:00AM - 12:00 PM iqSwLG**

---

## SIL Mid Quarter Evaluations
https://forms.gle/92MsYQvdrCop8pFi6

# Lesson Plan

## Pointer Intro

Pointers are *variables* that hold an address as its value. In many ways, pointers are similar to references. Just like any variable, pointers also have their own *type*. 
A pointer's type dictates what kind of objects or types that the pointer can reference.

```cpp
int* p = nullptr; // initializes pointer to reference nothing
int a = 1;
p = &a; // sets pointer p to reference a
cout << *p << endl; // dereferences pointer and prints out 1
```

**Note:** As best practice, *don't* leave a pointer uninitialized like so: `int* p;`, always initialize the pointer to reference another variable/object or `nullptr`!
Uninitialized pointers have *garbage* addresses and may cause `segmentation faults` if you try to dereference them.

## The `->` operator

It's common practice that you want to have a pointer point to some object. To access an object's *member functions / data*, you need to first dereference the pointer
to get the actual object, then do the `.` operator. This can become extremely tedious however, so a shortcut is using the `->` operator

```cpp
Rectangle a(6, 3); // initializes a 'Rectangle' object with length = 6 and width = 3
Rectangle* p = &a;
double area = (*p).getArea(); // dereference pointer p to get the Rectangle object 'a', then call a member function with the . operator
double area2 = p->getArea(); // same thing as above!
```

## New and Delete

The operator `new` allocates memory on the `heap` and returns to you a pointer that points to that alotted memory. This memory however, is not automatically deleted for you
when that pointer reaches the end of its scope or lifetime. To delete this memory and avoid *memory leaks*, call `delete` on a pointer that points to that memory to deallocate it.

```cpp
Rectangle* right = new Rectangle(6, 3); // creates a Rectangle object on the heap and returns a pointer to that memory address
delete right; // deallocates the Rectangle object on the heap and avoids memory leaks!

Rectangle* wrong = new Rectangle(6, 3);
Rectangle* corrected = wrong;
wrong = nullptr;
delete wrong; // This does NOT delete the memory at the heap. Calling 'delete' deletes the memory alotted in whatever the pointer *references*. In this case, it deletes nothing!
delete corrected; // This DOES delete the memory at the heap because 'corrected' *references* the Rectangle object's memory location.
```

**Note:** A key note is that calling `delete` does not delete the pointer itself, it deletes the memory the pointer is pointing to. We call forever lost references as *memory leaks* because without the pointer to reference the memory, it becomes impossible to deallocate/delete that memory!

## Dangling Pointers

We call pointers that don't reference a properly allocated memory location a *dangling pointer*. Any attempts to dereference a dangling pointer may cause a `segmentation fault`.
```cpp
Rectangle* example = new Rectangle(6, 3); // creates a Rectangle object on the heap and returns a pointer to that memory address
delete example; // deallocates that memory location
double a = example->getArea(); // Example is a dangling pointer! Since you deallocated the memory that example pointed to, you may be accessing memory that doesn't belong to your program!
```

## Warm-up

*Warm-up:* Create a function called `change` that takes in an `int* pointer` as an argument, and changes the *dereferenced* value of that pointer to 30.

## Exercise: Identify any Errors

* Identify any errors (if there are errors)

Problem 1:
```cpp
Rectangle* a = new Rectangle(6, 2);
Rectangle* b = &a;
delete b;
double area = a->getArea();
```

Problem 2: 
```cpp
Rectangle* a;
double area = a->getArea();
```

Problem 3: 
```cpp
Rectangle* a;
a = &(Rectangle(6, 2));
double area = a->getArea();
```

Problem 4:
```cpp
Rectangle* a = new Rectangle(4, 5);
Rectangle* b = a;
*a = nullptr;
delete b;
```

Problem 5:
```cpp
int a = 9;
int* b = &a;
*b = 20;
cout << a << endl; // what does this print out?
delete b;
```


## Conceptual Questions

1. Can you have a pointer to a pointer? If so, how do you create one?
2. If you make a pointer, `int* p = &a`, what is the value of `p` (Not dereferenced yet)?
3. What data type is `this`?



## Stack vs. Heap

Until now, you never had to worry about memory management since all your memory was allocated to the *stack*. 
```cpp
int main() {
    int x = 5; // 'x' is allocated on the stack
}
```
The heap comes into play when *you*, the programmer allocate the memory yourself. This also means that you are responsible for cleaning up that data, or deleting it.
To delete this data, you simply call delete on the pointer. This **DOES NOT** delete the pointer itself, but the memory *referenced* by the pointer.
```cpp
int main() {
    int* p = new int[6]; // allocates an array of size 6 on the heap, you have to delete this later on
}
```
<br>
**Warm-Up:** Identify whether the memory goes on the stack or heap

```cpp
Rectangle* r = new Rectangle(4, 3);
```

```cpp
ExampleObject* g(4, 3);
```

```cpp
    int x = 6;
    int* g = &x
```


## Pointers as Arrays

Under the hood, arrays are implemented as pointers! The `[]` operator does pointer arithmetic followed by a dereference.

```cpp
int main() {
    int a[5]; // array with 5 values
    a[3] = 2; // sets the value at index 3 to 2
    *(a + 3) = 2; // does the same thing as the line above!
}
```
Your *array* object is really just a pointer that points to the *first element* of the array. When you do the `[]` operator,
you really just add memory address offsets until you get to the element you want. From there, you call the `*`, dereference operator
to actually grab the value at that index. Likewise, you can use the `[]` operator on a pointer returned from new!

```cpp
int main() {
    int* a = new int[5];
    a[3] = 2; // adds 3 memory addresses to the pointer, then dereferences it
    *(a+3) = 2; // see above
}
```

## Common Pitfalls

* Comparing (2 * cap) > (cap - sz), think about the logistics of what you are actually comparing. The first element represents a total capacity while the second ...
* using `delete` does **NOT DELETE THE POINTER**, it delete's the *data* the pointer is pointing to!
* use *logical deletion*, you don't have to actually delete the element, you just need to make it inaccessible

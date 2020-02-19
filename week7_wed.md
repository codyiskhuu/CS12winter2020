## Week 7 Lesson Plan :thinking:
###### Email: ckhuu001@ucr.edu
###### SI Leader Cody Khuu

![alt text](https://github.com/codyiskhuu/CS-12-SI-Winter-2020/blob/master/images/wait.jpg "Logo Title Text 1")

Don't forget to sign in at: https://signmein.online/student/checkin
* **9:00 AM - 10:00 AM U-BJOI**
* **11:00AM - 12:00 PM aWS3Tb**

---

# Lesson Plan

This week we'll be covering linked list

**Note:** If you can't compile with `nullptr` in c++, that's because you're forgetting the `-std=c++11` flag when you compile i.e. `g++ main.cpp -std=c++11`.

## Linked List

A linked list is an alternative to a `vector`. Both fundamentally represent a *collection* of items or data, but their implementations are different. Linked lists represent their data as a series of *linked nodes*. A node is an object that has both *data* and a pointer that points to the *next node*.

```cpp
struct IntNode {
    int value; // the actual data
    IntNode* next; // a pointer to the next node
}
```
Typically, linked list have two node pointers, `head` and `tail`, which point to the first and last node in the list respectively. To iterate through a linked list you can do a simple `for` loop insead of a `while` loop.

```cpp
// for loop option
for (IntNode* curr = head; curr != nullptr; curr = curr->next) {
    // insert code here
}

// while loop option
IntNode* curr = head;
while (curr != nullptr) {
    // insert code here
    curr = curr->next;
}
```

## Cases
There are 4 main cases to worry about in any linked list implementation:
1. The linked list is *empty*
2. Inserting / Deleting the front of the list
3. Inserting / Deleting the back of the list
4. Inserting / Deleting the middle of the list

## Diagram Practice

Start with one of the 4 main cases and teach the class by drawing a step by step visual diagram of both *inserting* and *deleting* nodes for their case. 

Indicate the following features:

* `head`
* `tail`
* other `nodes`
* `stack` / `heap`

* Be sure to verify your diagram and explanation on multiple examples: empty, 1 node, more than 1 node etc.
* **NOTE:** Keep in mind the case where there's only a single node!


## Pitfalls
* Not calling `delete` on every node. You have to delete all the nodes in the destructor or else you will have a memory leak!
* Thinking `delete` deletes the pointer. It **doesn't**. When you use `new`, you allocate memory on the *heap* and receive a pointer that points to that allocated memory. The pointer itself is **not in the heap!**, it is on the *stack*. When you call `delete`, you deallocate the memory that the pointer is *pointing* to!
* **(From last week)** Mixing up `delete` and `delete []`. The former is used for deallocating single objects while the latter is for deallocating arrays. Make sure you don't mix them up! No calling `delete` multiple times on an array!

## Exercises

```cpp
/*
Implement the following functions

You have access to the following private variables:
IntNode* head
IntNode* tail
*/

// Removes duplicate values from the linked list
void removeDuplicates();

// Deletes that specific node from the list. Assume the node always exist in the list
void deleteNode(IntNode* toDelete);

// Deletes the first node found with the same value as the argument given
void deleteNode(int value);

// Challenge activity! Assume you only have head for this function!
// Detects if the linked list is circular i.e. the last node points back to the first node
bool isCircular();
```



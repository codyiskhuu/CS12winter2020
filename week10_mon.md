## Week 10 Lesson Plan :thinking:
###### Email: ckhuu001@ucr.edu
###### SI Leader Cody Khuu

![alt text](https://github.com/codyiskhuu/CS-12-SI-Winter-2020/blob/master/images/wait.jpg "Logo Title Text 1")

Don't forget to sign in at: https://signmein.online/student/checkin
* **9:00 AM - 10:00 AM zfY9tc**
* **11:00AM - 12:00 PM 5IQXmd**

---

## Big O
Big O notation is a measure of how well the algorithm performs in terms of space or time. For your purposes in CS012, we'll be focusing on time. In Big O notation, you only consider the **highest-ordered term** and **don't consider multiplication by constants.** We'll go over what this means with a few examples.

## Examples

```cpp
for (int i = 0; i < v.size(); i++) {
    cout << v.at(i) << endl;
}
for (int i = 0; i < v.size(); i++) {
    cout << v.at(i) << endl;
}
```
In this example, we are printing out a `vector<int>` twice. You can think of this as `O(2n)` since we are linearly scanning the vector twice. According to our second rule that we ignore constants however, our actual Big O is `O(n)`.

```cpp
for (int i = 0; i < v.size() / 2; i++) {
    cout << v.at(i) << endl;
}
```
In this example, we are printing out only half of the `vector<int>`. You can think of our runtime as `O(n/2)`. Since constants don't matter however, our Big O is `O(n)`.

```cpp
for (int i = 1; i < v.size(); i *= 2) {
    cout << v.at(i) << endl;
}
```
Although you may be tempted to think this is `O(n)` once again, the real answer is `O(log(n))`. You start with `i = 1 -> 2 -> 4 -> 8`. We double the `i` each time, meaning we cover twice the amount of space as the last step, thus skipping a different number of elements each time.

```cpp
for (int i = 0; i < v.size(); i++) { // 1
    for (int i = 0; i < v.size(); i += 2) { // 2
        cout << v.at(i) << endl; // 3
    } // 4
} // 5
for (int i = 1; i < v.size(); i *= 3) { // 6
    cout << v.at(i) << endl; // 7
}// 8
```

The loops from lines 1 - 5 have a Big O of `O(n`<sup>`2`</sup>`)`. Line 1 runs `O(n)` times and for each of those loop iterations, line 2 runs `O(n)` times as well, thus resulting in `O(n`<sup>`2`</sup>`)`. The loop from line 6 to line 8 runs `O(log(n))` times. You can think of this code segment as having an `O(n`<sup>`2`</sup>` + log(n))` runtime. Our highest ordered term is `n`<sup>`2`</sup> since it grows much faster than `log(n)`. Thus, our total runtime is `O(n`<sup>`2`</sup>`)`.

* As a side note, one of the harder algorithms to come up with a runtime is merge sort. For merge sort, you can think of it as having a `log(n)` number of recursive levels. Each level is `O(n)` because it is calling the `merge()` function. Thus, our runtime is `O(nlog(n))`.

## Exercises

Try to come up with the runtime for these ones on your own. The answers will be at the bottom, but try it for yourself first!

### Practice 1
```cpp
for (int i = 0; i < 5; i++) {
    for (int i = 3; i < v.size(); i += 2) {
        cout << v.at(i) << endl;
    }
}
```

### Practice 2
```cpp
int BinarySearch(int numbers[], int numbersSize, int key) {
   int mid;
   int low;
   int high;
   
   low = 0;
   high = numbersSize - 1;
   
   while (high >= low) {
      // prevent integer overflow by casting to unsigned
      mid = (int)((static_cast<unsigned>(high) + static_cast<unsigned>(low)) / 2);
      if (numbers[mid] < key) {
         low = mid + 1;
      }
      else if (numbers[mid] > key) {
         high = mid - 1;
      }
      else {
         return mid;
      }
   }
   
   return -1; // not found
}
```

### Practice 3
```cpp
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void sortAndPrint(vector<int> &v) {
    for (unsigned i = 0; i + 1 < v.size(); i++) {
        int minLoc = i;
        for (unsigned j = i + 1; j < v.size(); j++) {
            if (v.at(j) < v.at(minLoc)) {
                minLoc = j;
            }
        }
        swap(v.at(minLoc), v.at(i));
    }

    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}
```

## Answers

1. `O(n)`
2. `O(log(n))`
3. `O(n`<sup>`2`</sup>`)`

## Practice Exam

[Practice Exam](https://github.com/codyiskhuu/CS12winter2020/blob/master/sample_questions_cs12.pdf)

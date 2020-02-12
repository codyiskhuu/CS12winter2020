## Whomst'd've 6 Lesson Plan :thinking:
###### Email: ckhuu001@ucr.edu
###### SI Leader Cody Khuu

![alt text](https://github.com/codyiskhuu/CS-12-SI-Winter-2020/blob/master/images/wait.jpg "Logo Title Text 1")

Don't forget to sign in at: https://signmein.online/student/checkin
* **9:00 AM - 10:00 AM nHu9vZ**
* **11:00AM - 12:00 PM syJJS4**

---

## SIL Mid Quarter Evaluations
https://forms.gle/92MsYQvdrCop8pFi6

Exercise 1
---
Implement the following functions listed below, this lab serves as an mini-intro to linked lists.

```c++
#include <iostream>

using namespace std;

struct Block {
  public:
    int val;
    Block * next;
    Block(int val): val(val), next(0) {};
};

void addBlock(Block * start, int val) {
    
}

void printBlockChain(Block* b) {
    
}

//remove last
void removeLastBlock(Block* b) {
    
}

int main() {
    Block* genesis = new Block(3);
    addBlock(genesis,5);
    addBlock(genesis,8);
    addBlock(genesis,10);
    addBlock(genesis,3);
    printBlockChain(genesis);
    
    // do more testing here
    
    return 0;
}
```


## Week 2 Lesson Plan :thinking: 🖳︎
###### Email: ckhuu001@ucr.edu
###### SI Leader: Cody Khuu

![alt text](https://github.com/codyiskhuu/CS-12-SI-Winter-2020/blob/master/images/wait.jpg "Logo Title Text 1")

Don't forget to sign in at: https://signmein.online/student/checkin
* **9:00 AM - 10:00 AM nuNcZB**
* **11:00AM - 12:00 PM uJ1ggB**

---

## Parsing Command Line Arguments

For some applications, it is useful to pass in arguments from the command line to your program. Up until this point, you've been writing the `main()` but `main()` actually takes 2 arguments, `int argc` and `char* argv[]`.

`argc` is called the argument counter which counts the number of arguments passed in. Note that the program name itself counts as an argument so any additional arguments will be in index 1, 2, ..., and so on.

`argv[]` is called the argument vector which holds all of the passed in arguments. `argv[0]` will always be the name of the program. Additional arguments will be stored in index 2+.

### Program 1

You will write a program that prints all of the command line arguments that are passed.

**Example:** We have a program called `main.cpp` which compiles to `a.out`. If we called `./a.out hello world this is my input` then the program will print:

```
hello
world
this
is
my
input
```

**DO NOT PRINT THE PROGRAM NAME**

### Program 2

You will now use the command line argument to open a file that contains people's ages and will determine if they are able to drive.
If you are 16 or older, you can get your permit.
Given this input file:
```
21
20
15
23
6
100
```
Your program will create this output file:

```
Age 21: Can Drive
Age 20: Can Drive
Age 15: Too Young to Drive
Age 23: Can Drive
Age 6: Too Young to Drive
Age 100: Can Drive
```





### Program 3

You will now square numbers, but there are strings in the file too. Since squaring only makes sense with numbers, we will write to the output file `"string" is not a number, cannot be squared`.

**Example:**

Given this input file:

```
4
5
0
hi
3
6
foo
3
```

Your program will create this output file:

```
16
25
0
"hi" is not a number, cannot be squared
9
36
"foo" is not a number, cannot be squared
9
```

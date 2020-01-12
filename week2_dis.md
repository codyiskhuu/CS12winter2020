## Week 2 Lesson Plan :thinking:
###### ckhuu001@ucr.edu

We will be covering new ways to access the input and output stream. Also some console commands :P

### Standard Input & Output through the Keyboard
* `#include <iostream>` to do standard input and output operations
* ```cout``` and ```cin``` are *variables* provided by ```iostream```

* Output
   * `cout` is an **ostream** object that allows you to use `<<`, the **insertion operator**

      * `cout` will write words to the buffer. The buffer prints to the console when ```std::flush``` or ```std::endl``` is written.

* Input
   * `cin` is an **istream** object that allows you to use `>>`, the **extraction operation**

      * `cin` will only fetch "words" from the buffer. It will stop at whitespaces and newlines.

   * `getline()` is a function that reads a "line of words" from the buffer

---

### File Input and Output

We can use files as inputs for our programs and write to files rather then outputing it onto the consule. To do so we use **File Streams**.

* `#include <fstream>` is the libary for input ad output file operations
* **File input:**
   * You need to create a `ifstream` object
      * e.g `ifstream fileInput;`
   * Then open the file using `.open("name of file");`
      * `fileInput("file.txt");`
   * To make sure the file opened correctly, we use the `is_open()` operation
     * ```cpp
       if ( fileInput.is_open() ){ //Opened the file correctly
         cout << "File Opened!" << endl;
       }
       else{
         cout << "File Failed to Open :(" << endl;
         return 1; // 1 indicates an error
       }
       ```

   * Once the file is opened, we can read using the **extraction operator**
      * `fileInput >> variable;`
   * When you're done reading the file, we need to close it in order to use other files or even re-write this one.
      * `fileInput.close();`

* **File Output:**
   * You need to create a ofstream object
      * e.g `ofstream fileOut;`
   * We can actually create a new file by using the `.open("name of file")` function
   * If you input a file that already exist, it will delete the information in that file and replace it with whatever you write into it.

   * Same thing as File Input we can use `.is_open()` to see if the file opened properly
     * ```cpp
       if ( fileOut.is_open() ){ //Opened the file correctly
         cout << "File Opened!" << endl;
       }
       else{
         cout << "File Failed to Open :(" << endl;
         return 1; // 1 indicates an error
       }
       ```

   * To write in the file we have to use `<<` **Insertion Operation**
      * `fileOut <<"Megalovania" << endl;`

---
### Quick Bits
   * To compile a file we write `g++ "name of file".cpp`
      * e.g `g++ main.cpp`
   * If the file complies correctly (No errors), you'll get a `./a.out` file.
      * This is called **assembler output**
      * It's a file name to execute the program (in this case main.cpp)
      * The `./` is the terminal command to execute this exectable file. 

![alt text](https://github.com/codyiskhuu/CS-12-SI-Winter-2020/blob/master/images/wait.jpg "Logo Title Text 1")


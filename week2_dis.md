## Lesson Plan

We will be covering new ways to access the input and output stream. Also some console commands :P

### Standard Input & Output through the Keyboard
* `#include <iostream>` to do standard input and output operations
* ```cout``` and ```cin``` are *variables* provided by ```iostream```

* 'include <iostream>' to do standard input and output operations
* '''cout''' and '''cin''' are variables provided by '''iostream'''

* Output
   * 'cout' is an **ostream** object that allows you to use '<<', the **insertion operator**

      * 'cout' will write words to the buffer. The buffer prints to the console when '''std::flush''' or '''std::endl''' is written.

* Input
   * 'cin' is an **istream** object that allows you to use '>>', the **extraction operation**

      * 'cin' will only fetch "words" from the buffer. It will stop at whitespaces and newlines.

   * ' getline() ' is a function that reads a "line of words" from the buffer


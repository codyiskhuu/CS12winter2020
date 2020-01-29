## Week 4 Lesson Plan :thinking:
###### Email: ckhuu001@ucr.edu
###### SI Leader Cody Khuu

![alt text](https://github.com/codyiskhuu/CS-12-SI-Winter-2020/blob/master/images/wait.jpg "Logo Title Text 1")

Don't forget to sign in at: https://signmein.online/student/checkin
* **9:00 AM - 10:00 AM UCvgHR**
* **11:00AM - 12:00 PM e0eoff**
---


# Program 1

Create a class modeled after a car. Your class should include the following data members:

* Car brand
* Year
* Type
* Miles Driven

You will then create a program that allows a user to populate a list of the cars they own. After the user is done, your program will output the cars they own.

Here's a sample of how your program should function.

```
Hello! I'm a program that will help you keep track of your car inventory. Let's get started.

What's your car's brand?
"Hyundai" // words in "" is user input

When was your car made?
"2009"

What type of car is it?
"Coupe"

How many miles have you driven in it?
"321563"

That's a pretty cool car. Do you have any other cars? If so enter 'c' or to exit enter 'q'.
"c" // this will repeat the program
"q" // this will end the loop causing the program to output

Car Inventory:
1: Hyunday, 2009, Coupe, 321563
2: ...
...
```

You should use `private` and `public` properly along with creating the appropiate getters, setters, and methods.
#### There is a file name main.cpp on the main page of the git hub


# Program 2

Extend program 1 by allowing the user to export their car inventory to a file after they enter 'q'. It is in the same format as the output to standard output.

```
That's a pretty cool car. Do you have any other cars? If so enter 'c' or to exit enter 'q'.
"q" // this will end the loop causing the program to output

Do you want to export your inventory to a file? 'y' for yes and 'n' for no
"y"

Your inventory was exported to a file called "car-inventory.txt"
```

# Program 3

Create a program with the following classes and attributes:

1. Food
	* name of food
	* calories
	* protein
	* carbs

2. Meal
	* vector of food
	* name of meal
	* total calories
	* total protein
	* total carbs

Each class should have its own `.cpp` and header files.
Define the default constructor for each class and one other constructor with your choice of parameters.


The meal class needs to overload the `+` operator and will be used like so:

```c++
  Meal lunch;
  Food sandwich;
  Food apple;

  lunch = lunch + sandwich;
```

Where here the food item `sandwich` was added to the `lunch`'s food vector.

**Bonus:** Make the operator+ overload return a `void` and work with the following code below:
```c++
  Meal lunch;
  Food sandwich;
  Food apple;

  lunch + sandwich;
```

# Program 4

Overide the ostream operator `operator<<` for the Meal class. 
Print out an instance of the meal class in the following manner:

```bash
name of meal: ____
calories: _
protein: _
products: ___, ___, ____
```

To do this, it is also recommended you overload the `operator<<` for the Food class as well.

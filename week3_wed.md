## Week 3 Lesson Plan :thinking:
###### Email: ckhuu001@ucr.edu
###### SI Leader: Cody Khuu

![alt text](https://github.com/codyiskhuu/CS-12-SI-Winter-2020/blob/master/images/wait.jpg "Logo Title Text 1")

Don't forget to sign in at: https://signmein.online/student/checkin
* **9:00 AM - 10:00 AM zHPVTi**
* **11:00AM - 12:00 PM 5m7Um7**

---


## Structs

**Structs** allow us to create a new data type that groups together relevant data. If we wanted to keep track of a student say their name, age, and gender, normally we would have to create 3 separate variables to store that information.

```cpp
string name = "";
int age = 0;
string gender = "";
```

If we had tons of students we would have to rename the variables for each students.

```cpp
string name1 = "";
int age1 = 0;
string gender1 = "";

string name2 = "";
int age2 = 0;
string gender2 = "";
```

As you can see, this could get quite messy if we have to track a class worth of students. Structs allow us to group all 3 variables into a new data type.

```cpp
struct Student {
  string name;
  int age;
  string gender;
}

Student student1 = {"Bobo", 19, "Male"};
Student student2 = {"Lula", 19, "Female"};
```

Each variable inside a struct is referred to as a **data member** of the struct. If we wanted to access an individual data member, we would use the **dot operator**.

```cpp
struct Student {
  string name;
  int age;
  string gender;
}

Student student1 = {"Bobo", 19, "Male"};

// this will output: "Bobo19Male"
cout << student1.name << student1.age << student1.gender << endl;
```

We can also reassign the values after the data members were initialized, again using the dot operator.

```cpp
struct Student {
  string name;
  int age;
  string gender;
}

Student student1 = {"Bobo", 19, "Male"};

// this will output: "Bobo19Male"
cout << student1.name << student1.age << student1.gender << endl;

student1.age = 20;
// this will output: "Bobo20Male"
cout << student1.name << student1.age << student1.gender << endl;
```

Since structs are just new data types, we can use them in any situation that we use other types such as a return type for a function and the data type of a vector.

## Classes

Moving forward, we'll starting learning about **Object Oriented Programming**. This type of programming sets you to model your code's data as real life objects. Transactions, people, cars, basically anything can be modeled as an object in a program. You saw earlier that we were able to model a student in a struct. Structs however are quite limited on what they can do. Let's take a look at classes.

```cpp
class Student {
  public:
    void setName(string name);
    string getName();

    void setAge(int age);
    int getAge();

    void setGender(string gender);
    string getGender();
  private:
    string name;
    int age;
    string gender;
}
```
```cpp
string Student::getAge(){
  //your code here
}

```



The above code shows our student struct rewritten as a class. This looks like a lot more work to accomplish the same thing but it allows us to define exactly what a Student can do.

Items under the `public:` keyword can be accessed outside of the class while items under `private:` can only be accessed within the class. This allows us to do error checking inside our public methods before reassigning the values of the private data members.


---

## Exercise

### Have you heard of the game? Raid Shadow Legends?

### Shadow Man Here, to tell you about Raid Shadow Legends. Here is how we are going to see if people use my code "Shadow Man" to get 50k Gold and a Free Epic Champion.

![alt text](https://github.com/codyiskhuu/CS12winter2020/blob/master/images/raid%20shadow%20legends.JPG "Shadow Man") 

```cpp
class shadow {
  public:
    shadow ();
    shadow (string code);    

    void setName(string name);
    string getName();

    void setAge(int age);
    int getAge();

    void setGender(string gender);
    string getGender();

  private:
    string name;
    int age;
    string gender;
    int gold;
    string champ;

  private:
    void giveGold();
    void giveChamp();

}
```

In this short exercise I want you, the people, to write the constructors to see if people use my sign up code "Shadow Man" in this amazing game called Raid Shadow Legends.

```cpp
int main(){

  shadow player1;//constructor with no code = no gold and no champion

  shadow player2("legend27");//not a correct code = no gold and no champion

  shadow player3("Shaodw Man");//that's my code

  return 0;
}

```
---
## Sorry About that LOL, Have a nice day!!!

![alt text](https://github.com/codyiskhuu/CS12winter2020/blob/master/images/sorry.jpg "Twice Bowing")


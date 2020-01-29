#include <iostream>
#include <vector>
using namespace std;

class car{
    public:
        void getCar();

    private:
        //enter private info
};

void car :: getCar(){

    cout << "Hello! I'm a program that will help you keep track of your car inventory. Let's get started." <<endl;
    //user input

    cout << "What's your car's brand?" <<endl;
    //user input

    cout << "When was your car made?" <<endl;
    //user input

    cout << "What type of car is it?" <<endl;
    //user input

    cout << "How many miles have you driven in it?" <<endl;
    //user input

}

int main(){
    car c;
    vector <car> v;
    c.getCar();

    cout << "That's pretty cool car. Do you have any ohter cars? If so enter 'c' or to exit enter 'q'." <<endl;

    char s;
    cin >>s;

    while( s == 'c'){
        car temp;
        temp.getCar();
        cout << "That's pretty cool car. Do you have any ohter cars? If so enter 'c' or to exit enter 'q'." <<endl;
        cin>> s;
    }

    return 0;
}


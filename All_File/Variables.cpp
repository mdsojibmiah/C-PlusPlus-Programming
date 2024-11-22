#include<iostream>
using namespace std;

int main(){

    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    cout <<"Integer Number = " << myNum << "\n";
    cout <<"Floating Number = " << myFloatNum << "\n" ;
    cout <<"My Letter = " << myLetter << "\n";
    cout <<"MY text = " << myText << "\n";
    cout <<"My Boolean = "<< myBoolean << "\n";

    // Declare Many Variables
    int x=10,y=20,z=30;
    cout << "Result =  " << x+y+z << "\n";

    // Constant variable it must be assigned value
    const int marked = 20;
    cout << "Constant Variable = " << marked << "\n";


    return 0;
}

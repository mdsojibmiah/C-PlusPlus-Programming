#include<iostream>
using namespace std;

int main(){
 //use the getline() function to read a line of text.

    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;

    string firstName;
    cout << "Enter your name = ";
    cin >> firstName;
    cout << "Your name is : " << firstName << "\n";




    return 0;
}

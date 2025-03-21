#include <iostream>
using namespace std;

int main () {

    //variables
    string firstName;
    string lastName;
    string streetAddress;
    string city;
    int zipCode;

    //prompts for user
        cout << "Enter your first name: ";
        cin >> firstName;
        
        cout << "Enter your last name: ";
        cin >> lastName;

        cin.ignore();
        cout << "Enter your street address: ";
        getline (cin, streetAddress);
        
        cout << "Enter your city: ";
        getline (cin, city);

        cout << "Enter your zip code: ";
        cin >> zipCode;

    //cout
    cout << firstName << endl;
    cout << lastName << endl;
    cout << streetAddress << endl;
    cout << city << endl;
    cout << zipCode << endl;
return 0;
}
#include <iostream>
using namespace std;

int main() {
    
    string name;
    
    cout << "Enter your Name: ";
    cin >> name;
    
    int age;
    
    cout << "Enter your Age: ";
    cin >> age;
    
    int bornYear = (2024 - age);
    
    int birthMonth;
    
    cout << "Enter numeric Month (1 - 12): ";
    cin >> birthMonth;
    
    cout << "Good Day " << name << " you were born Last ";
    
    if (birthMonth == 1) {
        cout << "January ";
    } else if (birthMonth == 2) {
        cout << "February ";
    } else if (birthMonth == 3) {
        cout << "March ";
    } else if (birthMonth == 4) {
        cout << "April ";
    } else if (birthMonth == 5) {
        cout << "May ";
    } else if (birthMonth == 6) {
        cout << "June ";
    } else if (birthMonth == 7) {
        cout << "July ";
    } else if (birthMonth == 8) {
        cout << "August ";
    } else if (birthMonth == 9) {
        cout << "September ";
    } else if (birthMonth == 10) {
        cout << "October ";
    } else if (birthMonth == 11) {
        cout << "November ";
    } else if (birthMonth == 12) {
        cout << "December ";
    }
    
    cout << bornYear;
    
    
    
    return 0;
}
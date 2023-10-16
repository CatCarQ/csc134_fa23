#include <iostream>
using namespace std;

int main() {
    char choice;

    cout << "Welcome to the Choose Your Own Adventure Game!" << endl;
    cout << "You find yourself at a crossroad. Which path will you choose?" << endl;
    
    cout << "A. Take the left path" << endl;
    cout << "B. Take the right path" << endl;

    cout << "Enter your choice (A/B): ";
    cin >> choice;

    if (choice == 'A' || choice == 'a') {
        cout << "You chose the left path. You discover a hidden treasure!" << endl;
    }
    else if (choice == 'B' || choice == 'b') {
        cout << "You chose the right path. You encounter a ferocious dragon!" << endl;
        cout << "What will you do now?" << endl;
        
        cout << "A. Fight the dragon" << endl;
        cout << "B. Run away" << endl;

        cout << "Enter your choice (A/B): ";
        cin >> choice;

        if (choice == 'A' || choice == 'a') {
            cout << "You bravely fought the dragon but were defeated. Game over!" << endl;
        }
        else if (choice == 'B' || choice == 'b') {
            cout << "You wisely ran away and escaped the dragon's wrath. Well done!" << endl;
        }
        else {
            cout << "Invalid choice. Game over!" << endl;
        }
    }
    else {
        cout << "Invalid choice. Game over!" << endl;
    }

    return 0;
}

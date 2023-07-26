#include <iostream>
using namespace std;

int main() {
    int choice1, choice2;

    // Display the first menu
    cout << "Choose an option from the menu:" << endl;
    cout << "1. Option 1" << endl;
    cout << "2. Option 2" << endl;
    cout << "3. Option 3" << endl;
    cin >> choice1;

    // Process the user's first choice
    switch (choice1) {
        case 1:
            // Display the second menu for option 1
            cout << "You selected Option 1." << endl;
            cout << "Choose an option from the submenu:" << endl;
            cout << "1. Suboption 1" << endl;
            cout << "2. Suboption 2" << endl;
            cin >> choice2;
            // Process the user's second choice for option 1
            switch (choice2) {
                case 1:
                    cout << "You selected Suboption 1." << endl;
                    break;
                case 2:
                    cout << "You selected Suboption 2." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
            }
            break;
        case 2:
            // Display the second menu for option 2
            cout << "You selected Option 2." << endl;
            cout << "Choose an option from the submenu:" << endl;
            cout << "1. Suboption 1" << endl;
            cout << "2. Suboption 2" << endl;
            cin >> choice2;
            // Process the user's second choice for option 2
            switch (choice2) {
                case 1:
                    cout << "You selected Suboption 1." << endl;
                    break;
                case 2:
                    cout << "You selected Suboption 2." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
            }
            break;
        case 3:
            // Display the second menu for option 3
            cout << "You selected Option 3." << endl;
            cout << "Choose an option from the submenu:" << endl;
            cout << "1. Suboption 1" << endl;
            cout << "2. Suboption 2" << endl;
            cin >> choice2;
            // Process the user's second choice for option 3
            switch (choice2) {
                case 1:
                    cout << "You selected Suboption 1." << endl;
                    break;
                case 2:
                    cout << "You selected Suboption 2." << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                    break;
            }
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }

    return 0;
}

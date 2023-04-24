#include <iostream>
#include <string>

using namespace std;

// Declare global variables for username and password
string username, password;

// Function to login with existing credentials
void login() {
    string input_username, input_password;
    cout << "Enter username: ";
    cin >> input_username;
    cout << "Enter password: ";
    cin >> input_password;
    // Check if input credentials match global variables
    if (input_username == username && input_password == password) {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid username or password." << endl;
    }
}

// Function to create a new account
void createAccount() {
    cout << "Enter a new username: ";
    cin >> username;
    cout << "Enter a new password: ";
    cin >> password;
    cout << "Account created successfully!" << endl;
}

int main() {
    int choice;
    do {
        // Display menu options
        cout << "LogIn Form" << endl;
        cout << "[1] Login" << endl;
        cout << "[2] Create an Account" << endl;
        cout << "[3] Exit" << endl << endl;
        cout << "Choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                login();
                cout << endl;
                break;
            case 2:
                createAccount();
                cout << endl;
                break;
            case 3:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 3);
    return 0;
}

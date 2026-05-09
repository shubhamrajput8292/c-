#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registerUser()
{
    string username, password;
    string fileUser, filePass;
    bool found = false;

    cout << "\n===== Registration =====\n";

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username.empty() || password.empty())
    {
        cout << "Username or Password cannot be empty.\n";
        return;
    }

    ifstream readFile("users.txt");

    while (readFile >> fileUser >> filePass)
    {
        if (fileUser == username)
        {
            found = true;
            break;
        }
    }

    readFile.close();

    if (found)
    {
        cout << "Username already exists.\n";
    }
    else
    {
        ofstream writeFile("users.txt", ios::app);

        writeFile << username << " " << password << endl;

        writeFile.close();

        cout << "Registration Successful.\n";
    }
}

void loginUser()
{
    string username, password;
    string fileUser, filePass;
    bool success = false;

    cout << "\n===== Login =====\n";

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    ifstream readFile("users.txt");

    while (readFile >> fileUser >> filePass)
    {
        if (fileUser == username && filePass == password)
        {
            success = true;
            break;
        }
    }

    readFile.close();

    if (success)
    {
        cout << "Login Successful.\n";
    }
    else
    {
        cout << "Invalid Username or Password.\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Login and Registration System =====\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                registerUser();
                break;

            case 2:
                loginUser();
                break;

            case 3:
                cout << "Program Ended.\n";
                break;

            default:
                cout << "Invalid Choice.\n";
        }

    } while (choice != 3);

    return 0;
}
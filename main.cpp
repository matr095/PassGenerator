#include <iostream>
#include <random>
#include <string>
#include "Password.h"

using namespace std;

int main() {
    std::cout << "Welcome to PassGenerator" << std::endl;
    std::cout << "This utility generates you a secure password" << endl;
    cout << "Choose a level security:" << endl;
    cout << "1. Generate a password with 6 alphabetical characters [a-z]" << endl;
    cout << "2. Generate a password with 8 alphabetical characters [a-z0-9]" << endl;
    cout << "3. Generate a password with 10 alphabetical characters [a-z0-9 @ & §! € ù $ *]" << endl;
    string choix;
    string passwd;
    while(choix != "1" || choix != "2" || choix != "3") {
        cin >> choix;
        cout << endl;
        Password pass;
        if (choix == "1") {
            pass.generate(stoi(choix));
        }
        else if (choix == "2") {
            pass.generate(stoi(choix));
        }
        else if (choix == "3") {
            pass.generate(stoi(choix));
        }
        else {
            cout << "Try again" << endl;
        }
    }
    return 0;
}
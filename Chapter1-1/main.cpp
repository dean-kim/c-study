//
// Created by KEUNU on 05/11/2018.
//

#include <iostream>
#include <string>


using namespace std;

int main()
{

    cout << "Your name ? : ";
    string name;
    //cin >> name;
    std::getline(std::cin, name);

    cout << "your age ? : ";
    string age;
    //cin >> age;
    std::getline(std::cin, age);

    cout << name << " " << age <<endl;

    return 0;

}
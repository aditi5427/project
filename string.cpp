#include <iostream>
using namespace std;

int main()
{
    string name = " My name is Aditi ";

    cout << name << endl;
    cout << name.length() << endl;
    cout << name[3] << endl;
    cout << name.find("Aditi") << endl;
    cout << name.substr(8, 3);

    int age;
    cout << "Enter your age " << endl;
    cin >> age;

    cout << " I am " << age << " years old " << endl;

    return 0;
}
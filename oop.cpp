#include <iostream>
using namespace std;

class employee
{
    public:
    string Name;
    string Address;
    int Age;

    void IntroduceMyself()
    {
        cout << "Name- " << Name << endl;
        cout << "Address- " << Address << endl;
        cout << "Age- " << Age << endl;
    }
};

int main()
{
    employee employee1;
    employee1.Name = "Aditi";
    employee1.Address = "Ashanagar";
    employee1.Age = 20;
    
    employee1.IntroduceMyself();

    return 0;
}
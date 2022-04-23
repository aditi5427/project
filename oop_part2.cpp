#include <iostream>
using namespace std;

class Car
{
public:
    string Name;
    string Color;
    int Price;

    void Introduce()
    {
        cout << "Name- " << Name << endl;
        cout << "Color- " << Color << endl;
        cout << "Pricr- Rs " << Price << endl;
    }

    Car(string name, string color, int price)
    {
        Name = name;
        Color = color;
        Price = price;
    }
};

int main()
{
    Car car1 = Car("Maruti", "Black", 1100000);
    car1.Introduce();

    Car car2 = Car("Ferrai", "Red", 2000000);
    car2.Introduce();
    return 0;
}
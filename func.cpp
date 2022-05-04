#include <iostream>
using namespace std;

int sub(int a, int b  )
{
  int c = a - b;

    return c;
}

int main()
{

    int a, b ;
    cout << "Enter the first value " << endl;
    cin >> a;

    cout << "Enter the second value " << endl;
    cin >> b;

    cout << "Answer is " << sub( a , b) << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
cout << "Enter A and B: ";
double a, b;
cin >> a >> b;
if(a>b)
    cout<<"MAX :" <<a<<endl;
cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';
    return 0;
}

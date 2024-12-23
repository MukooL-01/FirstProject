#include <iostream>
using namespace std;

int factorial(int value)
{
    int fact =1;
    if(value==1||value==0)
    {
        return 1;
    }
    else
    {
        return fact=value* factorial(value-1);
    }
}

int main()
{
    int value;
    cout<<"Enter value for Factorial ";
    cin>>value;

    cout<<"Factorial is : "<<factorial(value);

    return 0;
}
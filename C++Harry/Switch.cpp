#include <iostream>
using namespace std;

int main() {

int age;
cout<<"enter your age: "<<endl;
cin>>age;

switch (age)
{
case 18:
    cout<<"You are now an adult ";
    break;
case 12:
cout<<"You are 6 years away from becoming adult";
break;
default:
cout<<"Congrats you were born in this world";
    break;
}
    return 0;

}
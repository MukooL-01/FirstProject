#include <iostream>
#include <string>

using namespace std;

int c=69;

int main()
{

int a,b,c;
cout<<"enter A"<<endl;
cin>>a;

cout<<"enter B"<<endl;
cin>>b;

c=a+b;

cout<<"Sum is (OR local value of C is ): "<<c<<endl;
cout<<"Global Value of C is : "<<::c<<endl;
// --------------------------------FLOAT LITERALS---------------------------------
float p=33.2;
long double d=33.2;

cout<<p<<endl<<d<<endl;
/*both will print same number buttt
BY DEFAULT ANY DECIMAL NUMBER IS A (DOUBLE) IN C++*/ 

// ----------------------------------rEFERENCE VARIABLES------------------------------------------
float x=55.2;
float &y=x;

cout<<x<<endl<<y;

//this means that we are using y as x [without initializing] it with (y=x);

// -----------------------------TYPECASTING------------------------------------------

float t=21.69;
cout<<"THE VALUE OF A IS : "<<t<<endl;
cout<<"THE VALUE AFTER TYPECASTING IS "<<(int)t<<endl;
    return 0;
}
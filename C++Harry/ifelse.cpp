#include <iostream>
using namespace std;

int main() {

int age;
cout<<"enter your age : "<<endl;
cin>>age;
if (age>100){
    cout<<"Invalid age"<<endl;
}
else if(age>=18){
        cout<<"You are an adult "<<endl;
}
else if(age<0){
    cout<<"paida to hoja phle"<<endl;
}

else {
    cout<<"You are a pokin minor"<<endl;
}
  return 0;  
} 
#include <iostream>
using namespace std;

class Student {
    public:
    int marks;
    string name;
    void printDetails() {
  
cout<<"Name is : "<<this->name<<endl;
cout<<"Marks is : "<<this->marks<<endl;
      
    }

};

int main() {
class Student s1,s2,s3;
s1.marks=69;
s1.name="Mukul";

s2.marks=66;
s2.name="Nitush";

s3.marks=88;
s3.name="Samay";

s1.printDetails();
s2.printDetails();
s3.printDetails();
// cout<<"Name is : "<<s1.name<<endl;
// cout<<"Marks is : "<<s1.marks<<endl;

    return 0;
}

#include <iostream>
using namespace std;

class Employee {
    public:
    int salary;
    string name;
    
    Employee(string n,int s,int sp){
        this->salary=s;
        this->name=n;
        this->secretPassword=sp;

    }
    void printdtl() {
        cout<<"The name of Employee is : "<<this->name<<endl;
        cout<<"Sallary of the employee is : "<<"$"<<this->salary<<endl;
        cout<<"Secret password is : "<<this->secretPassword<<endl;
    }

private:

    int secretPassword;
    
};
int main() {
Employee e1("Mukul",500,3423);
Employee e2("Samay",300,6968);

e1.printdtl();
e2.printdtl();

    return 0;
}
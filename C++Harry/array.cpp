#include <iostream>
using namespace std;

int main() {

 // int arr[]={5,4};
// for(int i=0;i<2;i++) {
//     cout<<arr[i]<<endl;


    int arr2[2][3]={{12,23,45},{11,13,54}};
    for(int j=0;j<2;j++){ 
        for(int k=0;k<3;k++){
            cout<<"The value at "<<j<<" , "<<k<<"is : "<<arr2[j][k]<<endl;
        }
    }

    return 0;
}
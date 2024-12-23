#include <stdio.h>
int main() {
    int marks ;
    printf("enter marks : \n");
    scanf("%d",&marks);

    if(marks < 30){
        printf("Your Grade is C \n ");
    }
else if(70 > marks && marks >= 30 ){
    printf("Your Grade is B \n ");
}
else if(70 <= marks && marks < 90 ){
printf("Your Grade is A \n ");
}
else if(90 <= marks && marks <=100) {
    printf("Your Grade is A+ \n ");
}
else 
printf("Invalid Marks");
    return 0;

}
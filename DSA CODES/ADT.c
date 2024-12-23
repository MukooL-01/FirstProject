#include <stdio.h>
#include <stdlib.h>
struct myArr
{
    int total_size;
    int used_size;
    int *ptr;
};
void createArray(struct myArr *u,int tSize,int uSize)
{
    (*u).total_size=tSize;
    (*u).used_size=uSize;
    (*u).ptr=(int*)malloc(tSize*sizeof(int));
}
void showArr(struct myArr *u)
{
    for(int i=0;i < (*u).used_size;i++)
    {
        printf("%d\n",(u->ptr)[i]);
    }
}

void enterVal(struct myArr *u)
{
    for(int i=0;i < (*u).used_size;i++)
    {
        printf("Enter Elements : ");
        scanf("%d",&(u->ptr)[i]);
    }
}
int main()
{

    struct myArr marks;
    createArray(&marks,10,2);
        printf("We are running Enter Val now : \n");
    enterVal(&marks);
        printf("We are running Show Arr now : \n");
    showArr(&marks);
    free(marks.ptr);
    return 0;
}
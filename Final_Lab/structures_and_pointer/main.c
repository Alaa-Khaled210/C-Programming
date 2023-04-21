#include <stdio.h>
#include <stdlib.h>
#include "my_fun.h"


struct student
{
    char name [50];
    char id [14];
    char grade [20];
};
int main()
{

    struct student std[STD_NUM];

    struct student *ptr = NULL;
    ptr=std;

    for(int i=0 ; i < STD_NUM ; i++)
    {
        printf("please Enter info of student : %d\n \n", (i + 1));
        std[i]=getDetail();
        /* printf("The_Id :  ");
        scanf("%s",ptr->id);

        printf("The_Name :  ");
        scanf("%s",ptr->name);

        printf("The_Grade :  ");
        scanf("%s",ptr->grade);*/

        ptr++;
    }
    ptr=std;

    for (int i = 0; i < STD_NUM ; i++)
    {
        printf("\nInfo of student :%d\n \n", (i + 1));

        // display result via std variable
        /*printf("Result via std :\n ");
        printf("The_Id: %s\n", std[i].id);
        printf("The_Name: %s\n", std[i].name);
        printf("The_Grade: %s\n \n", std[i].grade);*/
        disblay_var(std[i]);
        // disblay_potr(ptr);


        // display result via ptr variable
        printf("Result via ptr : \n ");
        printf("The_Id: %s\n",ptr->id);
        printf("The_Name: %s\n",ptr->name);
        printf("The_Grade: %s\n", ptr->grade);


        // update pointer to point at next element
        // of the array std
        ptr++;
    }

    return 0;
}
void disblay_var(struct student std)
{
    // display result via std variable
    printf("Result via std :\n ");
    printf("The_Id: %s\n", std.id);
    printf("The_Name: %s\n", std.name);
    printf("The_Grade: %s\n \n", std.grade);
}

/*void disblay_potr(struct student std_ptr){
    // display result via ptr variable
   printf("Result via ptr : \n ");
    printf("The_Id: %s\n",std_ptr->id);
    printf("The_Name: %s\n",std_ptr->name);
    printf("The_Grade: %s\n",std_ptr->grade);
}*/

struct student getDetail(void)
{
    // temp structure variable
    struct student std;
    printf("The_Id :  ");
    scanf("%s",std.id);

    printf("The_Name :  ");
    scanf("%s",std.name);

    printf("The_Grade :  ");
    scanf("%s",std.grade);

    return std;

}



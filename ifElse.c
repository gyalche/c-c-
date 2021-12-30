#include<stdio.h>

int main()
{
    int age;
    printf("enter your age");
    scanf("%d", age);

    printf("Since you have entered%d your age as\n", age);
    if(age>=18){
        printf("you are to vote");
    }
    else if(age<18){
        printf(
        "you are under age"
        );
    }
    // return 0;
}

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;

    printf("Entter your age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 18:
        printf("YOu can vote");
        break;
    case 10:
        printf("You cannot vote");
        break;
    
    default:
        printf("haha");
        break;
    }
    return 0;
}

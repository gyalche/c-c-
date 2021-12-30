#include <stdio.h>

int main(int argc, char const *argv[])
{
    // label:
    //     printf("We are inside label\n ");
    //     goto end;

    // printf("hellow world");
    // goto label;
    // end:
    //     printf("we are at the end");
    int num;
    for (int i = 0; i < 8; i++){
        printf("%d", i);
        for (int j = 0; j < 8; j++)
        {
            printf("enter the number. Enter 0 to exit");
            scanf("%d", &num);
            /* code */
        }
        
    }
    
    

    return 0;
}

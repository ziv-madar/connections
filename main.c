#include <stdio.h>
#include "my_mat.c"


int main(){

    char program;
    int i,j;


    while (program != 'D')
    {
        scanf("%c",&program);
        if (program == 'A')
        {
            A();
        }
        if (program == 'B')
        {
            scanf("%d %d", &i , &j);
            if(B(i,j) == 0){
                printf("false");
            }
            else printf("true");
        }
        if(program == 'C')
        {
            scanf("%d %d", &i , &j);
            printf("%d",C(i,j));
        }
        
          
    }

    return 1;
}
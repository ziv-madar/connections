#include <stdio.h>

int arr[10][10];

void floidwarshel()
{
   for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
        for (int k = 0; k < 10; k++){
            if (arr[j][k] > arr[j][i] + arr[i][k])
            {
                arr[j][k] = arr[j][i] + arr[i][k];
            }
        }
    }
   }
    
}
    
void A ()
{
    for (int cols= 0 ; cols < 3 ; cols++){
        for (int row = 0; row < 3; row++)
        {
            scanf("%d",&arr[cols][row]);
        }
        floidwarshel(arr);
        
    }
}

int B(int i, int j)
{

    if (arr[i][j] == 0)
    {
        return 0;
    }
    else {return 1;}
}

int C(int i, int j)
{

    if (B(i,j) == 1)
    {
    return arr[i][j];
    }
    else return -1;

}

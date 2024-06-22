/*4. Write a program that takes a matrix as
     input and prints its upper triangle.
*/

#include<stdio.h>

int main()
{
    int row , column ;

    printf("Enter row length please : ");
    scanf("%d" , &row);

    printf("\nEnter column length please : ");
    scanf("%d" , &column);

    int mat[row][column] , k , r  ;
    for(k = 0 ; k < row ; k++)
    {
        for(r = 0 ; r < column ; r++)
        {
            printf("Enter elements of row %d column %d\n" , k+1 , r+1);
            scanf("%d" , &mat[k][r]);

        }
    }

    system ("cls") ;

    printf("\nThe given Matrix is : \n\n");

    for(k = 0 ; k < row ; k++)
    {
        for(r = 0 ; r < column ; r++)
        {
            printf("\t%d   " , mat[k][r]);
        }
        printf("\n");
    }

    printf("\nThe Upper Triangle matrix is : \n\n");
    for(k = 0 ; k < row ; k++)
    {
        for(r = 0 ; r < column ; r++)
        {
            if(r >= k)
            {
                printf("\t%d   " , mat[k][r]);
            }
            else
            {
                printf("\t   ");
            }
        }
        printf("\n");
    }
   return 0 ;
}
    //This is the END of this program.
    //Thank you.

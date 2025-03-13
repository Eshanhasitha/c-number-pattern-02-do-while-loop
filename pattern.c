#include<stdio.h>
int main(){
    
    //variable to store the number of rows
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    int a=rows;
    int i=1;
    int j;
    int k=rows-1;
    int l;

    //outer loop to print the upper half of rows of the pattern
    do
    {
        j=1;
        //inner loop to print the numbers in each row
        do
        {
            printf("%d",j);
            j++;
        } while (j<=i);
        
        printf("\n");
        i++;
    } while (i<=a);

    //outer loop to print the lower half of rows of the pattern
    do
    {   
        l=1;
        //printing the numbers in each row 
        do
        {
            printf("%d",l);
            l++;
        } while (l<=k);
        
        printf("\n");
        k--;
    } while (k>=1);
    


    return 0;
    
    
}
    

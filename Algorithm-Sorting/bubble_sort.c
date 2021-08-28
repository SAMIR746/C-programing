// Project Name   - bubble_sort.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 08/23/21, 11:43:14 PM


#include<stdio.h>
#define MAX_SIZE  100

int input(int A[],int C_size);
void bubble_sort(int A[], int C_size);
void print(int A[], int C_size);

int main()
{
    int A[MAX_SIZE];
    int C_size;
    printf("input the size of array : ");
    scanf("%d",&C_size);

    input(A,C_size);
    bubble_sort(A,C_size);
    print(A,C_size);

    return 0;
}
int input(int A[],int C_size)
{
    int i;
   for ( i = 0; i < C_size; i++)
   {
       scanf("%d",&A[i]);
   }
   
}
void bubble_sort(int A[], int C_size)
{
    int i,j,swap;
    for ( i = 0; i < C_size -1; i++)
    {
        for ( j = 0; j < C_size - i - 1 ; j++)
        {
        if (A[j]> A[j+1])
        {
            swap = A[j];
            A[j] = A[j+1];
            A[j+1] = swap;
        }
        }
        
    }
}
void print(int A[], int C_size)
{
    int i; 
    printf("sorted Arrey : ");
    for (i = 0; i < C_size; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

// Project Name   - insertation_sort.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 08/25/21, 10:07:54 PM

#include<stdio.h>
#define MAX_SIZE 100

void Element_insert(int arr[], int c_size);
void Insertion_sort(int arr[],int c_size);
void print(int arr[],int c_size);

int main()
{
    int arr[MAX_SIZE],c_size;
    printf("Enter the size of arrey : ");
    scanf("%d",&c_size);
    
    Element_insert(arr,c_size);
    Insertion_sort(arr,c_size);
    print(arr,c_size);

   return 0;
}
void Element_insert(int arr[], int c_size)
{
    int i;
    for(i=0 ;i<c_size;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void Insertion_sort(int arr[],int c_size)
{
    int i,j,store;
    for(i= 0 ; i<c_size ; i++)
    {
        store = arr[i];
        j = i-1;

        while (j>=0 && store< arr[j])
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = store ;
    }
}

void print(int arr[],int c_size)
{
    int i;
    printf("insersion sort : ");
    for(i= 0 ; i<c_size ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
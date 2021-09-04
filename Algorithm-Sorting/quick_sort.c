// Project Name   - quick_sort.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 09/04/21, 10:22:24 PM

#include<stdio.h>
#define MAX_SIZE 100
void insert(int arr[],int x);
void quicksort(int arr[],int first,int last);
void print(int arr[], int x);

int main()
{
   int i, x, arr[MAX_SIZE];

   printf("Enter Size of Array : ");
   scanf("%d",&x);


   insert(arr,x);
   quicksort(arr,0,x-1);
   print(arr,x);


   return 0;
}
void insert(int arr[],int x)
{
    int i;
    printf("Enter %d elements: ", x);
    for(i=0;i<x;i++)
    scanf("%d",&arr[i]);
}

void quicksort(int arr[],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(arr[i]<=arr[pivot]&&i<last)
            i++;
         while(arr[j]>arr[pivot])
            j--;
         if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }

      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      quicksort(arr,first,j-1);
      quicksort(arr,j+1,last);

   }
}

void print(int arr[], int x)
{
    int i;

   printf("Sorted Array : ");
   for(i=0;i<x;i++)
      printf(" %d",arr[i]);
}

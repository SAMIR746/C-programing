// Project Name   - merge_sort2.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 08/27/21, 04:38:37 PM

#include<stdio.h>
#define MAX_SIZE 100

void insert (int a[], int c_size);
void mergesort(int a[],int sp,int ep);
void merge(int a[],int sp1,int ep1,int sp2,int ep2);

int main()
{
    int a[MAX_SIZE];
    int c_size ,i;
    printf("Enter the size of array :");
    scanf("%d",&c_size);

    insert (a,c_size);

    mergesort(a,0,c_size-1);

   printf("\nSorted array is :");
   for(i=0;i<c_size;i++)
   printf("%d ",a[i]);
   printf("\n");


    return 0;
}

void insert (int a[], int c_size)
{
    int i;
    printf("Enter array elements: ");
    for(i=0;i<c_size;i++)
    scanf("%d",&a[i]);
}

void mergesort(int a[],int sp,int ep)
{
int mid;
if(sp<ep)
{
mid=(sp+ep)/2;
mergesort(a,sp,mid);
mergesort(a,mid+1,ep);
merge(a,sp,mid,mid+1,ep);
}
}

void merge(int a[],int sp1,int ep1,int sp2,int ep2)
{
int temp[MAX_SIZE];
int i,j,k;
i=sp1;
j=sp2;
k=0;
while(i<=ep1 && j<=ep2)
{
   if(a[i]<a[j])
    {
     temp[k]=a[i];
     k++;
     i++;
    }
  else
   {
     temp[k]=a[j];
     k++;
     j++;
   }
}
while(i<=ep1)
  {
     temp[k]=a[i];
     k++;
     i++;
  }
while(j<=ep2)
   {
    temp[k]=a[j];
    k++;
    j++;
   }
for(i=sp1,j=0;i<=ep2;i++,j++)
   {
    a[i]=temp[j];
   }
}

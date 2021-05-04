//function definitions
#include<stdio.h>
#include"header.h"
#include<time.h>
#include<stdlib.h>

extern unsigned long long ele_to_ele_compare;
//function to display the array
void displayArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d\n",arr[i]);
    printf("\n");
}

//partition array by finding pivot element
int partition(int a[], int start, int end)
{
    int i = start+1;
    int j = end;
    int p = a[start];
    int temp;
    while(i<=j)
    {
        while(a[i]<=p && i<=end)
        {
            i++;
            ele_to_ele_compare++;
        }
        while(a[j]>=p && j>start)
        {
            j--;
            ele_to_ele_compare++;
        }
        if(i<j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    if(j!=start)
    {
        temp = a[j];
        a[j] = a[start];
        a[start] = temp;
    }
    return j;
}

//Implementation of quick sort algorithm
void quick_sort(int a[], int start, int end)
{
    if(start<end)
    {
        int s = partition(a, start, end);
        quick_sort(a, start, s);
        quick_sort(a,s+1, end); 
    }    
}
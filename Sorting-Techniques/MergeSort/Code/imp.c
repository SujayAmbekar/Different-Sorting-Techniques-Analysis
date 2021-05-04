//function definitions
#include<stdio.h>
#include"header.h"
#include<stdlib.h>
#include<math.h>  

//function to merge 2 arrays into 1 array
int merge(int B[], int C[], int arr[], int lsize, int rsize)
{
    int ele_to_ele_compare=0;
    int size=lsize+rsize;
    int i=0,j=0,k=0;     
    while(i<lsize && j< rsize)
    {
        ele_to_ele_compare++;
        if(B[i]<=C[j])
        {
            arr[k]=B[i];
            i++;
        }
        else
        {
            arr[k]=C[j];
            j++;
        }
        k++;
    }    
    if(i==lsize)
    {
        for(;j<rsize;j++)
        {
            arr[k]=C[j];
            k++;
        }
    }
    else
    {
        for(;i<lsize;i++)
        {
            arr[k]=B[i];
            k++;
        }
    }    
   return ele_to_ele_compare;
}
//Implementation of merge sort algorithm
int merge_sort(int arr[], int size)
{
    
    int count;
    int lsize,rsize,k=0;   
    int *B=(int*)malloc(size * sizeof(int));
    int *C=(int*)malloc(size * sizeof(int));
    if (size>1)
    {
        lsize=floor(size/2);
        rsize=size-lsize;
        for(int i=0;i<lsize;i++)
        {
            B[i]=arr[i];
        }        
        for(int i=lsize;i<size;i++)
        {
            
            C[k]=arr[i];
            k++;
        }       
        //Recursively calling mergesort
        merge_sort(B,lsize);
        merge_sort(C,rsize);
        count+=merge(B,C,arr,lsize,rsize);         
        free(B);
        free(C);          
    }   
    return count;
}

//function to display the array
void displayArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d\n", arr[i]);
    printf("\n");
}


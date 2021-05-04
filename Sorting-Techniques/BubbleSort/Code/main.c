//Driver function
#include<stdio.h>
#include"header.h"
#include<time.h>
#include<stdlib.h>

int main() 
{ 	
    int n;//size of array
    for(n=100000;n<1000000;n+=50000)
    {
    	int *arr=(int*)malloc(n * sizeof(int));
	    clock_t start,end;
		for(int i=0;i<n;i++)
		{	  
			arr[i]=rand(); 
		}
		start=clock();
		bubble_sort(arr,n);
		end=clock();	 
		// printf("Array after sorting:\n"); 
		// displayArray(arr,n); 
		printf("Execution Time:%f\n",(float)(end-start)/CLOCKS_PER_SEC);
		free(arr);
	}
	return 0; 
} 
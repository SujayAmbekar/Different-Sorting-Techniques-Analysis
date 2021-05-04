//Driver function
#include<stdio.h>
#include"header.h"
#include<time.h>
#include<stdlib.h>

unsigned long long ele_to_ele_compare = 0;
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
		quick_sort(arr,0,n-1);
		end=clock();	 
		// printf("Array after sorting:\n"); 
		// displayArray(arr,n); 
		printf("Number of element to element comparisons:%llu\n",ele_to_ele_compare);
		printf("Execution Time:%f\n",(float)(end-start)/CLOCKS_PER_SEC);
		ele_to_ele_compare = 0;
		free(arr);
	}
	return 0; 
} 
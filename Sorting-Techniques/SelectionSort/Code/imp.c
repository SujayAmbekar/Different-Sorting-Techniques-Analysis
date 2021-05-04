//function definitions
#include<stdio.h>
#include"header.h"
#include<time.h>
#include<stdlib.h>

//function to swap elements
void swap_element(int *a, int *b) 
{ 
	int temp;
	temp = *a; 
	*a = *b; 
	*b = temp; 
} 

//Implementation of selection sort algorithm
void selection_sort(int arr[], int n) 
{ 
	int i,j,min_index; 
	unsigned long long ele_to_ele_compare = 0;	 
	for (i = 0; i < n-1; i++) 
	{ 	
	    //finding the minimum element
		min_index = i; 
		for (j = i+1; j < n; j++) 
		{
			if (arr[j] < arr[min_index]) 
			{
				min_index = j; 
			}					
			ele_to_ele_compare++;	
	    }
		//Calling Swap function 
		swap_element(&arr[min_index], &arr[i]); 
	} 
	printf("Number of element to element comparisons:%llu\n",ele_to_ele_compare);
} 

//function to display the array
void displayArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d\n",arr[i]); 
	printf("\n"); 
} 

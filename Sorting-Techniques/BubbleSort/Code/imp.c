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

//Implementation of bubble sort algorithm
void bubble_sort(int arr[], int n) 
{ 
	int i, j; 
	unsigned long long ele_to_ele_compare = 0;
	for (i = 0; i < n-1; i++)	
	{	
		for (j = 0; j < n-i-1; j++) 
		{
			if (arr[j] > arr[j+1]) 
			{
				swap_element(&arr[j], &arr[j+1]); 
			}
			ele_to_ele_compare++;
		}
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
#include<bits/stdc++.h>
using namespace std;


void sort(int *arr,int n){
     // selection sort
	// for(int i = 0 ; i<n-1 ; i++){
	// 	int imin = i;
	// 	for(int j = i+1 ; j<n ;j++){
	// 		if(arr[j] < arr[imin]) {
	// 			imin = j;
	// 		}
	// 	}

	// 	int temp = arr[i];
	// 	arr[i] = arr[imin];
	// 	arr[imin] = temp;
	// }

	//Bubble  sort

	// for(int i = 0 ; i< n ;i++){
	// 	for(int j = 0 ; j < n-i-1 ; j++){
	// 		if(arr[j] > arr[j+1]){
	// 			int temp = arr[j];
	// 			arr[j] = arr[j+1];
	// 			arr[j+1] = temp;
	// 		}
	// 	}
	// }


	// Insertion sort

	// for(int i = 1 ; i<n ;i++){
	// 	int val = arr[i];
	// 	int hole = i;
	// 	while(hole>0 && val < arr[hole-1]){
	// 		arr[hole] = arr[hole-1];
	// 		hole--;
	// 	}
	// 	arr[hole] = val;
	// }




}

int main(){
	int arr[] = {9,6,3,4};
	int size = 4;
	//sort(arr,size);

	for(int i = 0 ; i < size ;i++) cout<<arr[i]<<" ";
	cout<<rand();

}

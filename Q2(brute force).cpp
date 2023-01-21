//maximum & minimum element in an array using brute force approach
#include<iostream>
using namespace std;

int findMinMax(int arr[], int n){
	int max = arr[0];
	int min = arr[0];
	
	for(int i =1; i < n ; i++){
		if(max < arr[i])
			max = arr[i];
		
		if(min > arr[i])
			min = arr[i];
		
	}
	cout<<"maximum element: "<< max<<endl;
	cout<<"minimum element: "<<min<<endl;
}

void printArray(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	
}


int main(){
	int n;
	cout<<"enter size of array\n";
	cin>>n;
	
	cout<<"enter array\n";
	int arr[n];
	
	for (int i=0; i<n ;i++){
		cin>>arr[i];
	}
	
	
	findMinMax(arr, n);

}

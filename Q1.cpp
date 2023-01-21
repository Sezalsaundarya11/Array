//Reverse the array
#include<iostream>
using namespace std;

void reverseArray(int arr[], int s, int e){
	while(s<e){
		int temp = arr[e];
		arr[e]=arr[s];
		arr[s]=temp;
		s++;
		e--;
	}
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
	
	reverseArray(arr, 0, n-1);
	printArray(arr, n);

}

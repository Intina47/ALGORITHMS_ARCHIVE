//this code finds the largest element in an array of integers.
//Find the largest number in an array
//the function takes two arguments: 
//arr[] - an array of integers and size - the number of elements in the array

#include <iostream>
using namespace std;

int find_largest(int arr[],int size){
	//initialize largest witht the value of the first element in the array
	int largest = arr[0];
	//we create a for loop starting with i=1 until i is less than size
	for(int i=0; i<size; i++){
		//ckeck where the current value of i is greater than the largest value
		if(arr[i] > largest){
			largest = arr[i];
		}
		//the loop constinues until all elements in the array have been processed
	}
	//finally, the value of largest is returned as the result of the function
	return largest;
}

int main(){
	int arr[] = {100,3,455,7,1000};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"largest: " << find_largest(arr,size) <<endl;
	return 0;
}
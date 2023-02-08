/*Bubble sort is a simple algorithm that repeatedly steps through the list
to be sorted, copmares each pair of adjacent items and swaps them if they
are in the wrong order. The algorithm repeatedly passes through the list,
comparing and swapping adjacent elements, until the list is sorted in the
desired order.
*/

#include <iostream>
using namespace std;
//ascending order
void bubbleSort(int arr[], int size){
	//keep track of the number of passes
	for(int i=0; i<size-1; i++){
		//compare each pair of adjacent alements
		for(int j=0; j<size-i-1; j++){
			//check whether the current element is greater than
			//the next element
			if(arr[j] > arr[j+1]){
				//swap the two elements
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
} 
/*This process continues untill the entire array is sorted
With each pass, the largest unsorted elements, "bubble up" to the correct position
*/
int main(){
	int arr[] = {43,534,654,53,23,54,53,24,53,54};
	int size = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,size);
	cout<<"Sorted Array"<<endl;
	for(int i=0; i<size; i++){
		cout<< arr[i] << " ";
	}
	return 0;
}
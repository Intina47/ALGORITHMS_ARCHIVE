#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int x){
	int result;
	for(int i=0; i<size; i++){
		if(arr[i] == x){
			// return i;
			result = arr[i];
			return result;
		}
	}
	return -1;
}

int main(){
	int arr[] = {0,1,2,4,10,5,6,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	int x;
	cout << "Enter search: ";
	cin >> x;
	int result = linearSearch(arr,size,x);
	if(result == -1){
		cout << "Element is not present in the array"<<endl;
	}
	else{
		cout << "Element is present in the array"<< result <<endl;
	}
	return 0; 
}
//fibonnacci sequence is a series of nubers in which each nummber is the sum
//of the two preceding it.[named after leonardo of pisa][book:Liber Abaci]
//the sequence begins with 0 and 1
/*This code calculates the sequence and prints the first n terms of it*/
#include <iostream>
using namespace std;

/*A recursive function to calculate the nth fibonnacci number*/
int fibonacci(int n){
	//check if n<=1 and retuns n
	if(n<=1){
		return n;
	}
	/*otherwise, return the sum of the two previous fibonacci numbers*/
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;
	/*use a for loop to call the fibonacci function n times and print results of
	each call, the loop starts from 0 and end at n-1
	*for each iteration of the loop, the fibonacci fuction is called with
	a different value of n*/
	for (int i = 0; i < n; ++i)
	{
		cout << fibonacci(i) << " ";
	}
	return 0;
}
/*
General Explanation
 The code calculates and outputs the first 'n' terms of the fibonacci series,
 where the 'n'th term is the sum of the 'n-1'th and 'n-2'th terms
*/
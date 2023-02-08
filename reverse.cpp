// Code that defines a fiunction called reverserstring that takes a string as an argument
// The length of the input string is calculated and stored in the length variable
// A for loop to iterate through half of the string, for each iteration, the character at the opposite ends of the string are swapped
#include <string.h>
#include <iostream>
using namespace std;

string reverse(string input){
	int length = input.length();
	for(int i = 0; i < length/2; i++){
		//character at the current position 'i' is stored in temp variable
		char temp = input[i];
		cout << "Temp: " <<temp <<endl;
		//character at the opposite end of the string is stored at position 'i'
		//it basically takes the current position (swap the two strings)
		input[i] = input[length - i -1];
		//we take the characters stored at temp and place or rather append them
		//in the opposite end of the string
		input[length-i-1] = temp;
		 cout << "Input[i]: "<< input[length-i-1] <<endl;
	}
	return input;
}

int main()
{
	string input = "hello";
	string output =  reverse(input);
	cout << output;
	return 0;
}
//check if a string is a palindrome
//a palinrome string will read the same forward or backward
//eg racecar in reverse will be rececar. level = level
//Palindromes are commonly used in computer algorithms and data structures,
//particulaly in the concept of string manipulation
//the funtion is boolean, return true or false if input is palindrome or not
//function takes one argument, input whicch is the string to be checked
#include <iostream>
using namespace std;

bool isPalindrome(string input){
	//calculate the length of the string and store in variable length
	int length = input.length();
	//iterate through the characters of the string
	//iterate unitl i is less than half of the string
	for(int i=0; i<length/2; i++){
		//check if the character a the current position, is not equal to
		//the character a the opposite end of the string
		if(input[i] != input[length-i-1]){
			//returns false if this is the case
			cout << "Not Palindrome" <<endl;
			return false;
		}
	}
	//otherwise retun true
	cout << "Palindrome"<< endl;
	return true;
}

int main(){
	string input = "racedar";
	cout << isPalindrome(input)<<endl;
	return 0;
}
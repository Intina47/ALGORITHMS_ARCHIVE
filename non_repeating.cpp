// Find non-repeating character

// Write a function that takes string with only alphabetic characters and spaces. The function returns the first non-repeating character in the string.

// Examples:

// if string = "yfsgygdf", the function should return: "s".
// if string = "good morning", the function should return: "d".

//Write a function that takes string with only alphabetic characters and spaces. The function returns the first non-repeating character in the string.
// #include <iostream>
// std::string first_non_repeating(std::string input)
// {
//     std::string output;
//     for (int i = 0; i < input.length(); i++) {
//         if (input[i] != ' ') {
//             if (input.find(input[i]) == input.rfind(input[i])) {
//                 output += input[i];
//                 break;
//             }
//         }
//     }
//     return output;
// }

#include <iostream>

std:: string first_non_repeating(std::string input){

    std::string output;
    for(int i; i<input.length(); i++){
        if(input[i] != ' '){
            if(input.find(input[i] == input.rfind(input[i]))){
                output += input[i];
                break;
            }
        }
    }
    return output;
}

int main(){
    std::string input;
    std::cout << "enter input: ";
    std:: cin >> input;
    first_non_repeating(input);
}
/*Given a string array words, return an array of all
characters that show up in all strings within the words*/
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

vector<char> commonCharacters(const vector<string> & words){
	unordered_map<char,int>charcounts;
	vector<char> commonCharacters;
	//count the number of times each character appears in all words
	for(const auto & word :words){
		for(const auto & c : word){
			charcounts[c]++;
		}
	}
}
/*Instructions
Define a function named GetWordFrequency that takes a vector of strings and a search word as parameters. 
The function GetWordFrequency() then returns the number of occurrences of the search word in the vector parameter 
(case-insensitive).

Then, write a main program that reads a list of words into a vector, calls the function GetWordFrequency()
 repeatedly, and outputs the words in the vector with their frequencies. The input begins with an integer 
 indicating the number of words that follow.

Ex: If the input is:

5 hey Hi Mark hi mark
the output is:

hey 1
Hi 2
Mark 2
hi 2
mark 2


Hint: Use tolower() to set the first letter of each word to lowercase before comparing.

The program must define and use the following function:
int GetWordFrequency(vector<string> wordsList, string currWord)

Hint: Use tolower() to set the first letter of each word to lowercase before comparing.

The program must define and use the following function:
int GetWordFrequency(vector<string> wordsList, string currWord)*/


#include <iostream>
#include <vector> 
#include <string>
#include <cctype>
using namespace std;
/*Here The function is defined*/
int GetWordFrequency(vector<string> wordsList, string currWord) {
	//variable to keep track of the frequency of the current word in the list
    int frequency = 0;
	// Looping through each word in the list and compare it with the current word
    for (const string& word : wordsList) {
		// Checking to see if the lengths of the words are the same before comparing
        if (word.length() == currWord.length()) {
			// Comparing each word character by character in a case-insensitive manner
            bool match = true;
			// Looping through each character of the words
            for (size_t i = 0; i < word.length(); ++i) {
				// Comparing the characters in a case-insensitive manner
                if (tolower(word[i]) != tolower(currWord[i])) {
					// If any character does not match, set match to false and break the loop
                    match = false;
                    break;
                }
            }
			// If all characters match, increment the frequency count
            if (match) {
                frequency++;
            }
        }
    }
	// Returning the total frequency count of the current word in the list
    return frequency;
}
int main() {
	// variable to store the number of words to be read from input
    int numWords;
    cin >> numWords;

	// Creating a vector to store the words
    vector<string> words(numWords);
	// Reading each word from input and storing it in the vector
    for (int i = 0; i < numWords; ++i) {
        cin >> words[i];
    }
	// Looping through each word in the vector and outputting its frequency
    for (int i = 0; i < numWords; ++i) {
		// Output the word and its frequency by calling the GetWordFrequency function
        cout << words[i] << " " << GetWordFrequency(words, words[i]) << endl;
    }

    return 0;
}
     


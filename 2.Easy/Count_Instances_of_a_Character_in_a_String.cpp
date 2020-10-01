/* Problem-Task : Create a function that takes two strings as arguments and returns the number of times the first string (the single character) is found in the second string.
 * Problem Link : https://edabit.com/challenge/kbFhwaDyrd79JrgeB
*/

/* This problem is Easy as the length of the string to find is fixed and is stated as of length 1.
 * The harder version of this problem is to find a string inside string which is done using z,kmp algorithm 
*/
 
#include <iostream> 
#include <string> 
using namespace std; 
  
// Function that return count of the given  
// character in the string 
int count(string s, char c)  /*here i have defined char as its a string of size 1 suppose you want to make it into a string then you can compare it like c[0] */
{ 
    // Count variable 
    int res = 0; 
  
    for (int i=0;i<s.length();i++) 
  
        // checking character in string 
        if (s[i] == c) 
            res++; 
  
    return res; 
} 
  
// Driver code 
int main() 
{ 
    string str= "geeksforgeeks"; 
    char c = 'e'; 
    cout << count(str, c) << endl; 
    return 0; 
} 

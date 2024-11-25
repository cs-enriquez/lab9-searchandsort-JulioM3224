#include <iostream>
#include <string>

using namespace std;

// write a function to print the contents of your array
//   bonus! try to implement your function so that it can accept
//     many types of data (int, char, string, etc.)
template <typename flexibleType> // ???
flexibleType printArray(flexibleType arr[], int start, int end){
    for(int i = start; i < end; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Implement a sequential search algorithm
// your function should search for a target value (target)
//    within the indices of "start" to "end"
// return true if target exists in the array within this range,
//    return false otherwise
bool seqSearch(string target, string arr[], int start, int end){
    for(int i = 0; i < end; i++){
        if(arr[i] == target){
            return true;
        }
        else{
            return false;
        }
    }
}

// Implement an iterative binary search 
// Return true if target exists in the array with size n,
//    return false otherwise 
bool binSearch(float target, float arr[], int n) {    
    for(int i = 0; i < n; i++){
        if(target == arr[i]){
            return true;
        }
    }
    return false;
}	


// Implement a recursive binary search 
// Return true if target exists in the array with size n
//   return false otherwise
bool binSearchR(char target, char charray[], int n) {
    // BASE CASE 
    int i = n/2;
    if(target == chararr[i]){
        return true;
    }
    // RECURSIVE CASE
    else if(target < chararr[i]){
        return binSearchR(target, chararr, n/2);
    }
    else{
        return binSearchR(target, &chararr[i+1], i);
    }
    return false;
}

// Implement a brand new sorting algorithm
//    Don't use a reference for this!
//    Be sure to do your best to implement the algorithm's logical steps
// Step 1: implement a function swap() that will swap any two elements in an array,
//          given their indices
// Step 2: implement a function minFind() that will find and return 
//          the **index** of the smallest element in an array
/*
Step 3: Finally, use your two functions above to complete the following in newSort():
        1 - search through the array to find the location of the smallest value
        2 - swap this value with the value at the start of the array
        3 - the first element is now sorted! 
            Redo your sort on the remaining elements (from index 1 to end)
            On the next iteration, you should be swapping the smallest remaining value 
                with the second index value in the array
            ...then swapping the smallest remaining value with the third indexed value... etc.
            
        4 - continue iterating until you reach the end of the list
        *** You can make this recursive, if you wish!
*/

void swap(double darray[], ...) {}

int minFind(double darray[], ...) {
    return -1;
}

void newSort(double darray[], int n) {}

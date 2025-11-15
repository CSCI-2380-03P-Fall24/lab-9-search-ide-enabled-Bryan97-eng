#include <iostream>
#include <string>

using namespace std;

// write a function to print the contents of your array
//   bonus (+5% to your grade for this lab)! try to implement your function so that it can accept
//     many types of data (int, char, string, etc.)
template <typename flexibleType> // ???
void printArray(flexibleType arr[], int size) {
for(int i = 0; i < size; i++){cout << arr[i] << ", ";}


}

// Implement a sequential search algorithm
// your function should search for a target value (target)
//    within the indices of "start" to "end"
// return true if target exists in the array within this range,
//    return false otherwise
bool seqSearch(string target, string arr[], int start, int end) {
    while(start <= end){
        if(arr[start] == target){
            return true;
            } else {
            start++;
            }
            
    }
return false;}

// Implement an iterative binary search 
// Return true if target exists in the array with size n,
//    return false otherwise 
bool binSearch(float target, float arr[], int n) {
    int start = 0,  mid;
    int end = n - 1; 
    bool isfound = false;

    while(start <= end){
     mid = start + (end - start)/2;
    if(arr[mid] == target){
        isfound = true; 
        break; 
    } else if (target > arr[mid]){
        start = mid + 1;
    } else {
        end = mid - 1; 
    }
    
    }

    return isfound;	
}

// Implement a recursive binary search 
// Return true if target exists in the array with size n
//   return false otherwise
bool binSearchR(char target, char charray[], int n) {
   if(n <= 0){return false;} //  base case 
   int mid = n/2; // turnicates numbers down when size "n" is odd
    if(target == charray[mid]){ //stops it right away if target is found best case 
        return true;
    }else if (target > charray[mid]){
        //note for self n = size 
        return binSearchR(target, charray+mid+1, n-mid-1); // move the array pointer after the mid and change the size (n) to be smaller 
    } else {
        return binSearchR(target, charray, mid); // the array already starts at the beginning just chnage the size (n) to be mid
    }

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

void swap(double darray[], int a, int b) {
    double temp = darray[a]; 
    darray[a] = darray[b];
    darray[b] = temp;
}

int minFind(double darray[], int size) {
    int the_smallest = 0; // initialize target index 
    for(int i = 0; i < size; i++){ //searching the array with loop 
       if(darray[i] <= darray[the_smallest]){ //compares the current index to the smallest so far starting with the first index first. 
        the_smallest = i; //updates the value of the index to reflect the smallest one so far
       
    }
}
return the_smallest;
}

void newSort(double darray[], int n) {

int small = minFind(darray, n);
swap(darray, 0, small);
if()

}


// Implement Exponential Search
//    Reuse your iterative binSearch(...) on a narrowed window
//    Assumes the array is sorted in ascending order
// Step 1: Handle edge cases (empty array) and quickly check the first element.
// Step 2: Grow a “bound”: start at 1, then repeatedly double it
//         while you are still inside the array and the current value is less than the target.
// Step 3: Define a search window:
//         - The left edge is halfway back from the current bound.
//         - The right edge is the smaller of (current bound) and (last valid index).
// Step 4: Run your existing binSearch on just that window and return its result.
//         You may pass a pointer to the start of the window and its length,
//         or copy that window to a temporary buffer if you prefer.
bool expSearch(float target, float arr[], int n) {
    return false;
}

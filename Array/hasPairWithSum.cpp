// An unsorted array of integers and a sum is given
// The problem is to find whether there is a pair of numbers in the 
// array that add upto sum
// example: array {1, 2, 3, 8} and sum 8 return false
//          array {0, 2, 3, 8} and sum 8 return true
// source: https://www.youtube.com/watch?v=XKu_SEDAykw

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


// mvp function. implementing with static array. complexity linear
void hasPairWithSum (vector<int> array, int sum) {

    //set for storing complement values, easy look-up
    unordered_set<int> comp;    

    for (int value: array) {
        // searching for an inserted complement, complexity O(1)
        if (comp.find(value) != comp.end()) {
            cout << "fount";
            return;
        }
        //adding the compliment otherwise
        comp.insert(sum-value);
    }

    cout << "not fount";
}

int main()
{
    /* code */
    int sum = 8, size, n;
    vector<int> array; // dynamic array

    //getting the input
    cout << "Enter the size of array" << endl;
    cin >> size;
    cout << "Enter the elements" << endl;
    for (int i=0; i<size; i++) {
        cin >> n;
        array.push_back(n);
    }
    cout << "Enter the sum" << endl;
    cin >> sum;

    hasPairWithSum(array, sum);

    return 0;
}



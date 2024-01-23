// Given an array of strings, return another array containing all of its longest strings.

// Example

// For inputArray = ["aba", "aa", "ad", "vcd", "aba"], the output should be
// solution(inputArray) = ["aba", "vcd", "aba"].

// Input/Output

// [execution time limit] 0.5 seconds (cpp)

// [memory limit] 1 GB

// [input] array.string inputArray

// A non-empty array.

// Guaranteed constraints:
// 1 ≤ inputArray.length ≤ 10,
// 1 ≤ inputArray[i].length ≤ 10.

// [output] array.string

// Array of the longest strings, stored in the same order as in the inputArray.

vector<string> solution(vector<string> inputArray) {
    int mx=0;
    int size=inputArray.size();
    for(int i=0;i<size;i++){
        string st=inputArray[i];
        if(st.size()>mx){
            mx=st.size();
        }
    }
    for(int i=0;i<inputArray.size();i++){
        string st=inputArray[i];
        if(st.size()<mx){
            inputArray.erase(inputArray.begin()+i);
            i--;
        }
    }
    return inputArray;
}


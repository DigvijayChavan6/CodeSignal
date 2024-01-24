// Some people are standing in a row in a park. There are trees between them which cannot be moved. Your task is to rearrange the people by their heights in a non-descending order without moving the trees. People can be very tall!

// Example

// For a = [-1, 150, 190, 170, -1, -1, 160, 180], the output should be
// solution(a) = [-1, 150, 160, 170, -1, -1, 180, 190].

// Input/Output

// [execution time limit] 0.5 seconds (cpp)

// [memory limit] 1 GB

// [input] array.integer a

// If a[i] = -1, then the ith position is occupied by a tree. Otherwise a[i] is the height of a person standing in the ith position.

// Guaranteed constraints:
// 1 ≤ a.length ≤ 1000,
// -1 ≤ a[i] ≤ 1000.

// [output] array.integer

// Sorted array a with all the trees untouched.

vector<int> solution(vector<int> a) {
    vector<int> temp;
    int size=a.size();
    for(int i=0;i<size;i++){
        if(a[i]!=-1)temp.push_back(a[i]);
    }
    int n=temp.size();
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(temp[j-1]>temp[j])swap(temp[j-1],temp[j]);
        }
    }
    for(int i=0,j=0;i<size;i++){
        if(a[i]!=-1){
            a[i]=temp[j++];
        }
    }
    return a;
}
// 1st method
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
    }
}

// Time Complexity:O(Nlogn + N)


//2nd method

#include<bits/stdc++.h>

using namespace std;
int findDuplicate(vector < int > & arr) {
  int n = arr.size();
  int freq[n + 1] = {
    0
  };
  for (int i = 0; i < n; i++) {
    if (freq[arr[i]] == 0) {
      freq[arr[i]] += 1;
    } else {
      return arr[i];
    }
  }
  return 0;
}
int main() {
  vector < int > arr;
  arr = {1,3,4,2,3};
  cout << "The duplicate element is " << findDuplicate(arr) << endl;
}

// Time Complexity: O(N), as we are traversing through the array only once.

// Space Complexity: O(N), as we are using extra space for frequency array.


// 3rd method using linked list cycle method

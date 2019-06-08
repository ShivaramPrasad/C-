#include <bits/stdc++.h> 
  
using namespace std; 

int jumpGame(const vector<int>& nums, int size){
    int j = 1;
    int find = size - j; 
    int jumps = 0;

    for(int i=0; i < size -1; i++){
        if(nums[i] == find){
            ++jumps;
            break;
        }
        else{
            j = j + 1;
            find  = size - j;
            jumps++;
        }
        
    }  
    return jumps;
}

int main(){
    vector<int> array = {2, 1, 3, 1, 4};  // {2, 3, 1, 1, 4} {4, 3, 1, 1, 5}
    int n  = array.size();
    cout<<"Number of Jumps needed :: " << jumpGame(array, n) << endl;

    return 0;
}
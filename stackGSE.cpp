// A Stack based C++ program to find next 
// smaller element for all array elements. 
#include <bits/stdc++.h> 
  
using namespace std; 
  
/* prints element and NSE pair for all 
elements of arr[] of size n */
void printGSE(int arr[], int n) 
{ 
    stack <int> s;

    s.push(arr[0]);
    for(size_t i = 1; i < n; i++)
    {
        if (s.empty() == true) {
            /* code */
            s.push(arr[i]);
            continue;
        }

        else if(s.empty() == false && s.top() < arr[i]){
            cout<< s.top() << "-->" << arr[i]<< "\n";
            s.pop();
        }

        s.push(arr[i]);

    }

    while(s.empty() == false){
        /* code */
        cout<< s.top() << "-->" << "-1"<<"\n";
        s.pop();
    }
    
    
} 
  
/* Driver program to test above functions */
int main() 
{ 
    int arr[] = { 11, 13, 21, 3 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printGSE(arr, n); 
    return 0; 
}
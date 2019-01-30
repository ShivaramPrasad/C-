#include<bits/stdc++.h> 
#include<algorithm>

using namespace std; 

void findMissing(const vector<int>& a, 
				 const vector<int>& b) 
{ 
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) 
    {
		int j;
        for (j = 0; j < sizeof(b) / sizeof(b[1]); j++) 
            if (a[i] == b[j]) 
                break; 
  
        if (j == sizeof(b) / sizeof(b[1])) 
            cout << a[i] << " "; 
    } 
} 

 
//**************** using Hash ******************

// // Function for finding  
// // elements which are there  
// // in a[] but not in b[]. 

// void findMissing(int a[], int b[],  
//                  int n, int m) 
// { 
//     // Store all elements of  
//     // second array in a hash table 
//     unordered_set <int> s; 

//     for (int i = 0; i < m; i++) 
//         s.insert(b[i]); 
  
//     // Print all elements of  
//     // first array that are not 
//     // present in hash table 
//     for (int i = 0; i < n; i++) 
//         if (s.find(a[i]) == s.end()) 
//             cout << a[i] << " "; 
// } 

  
// Driver code 
int main() 
{ 
    // int n = sizeof(a) / sizeof(a[0]); 
    // int m = sizeof(b) / sizeof(b[1]); 
    findMissing({ 1, 2, 6, 3, 4, 5 }, { 2, 4, 3, 1, 0 }); 
    return 0; 
} 



//// A Stack based C++ program to find next 
// smaller element for all array elements. 
#include <bits/stdc++.h> 
  
using namespace std; 

// global variables
int T =0;
int tens = 0;
int fives = 0;
int twos = 0;
int ones = 0;

// stack is using to get the near largest number here to produce the greedy changing coins
void countCoin(int changes[], int n, int totalAmount){
    
    stack <int> s;
    T = totalAmount;
    
    s.push(changes[0]);
    for(size_t i = 1; i < n; i++)
    {
        if(s.empty() == true){
            s.push(changes[i]);
            continue;
        }

        else if(s.empty() == false && s.top() < changes[i]){
            s.push(changes[i]);
        }
    }

    while(s.empty() == false){

        if(T != 0){
            if(s.top() <= T){
                T = T - s.top();
                if(s.top() == 10){   
                    tens = tens + 1;
                }
                if(s.top() == 5){
                    fives = fives + 1;
                }
                if(s.top() == 2){
                    twos = twos + 1;
                }
                if(s.top() == 1){
                    ones = ones + 1;
                }
            }
            else{
                s.pop();
            }
         
        }
        else{
            cout<< "10" << "-->" <<tens << "\n"; 
            cout<< "5" << "-->" << fives << "\n";
            cout<< "2" << "-->" << twos << "\n";
            cout<< "1" << "-->" << ones << "\n";
            s.pop();
            break;
        }
    }    
}
  
int main(){
    int changes[] = {1, 2, 5, 10};
    int n = sizeof(changes)/ sizeof(changes[0]);    
    countCoin(changes, n, 500); 
    return 0;
}

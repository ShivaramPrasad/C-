#include <bits/stdc++.h> 
#include <list>
#include <iterator>



using namespace std; 
/*
* use of const -> it will not allow the variable to modify or change
* extern is a external linkage like the global decalaration
* auto will get automatically change to its data type of the number stored
*/ 

// extern int i,j;
int main(){

    // int i = 10;
    // auto j = 10.5; // auto will be float now. Automatically it will changes to its data type

    // while(i != 0){
    //     cout<< j;
    //     i--;
    //     // i--;
    // }
    list <int> g({4, 8, 3, 2, 10});
    list <int>::iterator itr;

    g.sort(); //sort the list
    g.push_front(0);
    g.reverse();

    for(itr = g.begin(); itr!= g.end(); ++itr){
        cout<<"\t"<< *itr;
    }

    


    return 0;
}


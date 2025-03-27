#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    vector<int>  arr;
    cin >> n;
    for (int i = 0;i < n;i++) {
        int p;
        cin >> p;

        if (p == 0) {
            if(!arr.empty())
            arr.pop_back();
        }
        else {
            arr.push_back(p);
        }
       
    }
    int count = 0;
    for (int i = 0;i < arr.size();i++) {
        count += arr[i];
    }
    cout << count;
}



 
    





    
 

    




    
      
   
        
  
   

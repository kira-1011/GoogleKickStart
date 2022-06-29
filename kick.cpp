#include<iostream>
#include<sstream>
#include<vector>
#include <limits>

using namespace std;

int main(){
    
    int T, N, M;
    
    vector<int> candies;

    cin >> T;
    
    for(int i = 0; i < T; i++){

        cin >> N >> M;

        cin.ignore();

        string input;
        
        getline(cin, input);

        stringstream is(input);
        
        int num;

        while(!(is.eof()))
        {
            is >> num;
            candies.push_back(num);
            cout << "num: " << num << endl;
        }
        
    }

     for(auto v : candies){
        cout << v << " ";
     }
    
    return 0;
}
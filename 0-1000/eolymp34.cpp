#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k, S = 0;
    cin >> n >> m >> k; // input 1


    vector<int> myVector; vector<vector<int>> matrix(3, vector<int>(k));
    string inputLine;

    getline(cin, inputLine);

    istringstream iss(inputLine);
    int number;
    
    while (iss >> number) {
        myVector.push_back(number); // input 2
    }


    for(int i = 0; i <k; i++)
    {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];   // input 3
        } 
    }


    int x;
    cin >> x;    // input 4

    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < myVector.size();j++)
        {
            if()
        }
    }
}

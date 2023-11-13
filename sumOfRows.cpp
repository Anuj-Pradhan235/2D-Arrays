#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void sumOfRows(vector<vector<int>>&matrix){
        int n=matrix[0].size();
        int m=matrix.size();
        for(int row=0;row<n;row++){
            int sum=0;
            for(int col=0;col<m;col++)sum+=matrix[row][col];
            cout<<"Row no: "<<(row+1)<<" = "<<sum<<endl;
        }
    }
};

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool linearSearch(vector<vector<int>>&matrix,int target){
        int n=matrix[0].size();
        int m=matrix.size();
        for(int row=0;row<n;row++){
            int sum=0;
            for(int col=0;col<m;col++)if(matrix[row][col]==target)return 1;
        }
        return 0;
    }
};

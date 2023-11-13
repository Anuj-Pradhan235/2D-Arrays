#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int largestRowSum(vector<vector<int>>&matrix){
        int n=matrix[0].size();
        int m=matrix.size();
        int maxi=INT_MIN;
        for(int row=0;row<n;row++){
            int sum=0;
            for(int col=0;col<m;col++)sum+=matrix[row][col];
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};

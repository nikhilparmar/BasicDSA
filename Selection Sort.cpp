#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
#include<bits/stdc++.h> 
using namespace std;
#define MAX 50 
    
int c=0;

int main() 
{ 
    vector<int> a={10,12,1,2,3,4,6,7,9,53,0,-9};
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        int min=a[i];
        int index=0;
        for(int j=i;j<n;j++)
        {
            if(a[j]<=min)
            {
                min=a[j];
                index=j;
            }
        }

        swap(a[i],a[index]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
} 

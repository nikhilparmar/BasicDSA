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
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
       
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=temp;
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
} 

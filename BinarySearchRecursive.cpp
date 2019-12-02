#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
#include<bits/stdc++.h> 
using namespace std;
#define MAX 50 
    
int c=0;
int binsearch(vector<int> a,int l,int r, int key)
{
    cout<<"l: "<<l<<" r:"<<r<<endl;
    int mid;
    if(l<=r)
    {
        if(a[l]==key)
        {
            return l;
        }
        else
        {
            return -1;
        }
        
    }
    else
    {
        mid=l+(r-l)/2;
        if(key==a[mid])
        {
            return mid;
        }
        else
        if(key<a[mid])
        {
            return binsearch(a,l,mid-1,key);
        }
        else
        {
           return binsearch(a,mid+1,r,key);
        }

    }
return 1;
}
int main() 
{ 
    cout<<"Enter number: "<<endl;
    int n;
    cin>>n;

    vector<int> a={1,2,3,4,6,7,9};
int l=0;int r=a.size()-1;
    int index=binsearch(a,l,r,n);

    if(index==-1)
    {
        cout<<"NOT FOUND"<<endl;
    }
    else
    {
        cout<<"FOUND At: "<<index<<endl;
    }

    cout<<"thanks"<<endl;
} 

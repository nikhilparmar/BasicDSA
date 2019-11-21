#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
#include<bits/stdc++.h> 
using namespace std;
#define MAX 50 
    
int binsearch(vector<int> a,int n)
{
    int mid;
    int l=0,h=a.size()-1;

    

    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==n)
        {
            return mid;
        }
        else 
        if(n<a[mid])
        {
            cout<<n<<" is less than: "<<a[mid]<<endl;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }

    }
    

    return l;
}
int main() 
{ 
    cout<<"Enter number: "<<endl;
    int n;
    cin>>n;

    vector<int> a={1,3,4,6,7,9};

    int index=binsearch(a,n);

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

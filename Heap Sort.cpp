#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
#include<bits/stdc++.h> 
using namespace std;
#define MAX 50 
    
int c=0;
void heapify(vector<int> &a,int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    
    if(l<n && a[l]>a[largest])
    {
        largest=l;
    }

    if(r<n && a[r]>a[largest])
    {
        largest=r;
    }

    if(largest!=i)
    {
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }

}
void heapSort(vector<int> &a,int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(a,n,i);
    }

    for(int i=n-1;i>=0;i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);

    }

}
void printArray(vector<int> &a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
int main() 
{ 
    vector<int> a={12, 11, 13, 5, 6, 7};
    int n=a.size();
    heapSort(a,n);
    printArray(a,n);
    return 0;
} 

#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
#include<bits/stdc++.h> 
using namespace std;
#define MAX 50 
int partition(vector<int> &a,int lb,int ub)
{
    
    int pivot=a[lb];
    int start=lb;
    int end=ub;

    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }

        while(a[end]>pivot)
        {
            end--;
        }

        if(start<end)
        {
            swap(a[start],a[end]);
        }
    }

    swap(a[lb],a[end]);

    return end;
}
void quickSort(vector<int> &a,int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition(a,lb,ub);
        quickSort(a,lb,loc-1);
        quickSort(a,loc+1,ub);
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
    vector<int> a={7,7,7,12, 11, 13, 5, 6, 7};
    int n=a.size();
    
    quickSort(a,0,n-1);
    printArray(a,n);
    
    return 0;
} 

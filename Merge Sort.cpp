#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
#include<bits/stdc++.h> 
using namespace std;
#define MAX 50 

void merge(vector<int> &a, int l,int mid,int r)
{
    int i,j,k;
    int n1=mid-l+1;
    int n2=r-mid;

    vector<int> left(n1),right(n2);

    for(i=0;i<n1;i++)
    {
        left[i]=a[l+i];
    }

    for(j=0;j<n2;j++)
    {
        right[j]=a[mid+1+j];
    }

    i=0;j=0;k=l;


    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];
            i++;
        }
        else
        {
            a[k]=right[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        a[k]=left[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        a[k]=right[j];
        j++;
        k++;
    }

}

void mergeSort(vector<int> &a,int l,int h )
{
    if(l<h)
    {
        int mid=l+(h-l)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,h);
        merge(a,l,mid,h);
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

    mergeSort(a,0,n-1);
 
    

    printArray(a,n);
    return 0;
} 

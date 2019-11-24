#include<iostream>
#include<cmath>
#include<vector>
#include<climits>
#include<bits/stdc++.h> 
using namespace std;
#define MAX 50 

struct Item
{
    int value;
    int weight;
};

bool cmp(Item a,Item b)
{
    double r1=(double)a.value/a.weight;
    double r2=(double)b.value/b.weight;

    return r1>r2;
}

int factionalKnapsack(Item a[],int W,int n)
{
    sort(a,a+n,cmp);

    int currentWeight=0;
    double finalvalue=0;

    for(int i=0;i<n;i++)
    {
        if(currentWeight+a[i].weight<=W)
        {
            currentWeight=currentWeight+a[i].weight;
            finalvalue=finalvalue+a[i].value;
        }
        else
        {
            int remain=W-a[i].weight;

            finalvalue=finalvalue+a[i].value*((double)remain/a[i].weight);
            break;
        }
    }
    
    return finalvalue;
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
    Item a[]={{60,10},{100,20},{120,30}};
    int W=50;
    int n=sizeof(a)/sizeof(a[0]);

    cout<<"Maximum Profit: "<<factionalKnapsack(a,W,n);
    return 0;
} 

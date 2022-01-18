#include <iostream>
#include <cmath>
#include<map>
#include <algorithm>
using namespace std;
void fun(int n)
{
    //print Z
    for(int i=1;i<=n;i++)
    {
        cout<<"Z";
    }
    cout<<endl;
    for(int l=1;l<n-1;l++){
        for(int i=n-l-1;i>0;i--)
            cout<<" ";
        cout<<"Z";
        cout<<endl;
        }
    for(int i=1;i<=n;i++)
    {
        cout<<"Z";
    }
    cout<<endl;
    
    
    //print O
    for(int i=1;i<=n;i++)
    {
        cout<<"O";
    }
    cout<<endl;
    for(int j=1;j<=n-2;j++)
    {
        cout<<"O";
        for(int o=1;o<=n-2;o++)
            cout<<" ";
        cout<<"O";
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"O";
    }
    
    //print H
    cout<<endl;
    for(int i=1;i<=n/2;i++)
    {
        cout<<"H";
        for(int h=1;h<=n-2;h++)
            cout<<" ";
        cout<<"H"<<endl;
    }
    for(int x=1;x<=n;x++)
        cout<<"H";
    cout<<endl;
    for(int i=1;i<=n/2-1;i++)
    {
        cout<<"H";
        for(int h=1;h<=n-2;h++)
            cout<<" ";
        cout<<"H"<<endl;
    }
    //print O
    for(int i=1;i<=n;i++)
    {
        cout<<"O";
    }
    cout<<endl;
    for(int j=1;j<=n-2;j++)
    {
        cout<<"O";
        for(int o=1;o<=n-2;o++)
            cout<<" ";
        cout<<"O";
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"O";
    }
}
int main() {
   
    int n;
    cin>>n;
    if(n>=4)
        fun(n);
    return 0;
}

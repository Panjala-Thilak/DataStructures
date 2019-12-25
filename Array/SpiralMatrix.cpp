#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int k=0,l=0,lastr=m-1,lastc=n-1;
    while(k<=lastr&&l<=lastc)
    {
        for(int i=l;i<=lastc;i++)
        cout<<a[k][i]<<" ";
        k++;
        for(int i=k;i<=lastr;i++)
        cout<<a[i][lastc]<<" ";
        lastc--;
        if(k<=lastr)
        {
        for(int i=lastc;i>=l;i--)
        cout<<a[lastr][i]<<" ";
        lastr--;
        }
        if(l<=lastc)
        {
        for(int i=lastr;i>=k;i--)
        cout<<a[i][l]<<" ";
        l++;
        }
        
    }
    return 0;
}
/*
OUTPUT
3 3                                                            
1 2 3 4 5 6 7 8 9                                              
1 2 3 6 9 8 7 4 5 
*/

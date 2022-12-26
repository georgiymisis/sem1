#include<bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{  
int t;
std::cin>>t;
 
while(t--)
{
int n,m,f=0;
std::cin >> n >> m;
char arr[n][m];
int a=10,b=10;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
    {
    std::cin >> arr[i][j];
    if(arr[i][j]=='R')
    {
        f=1;
        a=min(a,i);
        b=min(b,j);
     }
    }
 
 
}
if(f==1 && arr[a][b]=='R')
std::cout << "YES" << "\n";
else
std::cout << "NO" << "\n";
}
}

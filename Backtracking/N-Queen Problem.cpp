#include<bits/stdc++.h>
using namespace std;
int n;
int mat[10][10];

void printmat()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << mat[i][j] << " ";
        }
    }
    cout << endl;
}

bool isp(int r,int c)
{
    //same column
    for(int i=0;i<r;i++)
    {
        if(mat[i][c]==1)
        {
            return false;
        }
    }
    // upper left diagnoal
    int i=r,j=c;
    r--;
    c--;
    while(r>=0 && c>=0)
    {
        if(mat[r][c]==1)
        {
            return false;
        }
        r--;
        c--;
    }
    //upper right diagnoal
    i--;
    j+=1;
    while(i>=0 && j<n)
    {
        if(mat[i][j]==1)
        {
            return false;
        }
        i--;
        j+=1;
    }
    return true;
    
}

void nqueen(int r)
{
    if(r==n)
    {
        printmat();
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(isp(r,i))
        {
            mat[r][i]=1;
            nqueen(r+1);
            mat[r][i]=0;
        }
    }
    
}

int main(){
    
    cin >> n;
    memset(mat,0,sizeof(mat));
    nqueen(0);
    
    return 0;
}
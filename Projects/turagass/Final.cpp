#include <iostream>

using namespace std;

void dfs(int i,int j,int k,int **vis,int **a,int& res,int n,int m)

{

    k++;

    if(i==n-1 || j==m-1 || i==0 || j==0)//when we reach any boundary edge

    {

        res=min(res,k);//take minimum value

        return;

    }

    vis[i][j]=1;//mark this node as visited

    //we can explore 4 dirsctions

    if(vis[i+1][j]==0 && a[i+1][j]==0)//down

    dfs(i+1,j,k,vis,a,res,n,m);

    if(vis[i-1][j]==0 && a[i-1][j]==0)//up

    dfs(i-1,j,k,vis,a,res,n,m);

    if(vis[i][j+1]==0 && a[i][j+1]==0)//right

    dfs(i,j+1,k,vis,a,res,n,m);

    if(vis[i][j-1]==0 && a[i][j-1]==0)//left

    dfs(i,j-1,k,vis,a,res,n,m);

}

void fun()

{

    int n,m;

    cin>>n>>m;

    int **a;

    a=new int*[n];

    for(int i=0;i<n;i++)

    a[i]=new int[m];

    int **vis;

    vis=new int*[n];

    for(int i=0;i<n;i++)

    vis[i]=new int[m]; //to mark which nodes are already visited

    for(int i=0;i<n;i++)

    {

        for(int j=0;j<m;j++)

        {

            cin>>a[i][j];

            vis[i][j]=0;

        }

    }

    int res=1000000000;

    for(int i=0;i<n;i++)

    {

         for(int j=0;j<m;j++)

         {

             if(a[i][j]==2)//to find where we are standing initially

             {

                 dfs(i,j,-1,vis,a,res,n,m);

                 break;

             }

         }

    }

    if(res==1000000000)

    res=-1;

    cout<<res<<endl;

}

int main()

{

    fun();

}

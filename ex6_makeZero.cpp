#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> & arr){
  int row= arr.size();
  int col= arr[1].size();

  vector<pair<int,int>> z;

  for(int x=0;x<row;x++){
    for(int y=0;y<col;y++){
      if(arr[x][y]==0){
         z.push_back(make_pair(x,y));
      }
    }
  }

  for(int x =0;x<z.size();x++){
      for(int j=0;j<col;j++){
        arr[z[x].first][j]=0;
      }
      for(int i=0;i<row;i++){
        arr[i][z[x].second]=0;
      }
    }

  return arr;
}

int main()
{
  vector<vector<int>> m ={
    {1,2,0},
    {4,0,6},
    {7,8,0},
    {1,2,3}
  };

  vector<vector<int>> a;
  a = makeZeroes(m);
  int row= m.size();
  int col= m[1].size();

  for(int x=0;x<row;x++){
    for(int y=0;y<col;y++){
      cout<<m[x][y]<<" ";
    }
    cout<<endl;
  }

}

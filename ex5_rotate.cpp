#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;


void rotate(vector<vector<int>>& matrix) {
  int N = matrix.size();

  for(int x=0;x<n/2;x++){
    for(int y=x;y<N-x-1;y++){
      int temp = matrix[x][y];
      matrix[x][y] = matrix[N - 1 - y][x];
      matrix[N - 1 - y][x] = matrix[N - 1 - x][N - 1 - y];
      matrix[N - 1 - x][N - 1 - y] = matrix[y][N - 1 - x];
      matrix[y][N - 1 - x] = temp;

  }
}

      // your code goes here

}

int main()
{
  vector<vector<int>> m ={
    {1,2,3},
    {4,5,6},
    {7,8,9}
  };



}

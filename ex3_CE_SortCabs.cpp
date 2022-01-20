#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////
float distance(pair<int,int> cab){
  float dist=0;
  dist = pow(cab.first,2) + pow(cab.second,2);
  return dist;
}

bool compare(pair<int,int> cab1,pair<int,int> cab2){
  return distance(cab1) < distance(cab2);
}

vector<pair<int,int>> sortCabs(vector<pair<int,int>> & v){
    sort(v.begin(),v.end(),compare);
    return v;
}
/////////////////////////////////////////////////////////////////////////////////////


int main()
{
  vector<pair<int,int>> v={ make_pair(1,1), make_pair(2,1), make_pair(2,5), make_pair(1,0) };
  sortCabs(v);
  for(auto s :v){
    cout<<s.first<<","<<s.second<<endl;
  }
}

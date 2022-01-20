#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

////////////////////////////////////////////////////////////////////////////////
bool compare(pair<string,int> f1,pair<string,int> f2){
  return f1.second<f2.second;
}

vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
  if(S=="name"){
    sort(v.begin(),v.end());
    return v;
  }

  else{
    sort(v.begin(),v.end(),compare);
    return v;
  }
}
////////////////////////////////////////////////////////////////////////////////

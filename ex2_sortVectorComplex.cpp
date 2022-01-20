#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int calTotalMarks(vector<int> marks){
  return marks[0]+marks[1]+marks[2];

}


bool compare(pair<string,vector<int>> S1,pair<string,vector<int>> S2){
  vector<int> m1 = S1.second;
  vector<int> m2 = S2.second;
  return calTotalMarks(m1)>calTotalMarks(m2);

}


int main()
{
  vector<pair<string,vector<int>>> studentMarks ={
    {"Sagar",{20,30,15}},
    {"Shifu",{41,23,10}},
    {"Avi",{15,20,11}},
    {"Bob",{23,5,49}}
  };

sort(studentMarks.begin(),studentMarks.end(),compare);

for(auto s :studentMarks){
  cout<<s.first<<" "<<calTotalMarks(s.second)<<endl;
}

}

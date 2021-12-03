#include <iostream>
#include <vector>

using namespace std;

int part_one(const vector<int> &list);
int part_two(const vector<int> &list);

int main(){
  int elem;
  vector<int> depths;
  while(cin >> elem){
    depths.push_back(elem);
  }

  cout << "Measurements larger than the previous measurement: " << part_one(depths) << endl; 
  cout << "Sums of a three-measurement sliding window larger: " << part_two(depths) << endl;
  return 0;
}

int part_one(const vector<int> &list){
  int num = 0;
  for(int i = 1; i < list.size(); i++){
    if(list[i] > list[i-1]) num++;
  }
  return num;
}

int part_two(const vector<int> &list){
  int num = 0;
  for(int i = 3; i < list.size(); i++){
    if(list[i] > list[i-3]) num++;
  }
  return num;
}

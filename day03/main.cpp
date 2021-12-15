#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int part_one();
int part_two();

int main(){
  cout <<  "Part 1 Answer: " << part_one() << endl;
  // cout <<  "Part 2 Answer: " << part_two() << endl;
  return 0;
}

int part_one(){
  vector<string> list;
  string elem;

  while(cin >> elem){
    list.push_back(elem);
  }
  string gamma = "";
  for(int i = 0; i < 12; i++){
    int zeros = 0;
    int ones = 0;
    for(int j = 0; j < list.size(); j++){
      char num = list[j].at(i);
      if(num == '0'){
        zeros++;
      }else if(num == '1'){
        ones++;
      }
    }
    if(zeros > ones){
      gamma += "0";
    }else if(zeros < ones){
      gamma += "1";
    }
  }
  
  int gval = 0;
  for(int i = 0; i < gamma.length(); i++){
    int p = gamma.length() - i - 1;
    gval += ((gamma.at(i) - '0') * pow(2, p));
  }
  int epsilon = 4095 - gval;
  return epsilon * gval;
}

int part_two(){
    return 0;
//  string command;
//  int count = 0;
//  int rl = 0;
//  int ud = 0;
//  int aim = 0;
//  ifstream file;

//  file.open("input.txt");
//  while(file >> command >> count){
//    if(command == "forward"){
//      ud += count * aim;
//      rl += count;
//    }else if(command == "down"){
//      aim += count;
//    }else if(command == "up"){
//      aim -= count;
//    }
//  }
//  return rl*ud; 
}



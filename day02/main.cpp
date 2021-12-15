#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int part_one();
int part_two();

int main(){
  cout <<  "Part 1 Answer: " << part_one() << endl;
  cout <<  "Part 2 Answer: " << part_two() << endl;
  return 0;
}

int part_one(){
  string command;
  int count = 0;
  int rl = 0;
  int ud = 0;

  ifstream file;

  file.open("input.txt");

  while(file >> command >> count){
    if(command == "forward"){
      rl += count;
    }else if(command == "down"){
      ud += count;
    }else if(command == "up"){
      ud -= count;
    }
  }
  return rl*ud;
}

int part_two(){
  string command;
  int count = 0;
  int rl = 0;
  int ud = 0;
  int aim = 0;
  ifstream file;

  file.open("input.txt");
  while(file >> command >> count){
    if(command == "forward"){
      ud += count * aim;
      rl += count;
    }else if(command == "down"){
      aim += count;
    }else if(command == "up"){
      aim -= count;
    }
  }
  return rl*ud; 
}



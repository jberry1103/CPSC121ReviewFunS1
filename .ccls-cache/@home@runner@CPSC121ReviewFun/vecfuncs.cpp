#include "vecfuncs.h"


void fillVector(vector<int>& userNums) { 
  int i; 
  int num; 

  for (int count = 0; count < 5; count++) {
    cout << "Enter an int: "; 
    cin >> num; 
    
    userNums.push_back(num); 
    
  }
}

void findExtremes(vector<int>& vec, int& min, int& max) {
  //assumes thre is a least one in vec
  min=max=vec[0]; 

  for (int count = 0; count < vec.size(); count++) {
    if (vec.at(count) < min) {
      min=vec.at(count); 
    }
    if(vec[count] > max) {
      max = vec.at(count); 
    }
  }
}
#include "vecfuncs.h" 

int main() {

  int min, max;

  vector<int> userNums; 

  fillVector(userNums); 
  cout << "size: " << userNums.size() << endl; 

  
  findExtremes(userNums, min, max);

  std::cout << "min:" << min << endl; 
  cout << "max:" << max << endl; 
  
}

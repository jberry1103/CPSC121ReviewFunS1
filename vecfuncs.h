//header file gaurd code prevents the potential problem 
//of double inclusion of a header file

#ifndef VECFUNCS_H
#define VECFUNCS_H

#include <iostream>
#include <vector> 


using namespace std;

void fillVector(vector<int>&); 
void findExtremes(vector<int>&, int&, int&); 

#endif
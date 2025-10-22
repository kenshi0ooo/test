#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
 vector<int> A = {1, 2, 3, 4, 5};
 int i = 0;
 int n = A.size();
 int j = n - 1;
 for(i < j; i++; j--) {
   swap(A[i], A[j]);
   }
   std::cout << "Reversed array: ";
   for (auto x : A) std::cout << x << " ";
   std::cout << std::endl;
   cin.get();
  return 0;
 }
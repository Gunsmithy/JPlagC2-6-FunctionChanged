//*********************************************
// Student Name: Who What
// Student Number: 100666666
//
// ENGR 1200U - Assignment: 01
//
// Filename: Assignment1-100666666.cpp
// Date submitted: 31/03/2017
//
// I hereby declare that this code, submitted
// for credit for the course ENGR 1200U, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// has not been knowingly plagiarized by others.
//
// Signed,
//
//
//*********************************************
#include <iostream>
#include <string>

using namespace std;

template <typename U>
inline U const& Maximum (U const& c, U const& d)  { if (c < d){	return d; }
else{ return c; } }

int main () { 
   int k = 39;
   int l = 20;
   cout << "Maximum(k, l): " << Maximum(k, l) << endl; 
   double g1 = 13.5; 
   double g2 = 20.7; 
   cout << "Maximum(g1, g2): " << Maximum(g1, g2) << endl; 
   string t1 = "Hello"; 
   string t2 = "World"; 
   cout << "Maximum(t1, t2): " << Maximum(t1, t2) << endl; 
   return 0; }

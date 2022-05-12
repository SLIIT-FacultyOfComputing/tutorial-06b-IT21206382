#include <iostream>
using namespace std;
#include "Box.h"

int main() 
{
  Box b1;
  int le,wi,he;

  cout<<"Input the length : ";
  cin>>le;
  cout<<"Input the width : ";
  cin>>wi;
  cout<<"Input the height : ";
  cin>>he;

  b1.setLength(le);
  b1.setWidth(wi);
  b1.setHeight(he);

  cout<<"The volume of the box : "<<b1.calcVolume()<<endl;

  return 0;

}
#include <iostream>
using std::cout;
using std::cin;
#include "Aviao.h"


int main(int argc, char **argv)
{
  double alt;
  Aviao aviao1;
  Aviao::attFirm();
  cout<<"entre com a vairiacao da altura:";
  cin>>alt;
  Aviao::dAlt(alt);
  if(testAlt()){
      cout<<"Problema na altura";
  }else{
      cout<<"altura Ok";
  }
}

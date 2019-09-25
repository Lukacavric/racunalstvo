#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
float djeljenje (float a, float b){
    float c=a/b;
    return c;
}
int main()
{
  float a, b;
  cout<<"Unesi 2 broja koje zelis podjeliti"<<endl;
  cin>>a;
  cin>>b;
  float rezultat;
  rezultat=djeljenje (a, b);
  cout<<"rezultat je: ";
  cout<<rezultat<<endl;
  
    system("PAUSE");
    return 0;
}

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int ispis (int a,int b){
    int c;
    if (a<b)
    c=a;
    else if (b<a)
    c=b;
    return c;
}         
                

int main()
{
    int a, b;
    cout<<"upisi prvi broj: ";
    cin>>a;
    cout<<endl;
    cout<<"upisi drugi broj: ";
    cin>>b;
    cout<<endl;
    int x=ispis (a, b);
    cout<<"manji broj je: "<<x;
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

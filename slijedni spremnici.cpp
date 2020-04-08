#include <cstdlib>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() 

{
    vector<int> RT;
    float a;
    int b=0;
    cout<<"Ovo je program koji ispisuje brojeve sve dok ne unesete nulu i ispisuje kapacitet."<<endl;
    cout<<"Unesi broj:"<<endl;
    cin>>a;
    cout<<endl;
    while ((a!=0))
    {
        if (a!=int(a))
        {
            cout<<"Unesi ponovno cijeli broj."<<endl;
            cin>>a;
        }
        else
        {
            cout<<"Unesi ponovno dok nebude nula."<<endl;
            RT.push_back(a);
            cin>>a;
        }
     }
     RT.push_back(a);
     cout<<endl;
    cout<<"Brojevi su:"<<endl;
    cout<<endl;
    for (vector<int>::iterator it=RT.begin(); it!=RT.end(); it++)
    {
        
        cout<<it<<" ";
        if (RT.size())
        {
            b++;
        }

    }
    cout<<"U ovom vektoru ima: "<<x<<" brojeva."<<endl;
    cout<<endl;
    cout<<"Kapacitet ovih brojeva je: "<<RT.capacity()<<" ."<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Nakon sortiranja, brojevi izgledaju ovako:"<<endl;
    sort (RT.begin(), RT.end());
    for (vector<int>::iterator it=RT.begin(); it!=RT.end(); it++)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Najmanji broj u vektoru je: "<<min_element(RT.begin(), RT.end())<<" ."<<endl;
    cout<<"Najveci broj u vektoru je: "<<max_element(RT.begin(), RT.end())<<" ."<<endl;
    vector<int>::iterator ip;
    ip=unique(RT.begin(), RT.end());
    RT.resize(distance(RT.begin(), ip));
    cout<<"Brojevi bez ponavljanja su:"<<endl;
    for (ip=RT.begin(); ip!=RT.end(); ip++)
    {
        cout<<*ip<<" ";
    }
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
	vector<int> primjer;
	primjer.push_back(3);
	primjer.push_back(10);
	primjer.push_back(33);
	cout<<"v1[0] = "<<primjer[0]<<endl;
	cout<<"v1[1] = "<<primjer[1]<<endl;
	cout<<"v1[2] = "<<primjer[2]<<endl;
	if(!primjer.empty()){
		primjer.clear();
	}
	vector<int> primjer2;
	primjer2.push_back(10);
	cout<<"v2[0] = "<<primjer2[0]<<endl;
	if(primjer==primjer2){
		cout<<"Vektori su jednaki."<<endl;
	}
	else{
		cout<<"Vektori nisu jednaki"<<endl;
	}
	primjer2=primjer;
	cout<<"v2-v1"<<endl;
	if(primjer==primjer2){
		cout<<"Vektori su jednaki."<<endl;
	}
	else{
		cout<<"Vektori nisu jednaki.\n";
	}
	return 0;
}

#include <iostream>
using namespace std;
int main(){
//	input
	string variabel_nama1;
	string variabel_nama2;
	cout<<"masukkan nama 1 =";
	getline(cin,variabel_nama1);
	cout<<"masukkan nama 2 =";
	getline(cin,variabel_nama2);
//	output
	cout<<"###################Percakapan singkat###################"<<endl;
	cout<<variabel_nama1<<":Hai salam kenal namaku \""<<variabel_nama1<<"\", nama kamu siapa?"<<endl;
	cout<<variabel_nama2<<":Hai salam kenal juga namaku \""<<variabel_nama2<<"\""<<endl;
	
	return 1;
}

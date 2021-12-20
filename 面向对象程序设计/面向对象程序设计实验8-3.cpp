#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;
class student{
private:
	string name[10];
	int zo[10];
	int id=0;
public:
	student(){
		string n;
		int e;
		int c;
		int flag;
		cout<<"number:" << endl;
		cin>>flag;
		cout<<"name,English score,Computer score:"<<endl;
		while(flag--){
			cin>>n>>e>>c;
			name[id]=n;
			zo[id]=e+c;
			id++;
		}
	}
	friend void sort(student&);
	friend void save(student&,string filepath);
};
void sort(student& s){
	int t=0;
	int id=s.id;
	for(int i=0; i<id; i++){
		for(int j=0; j<id; j++){
			if(s.zo[i]>s.zo[j]){
				swap(s.zo[i],s.zo[j]);
				swap(s.name[i],s.name[j]);
			}
		}
	}
}
void save(student& s,string filepath){
	fstream file(filepath,ios::out);
	if(!file.is_open()){
		cout<<"error"<<endl;
	}
	int i=0;
	int j=s.id;
	while(j>0){
		file<<s.name[i]<<" "<<s.zo[i]<<endl;
		i++;
		j--;
	}
	file.close();
	cout<<"Saved!" << endl;
}
void out(string filepath){
	fstream file(filepath,ios::in);
	string line;
	int i=0;
	while(getline(file,line)){
		cout<<line<<endl;
		i++;
	}
	file.close();
}
int main(){
	string filepath="out.txt";
	student s;
	sort(s);
	save(s,filepath);
	out(filepath);
}
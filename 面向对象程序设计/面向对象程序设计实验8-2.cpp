#include<fstream>
#include<string>
using namespace std;
int main(){
	ifstream ifs("in.txt",ios::in|ios::binary);
	ofstream ofs("out.txt",ios::out|ios::binary);
	string line;
	for(int i=1;getline(ifs,line);i++){
		ofs<<i<<'\t'<<line<<endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}
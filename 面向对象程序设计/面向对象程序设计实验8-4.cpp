#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[]){
	ifstream ifs(argv[1],ios::in|ios::binary);
	ofstream ofs(argv[2],ios::out|ios::binary);
	string line;
	for(int i=1;getline(ifs,line);i++){
		ofs<<i<<'\t'<<line<<endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}
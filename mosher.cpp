#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main(){
	string FILE_NAME = "egg";
	string HEIGHT_VALUE = "-0.050000";
	string line;
	vector<string> vert; 
	ifstream input;
	ofstream output;
	ifstream input1;
	ofstream output1;
	string a;
	input.open(FILE_NAME + ".obj");
	output.open(FILE_NAME + "_half.obj");
		while(getline(input,line)){
			if(line.substr(0,2) == "v "){
				if(line.find(HEIGHT_VALUE) != std::string::npos){
					output << line << "\n";
				}
				else{
				vert.push_back(line);
				output << "\n";
				}
			}
			else{
				output << line << "\n";
			}
		}
	input.close();
	output.close();
	input1.open(FILE_NAME + "_half.obj");
	output1.open(FILE_NAME + "_mosh.obj");
		while(getline(input1,line)){
			if(line == ""){
				output1 << vert.back(); << "\n";
				vert.pop_back();
			}
			else{
				output1 << line << "\n";
			}
		}
	
	input1.close();
	output1.close();
}
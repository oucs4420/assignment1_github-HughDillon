#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
    // just to get you started, this is how to refer to the arguments that were passed
    cout << "program: " << argv[0] << endl;
    for (int arg = 1; arg < argc; ++arg)
    {
        int num_lines = 0;
        string line = "";
        string filename = argv[arg];
        ifstream file;
        file.open(filename);
        if(file){
            while(getline(file,line)){
            num_lines++;
            }
            if(num_lines == 0){
                cout << " " << filename << ": -1" << '\n';
            }
            else{
                std::cout << " " << filename << ": " << num_lines << '\n' ;
            }
        }
        else {
            cout << " " << filename << ": -1" << '\n';
        }  
    }   
    exit(0); // this means that the program executed correctly!
}

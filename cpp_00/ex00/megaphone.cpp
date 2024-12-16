#include <iostream>
#include <sstream>
using namespace std;

void print(string str) {
    cout << str << endl;
}

void toUpper(const string& str, string& outputString) {
    for (char c : str) {
        outputString += toupper(c);
    }
}

int main(int argc, char *argv[]) {
    if(argc == 1) {
        print("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    } else {
        stringstream ss; 

        for(int i = 1; i < argc; ++i) {
            ss << argv[i];
            ss << " ";
        }
        string outputString;
        toUpper(ss.str(), outputString);
        print(outputString);
    }
}

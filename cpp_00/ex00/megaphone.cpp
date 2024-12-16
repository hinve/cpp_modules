#include <iostream>
#include <sstream>
using namespace std;

void print(string str) {
    cout << str << endl;
}

void strToUpper(const string& str, string& outputString) {
    for(size_t i = 0; i < str.size(); i++) {
        outputString += toupper(str[i]);
    }
}

void megaphone(int argc, char *argv[]) {
    stringstream ss; 

    for(int i = 1; i < argc; ++i) {
        ss << argv[i];
        ss << " ";
    }
    string outputString;
    strToUpper(ss.str(), outputString);
    print(outputString);
}

int main(int argc, char *argv[]) {
    if(argc == 1) {
        print("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    } else {
        megaphone(argc, argv);
    }
}

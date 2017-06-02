#include <iostream>
#include <fstream>

using namespace std;

void writeFile(string fileName, string str) { //substitui o que tem no arquivo ou cria outro arquivo.
    ofstream f(fileName);
    if(f.is_open()) {
        f << str;
    }
    f.close();
}

void readFile(string fileName) {
    string text;
    string line;
    ifstream f(fileName);
    if(f.is_open()) {
        while(getline(f, line)) {
            text += line;
        }
        f.close();
        cout << text << endl;
    }
    else {
        cout << "Unable to open file" << endl;
    }
}

int main() {
    readFile("arquivo.txt");
    writeFile("test.txt", "Hello AGAIN.");
    readFile("arquivo.txt");
}



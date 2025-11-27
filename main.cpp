#include <iostream>
#include <vector>
#include <string>
using namespace std;

void readFile(vector<string>& v) {}
void printLines(const vector<string>& v) {}
void writeFile(const vector<string>& v) {}

int main() {
    vector<string> lines;

    readFile(lines);
    printLines(lines);
    writeFile(lines);

    return 0;
}

void readFile(vector<string>& v) {
    ifstream fin("input.txt");
    string line;
    while (getline(fin, line)) {
        v.push_back(line);
    }
}


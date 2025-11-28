#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

void readFile(vector<string>& v);
void printLines(const vector<string>& v);
void writeFile(const vector<string>& v);

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

void printLines(const vector<string>& v) {
    for (const auto& s : v)
        cout << s << endl;
}

void writeFile(const vector<string>& v) {
    ofstream fout("output.txt");
    for (const auto& s : v)
        fout << s << "\n";
}

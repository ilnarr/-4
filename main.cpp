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
void printLines(const vector<string>& v) {
    for (auto& s : v)
        cout << s << endl;
}
void writeFile(const vector<string>& v) {
    ofstream fout("output.txt");
    for (auto& s : v)
        fout << s << "\n";
}

// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {


    ifstream in_file;
    ofstream out_file;
    string line{};
    size_t line_num{ 1 };
    string file_name{ "romeoandjuliet.txt" };
    in_file.open(file_name);
    out_file.open("output_file.txt");
    if (!in_file.is_open() || !out_file.is_open())
    {
        cerr << "Error opening or creating file" << std::endl;
    }
    else
    {
        while (getline(in_file, line))
        {
            out_file << setw(7) << left << line_num++;
            out_file << line << endl;
        }
        cout << "Copy complete" << endl;
    }
    in_file.close();
    out_file.close();
    return 0;
}


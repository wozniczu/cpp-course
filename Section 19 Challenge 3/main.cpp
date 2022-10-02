// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>


using namespace std;

int countFreq(string& pat, string& txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;

    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == M)
        {
            res++;
        }
    }
    return res;
}


int main() {


    ifstream file;
    string s{};
    string text{};
    string word{};
    size_t words{};
    string file_name{ "romeoandjuliet.txt" };
    file.open(file_name);
    if (!file.is_open())
    {
        cerr << "Error opening file" << std::endl;
    }
    else
    {
        cout << "Enter the substring to search for: ";
        cin >> word;
        while (!file.eof())
        {
            file >> s;
            text += s;
            words++;
        }
        cout << words << " words were searched..." << endl;
        cout << "The substring " << word << " was found " << countFreq(word, text) << " times" << endl;
    }
    file.close();
    return 0;
}


// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {


    ifstream file;
    string s{};
    string answers{};
    size_t num{};
    int sum{};
    size_t students_number{};

    string file_name{ "responses.txt" };
    file.open(file_name);
    if (!file.is_open())
    {
        cerr << "Error opening file" << std::endl;
    }
    else
    {

        file >> answers;
        cout << setw(15) << left << "Student";
        cout << setw(5) << right << "" << "Score" << endl;
        cout << "-------------------------" << endl;
        while (file >> s)
        {
            students_number++;
            cout << setw(15) << left << s;
            file >> s;
            for (size_t i{}; i < answers.length(); i++)
                if (s[i] == answers[i])
                    num++;
            cout << setw(5) << right << "" << num << endl;
            sum += num;
            num = 0;
        }
        cout << "-------------------------" << endl;
        cout << setw(15) << left << "Average score";
        cout << setw(5) << right << "" << static_cast<double>(sum) / students_number << endl;
    }
    file.close();
    return 0;
}


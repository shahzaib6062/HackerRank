#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string check_time_period = s.substr(8,2);
    string hours = s.substr(0,2);
    int int_hours = stoi(hours); 
    string new_time;
    if (check_time_period == "AM"){
        if (int_hours == 12) {
        hours = "00";
        new_time = hours + s.substr(2,6);
        }
        else{
             new_time = s.substr(0,8);
        }
    }
    else if(check_time_period == "PM"){
        if (int_hours == 12) {
        hours = to_string(int_hours);
        new_time = hours + s.substr(2,6);
        }
        else{
        int_hours = int_hours + 12;
        hours = to_string(int_hours);
        new_time = hours + s.substr(2,6); 
        }
    }
    return new_time;
    }

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

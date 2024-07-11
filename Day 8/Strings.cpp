#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // to input a single word
    string str;
    cout << "Enter a single word: ";
    cin >> str;
    cout << str << endl;

    // to input a sentence
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    cout << s << endl;

    // string declaration
    string s1(5, 'n');
    cout << s1 << endl; // 5 ns will be printed

    // string functions
    string s2 = "mehak", s3 = "fatima";
    // concatenation
    cout << s2 + s3 << endl;
    cout << s2.append(s3) << endl;

    // assign
    string s4 = "Mehak";
    cout << s4 << endl;
    s4.assign("Khadija");
    cout << s4 << endl;
    s4 = "Fatima";
    cout << s4 << endl;

    // at (returns the character at particular index)
    string s5 = "Alia";
    cout << s5.at(2) << endl;
    cout << s5[2] << endl;

    // clear
    string s6 = "Ghazala";
    s6.clear();
    cout << s6;

    // empty
    cout << s6.empty() << endl; // return a booleean value

    // compare
    string s7 = "abc", s8 = "abc";
    cout << s7.compare(s8) << endl;
    if (s1.compare(s2) == 0)
    {
        cout << "Strings are same." << endl;
    }
    else
    {
        cout << "Strings are not same" << endl;
    }

    // erase
    string s9 = "nincompoop";
    s9.erase(3, 3); // starts erasing from index 3 and deletes exactly 3 characters
    cout << s9 << endl;

    // find
    string s10 = "nimcompoop";
    cout << s10.find("com") << endl; // returns the starting index if found

    // length
    cout << s10.length() << endl;

    // resize
    s10.resize(5);
    cout << s10 << endl;

    // insert
    string s11 = "mehakrauf";
    s11.insert(5, "fatima");
    cout << s11 << endl;

    // size
    cout << s11.size() << endl;

    // substring substr
    string s12 = "nimcompoop";
    string s13 = s12.substr(4, 3); // start from index 4 and give me 3 elements
    cout << s13 << endl;

    // string to integer stoi
    string s14 = "786";
    int i = stoi(s14);
    cout << i + 2 << endl;

    // integer to string to_string
    int i1 = 786;
    string s15 = to_string(i1);
    cout << s15 + "2" << endl;

    // sorting a string
    string s16 = "nkjsabf";
    sort(s16.begin(), s16.end());
    cout << s16 << endl;
    return 0;
}
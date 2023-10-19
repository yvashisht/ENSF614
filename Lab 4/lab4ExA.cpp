//  ENSF 614 - Fall 2023  Lab4 - exercise A
// By: Yajur Vashisht, Balkarn Gill
// lab4ExA.cpp

#include<vector>
#include<string>
#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
using std::vector;
using std::string;

typedef vector<string> String_Vector;

String_Vector transpose(const String_Vector& sv);
// REQUIRES:
//    sv.size() >= 1
//    All the strings in sv are the same length, and that length is >= 1.
// PROMISES:
//    Return value is the "transpose" of sv, as defined in the Exercise A
//    instructions.

int main() {
    
    const int ROWS = 5;
    const int COLS = 4;
    
    char c = 'A';
    String_Vector sv;
    sv.resize(ROWS);
    
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLS; j++) {
            sv.at(i).push_back(c);
            c++;
            if(c == 'Z' + 1)
                c = 'a';
            else if (c == 'z' + 1)
                c = 'A';
        }
    
    
    for(int i = 0; i < ROWS; i++) {
        cout<< sv.at(i);
        cout << endl;
    }
    
    String_Vector vs = transpose(sv);
    for(int i = 0; i < (int)vs.size(); i++)
        cout << vs.at(i) << endl;
    
    return 0;
}



String_Vector transpose (const String_Vector& sv) {
    
    if (sv.empty() || sv[0].empty()) {
        return String_Vector();
    }

    int VS_ROWS = sv.size();
    int VS_COLS = sv[0].size();

    String_Vector vs(VS_COLS, std::string(VS_ROWS, ' '));

    for (int i = 0; i < VS_ROWS; i++) {
        for (int j = 0; j < VS_COLS; j++) {
            vs[j][i] = sv[i][j];
        }
    }
    return vs;
}

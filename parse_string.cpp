// Example program
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stdlib.h>
using namespace std;

int main()
{
    string foo = "12#45#33 94#54#23 98#59#27";
    string boo = "1#2#3";
     istringstream input(foo);
    
    vector <int> row;
    vector<vector<int>>grid;
    int p;
    int index=0;
    int indey=0;
    do{
        cout<< "1";
        string temp, p_b;
        input >> temp;
        istringstream pass(temp);
        while(getline(pass,p_b,'#')){
            p=stoi(p_b);
            row.push_back(p);
            ++index;
        }
        indey++;
        grid.push_back(row);
        row.clear();
    }while(input);
    
    index=index/(indey-1);
    cout << index << endl;
    
    for(int y=0; y<indey; y++){
        for(int x=0; x<index; x++){
            cout<< grid[y][x]<< " ";
        }
        cout << endl;
    }
    
    int a = 10;
    stringstream ss;
    ss << a;
    string str = ss.str();
    cout << str << endl;
    
    int a = 10;
    char *intStr = itoa(a);
    string str = string(intStr);
    
    return 0;
}

/*
online c++ compiler
https://www.onlinegdb.com/online_c++_compiler
*/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int check(int *box, int index){
    for(int m = 1; m < 10; m++){
        if(box[index]==box[m]&&index!=m){
            return 0;
        }
    }
    return 1;
}

void solver(int *box, int index){
    if(box[index]==0){
        for(int n =1; n <10; n++){
            box[index] = n;
            if(check(box,index)){
                index++;
                return solver(box, index);
            }
        }
    }else{
        index++;
        return solver(box, index); 
    }
    return;
}

int main()
{
    int box[10]={0,8,0,5,0,9,0,4,0,0};
    //box[9]=2;
    solver(box,1);
    cout << "done solver" << endl;
    
    for(int n=1;n<10;n++){
        cout << n;
    }
    cout << endl;
    for(int n=1;n<10;n++){
        cout << box[n];
    }
    return 0;
}

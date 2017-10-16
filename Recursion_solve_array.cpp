#include <iostream>

using namespace std;

int check(int *box, int index){
    for(int n = 1; n < 10; n++){
        if(box[index]==box[n]&&index!=n){
            return 0;
        }
    }
    return 1;
}

void solver(int *box, int index){
    for(int n =1; n <10; n++){
        box[index] = n;
        if(check(box,index)){
            solver(box, ++index);
        }
    }
    return;
}

int main()
{
    int box[10]={0};
    box[9]=2;
    solver(box,1);
    
    for(int n=1;n<10;n++){
        cout << box[n];
    }
    return 0;
}

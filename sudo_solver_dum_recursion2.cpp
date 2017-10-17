/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int check(int box[][10], int x, int y){
    for(int idx=1; idx<10;idx++){
        if(box[x][y]==box[idx][y]&& idx!=x){
            return 0;
        }
    }
    for(int idy=1;idy<10;idy++){
        if(box[x][y]==box[x][idy]&& idy!=y){
            return 0;
        }
    }
    return 1;
}


void f_s(int box[][10],int x,int y,int* left){
    int show_x,show_y,show_box;
    if(y==10){
        return;
    }
    if(box[x][y]==0){
        for(int n=1; n<10; n++){
            box[x][y]=n;
            show_x=x;
            show_y=y;
            show_box=box[x][y];
            if(check(box,x,y)){
                *left = *left - 1;
                cout << *left << " ";
                if(x<=8){
                    f_s(box,++x,y,left);
                    if(left==0) return;
                    //*left = *left + 1;
                }else{
                    f_s(box,1,++y,left);//process to the next
                    if(left==0) return;
                    //*left = *left + 1;
                }
            }
        }
        *left = *left + 1;
        box[x][y]=0;
        return;
    }else{
        if(x<10){
            f_s(box,++x,y,left);
        }else{
            f_s(box,1,++y,left);
        }
    }
}



int main()
{
    int box[10][10]={0};

    int left = 81;
    f_s(box,1,1,&left);
    cout << endl;
    
    for(int m=1;m<10;m++){
        for(int n=1;n<10;n++){
            cout << box[n][m] <<" ";
        }
        cout << endl;
    }
    
    return 0;
}
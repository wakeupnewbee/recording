/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
using namespace std;


void f_s(int box[][10],int x,int y,int* left){
    if(box[x][y]==0){
        for(int n=1; n<10; n++){
            box[x][y]=n;
            if(check(box,x,y,left)){
                left = left - 1;
                f_s(box,x++,y++,left)//process to the next
                if(left==0){
                    return;
                }else{
                    left++;
                    return;
                }
            }
        }    
    }else{
        if(x<10){
            f_s(box,x++,y,left);
        }else{
            f_s(box,1,y++,left);
        }
    }
}



int main()
{
    int box[10][10]={0};

    int left = 81;
    f_s(box,1,1,&left);   
    return 0;
}

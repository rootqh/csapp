#include<stdio.h>

int uadd_ok(unsigned x,unsigned y)
{
    if (x+y<x){
        /* code */
        return 0;
    }
    else {
        /* code */
        return 1;
    }
}

int tadd_ok(int x,int y)
{
    if (x>0&&y>0){
        if (x+y<0){
            return 0;
        }
        else{
            return 1;
        }
    }
    else if (x<0&&y<0){
        if (x+y>0) {
            return 0;
        }
        else {
            return 1;
        }
    }
    else {
        return 1;
    }
}

int tsub_ok(int x,int y)
{
    return tadd_ok(x,-y);
}

int main()
{
    int x=0,y=10000000;
    //printf("%d\n",uadd_ok(x,y));
    printf("%d\n",!x);
    return 0;
}
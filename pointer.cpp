#include <iostream>
#include<stdio.h>
using namespace std;


struct Rectangle
{
   int length;
   int breadth;
};



int main() {

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    //c++ code
    // int A[5] = {2,4,6,8,10};
    // p=A;
    //****************************

     //c++ code 
    // p=new int[5];

    //c code 
    // p=(int *)malloc(5*sizeof(int));  melloc function for allocate memory at pointers. (only in c++)
    // p[0]=10; p[1]=15; p[2]=14; p[3]=21; p[4]=31;
    //****************************

   

    // for(int i=0; i<5; i++) {
    //     cout << p[i] << endl;
    // }

    
    // int a = 10;
    // int *p;
    // p = &a;
     
    
    // cout << a << endl;

    //c code
    // printf("using pointer %d", *p);
    //*************************

    // c code
    // delete [ ] p;

    // c++ code
    // free(p);


    return 0;
}
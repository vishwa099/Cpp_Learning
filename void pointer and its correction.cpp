// #include<iostream>
// using namespace std;
// int main(){

//     int a=35;
//     char *p;
//     p= (char *)&a;

//     cout<<p<<endl;

// }


//-------You don't directly dereference a void pointer------------//

#include<stdio.h>
#include<iostream>
using namespace std;
int main(){

    void * ptr;

    int a=45;
    ptr=&a;

    printf("%d",*(int *)ptr);

}
#include <stdio.h>      // This is a header file
#include <stdlib.h>

int main(){
    // decalring some variables to work with
    int a=10,b=20,c;
    // arithmetic operators
    c=a+b;
    printf("%d\n",c);
    c=a-b;
    printf("%d\n",c);
    c=a*b;
    printf("%d\n",c);
    c=a/b;
    printf("%d\n",c);
    c=a%b;
    printf("%d\n",c);

    // Increment and decrement operators
    int d=5,e=5;
    d++;
    e--;
    printf("%d\n",d);
    printf("%d\n",e);


    /*
    Assignment operators
    =
    +=
    -=
    *=
    /=
    %=
    */
    int f=7,g;
    g=f;
    printf("%d\n",g);
    g+=f;
    printf("%d\n",g);
    g-=f;
    printf("%d\n",g);
    g*=f;
    printf("%d\n",g);
    g/=f;
    printf("%d\n",g);
    g%=f;


    // Relational operators
    /*
    >
    <
    >=
    <=
    ==
    !=
    */
    // Boolean : True=1, False=0
    int h=5,i=7;
    printf("%d\n",h==i);
    printf("%d\n",h<i);
    printf("%d\n",h>i);
    printf("%d\n",h<=i);
    printf("%d\n",h>=i);
    printf("%d\n",h!=i);


    // Logical operators
    /*
    &&
    ||
    !
    */
    int j=5,k=5,l=10,ans;
    ans=(j==k)&&(l>k);
    printf("%d\n",ans);
    ans=(j!=k)||(j<k);
    printf("%d\n",ans);
    ans=!(j!=k);
    printf("%d\n",ans);


    // Bitwise operators
    /*
    &   Bitwise AND
    |   Bitwise OR
    ^   Bitwise Exclusive OR or XOR
    ~   Bitwise Compliment
    <<  Shift Left
    >>  Shift Right
    */
    int m=12,n=25;
    printf("%d\n",m&n);
    printf("%d\n",m|n);
    /*
    12  =   00001100
    25  =   00011001

    Now AND ing every bit we get 00001000
    8   =   00001000

    Now OR ing every bit we get 00011101
    29  =   00011101


    Similar for all other operators i.e., perform operations bitwise
    */




    // Sizeof operators
    int o;
    float p;
    double q;
    char r;
    printf("%d\n",sizeof(o));
    printf("%d\n",sizeof(p));
    printf("%d\n",sizeof(q));
    printf("%d\n",sizeof(r));
    return 0;
}
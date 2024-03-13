#include <stdio.h>
typedef union{
    int i ;
    char ch[sizeof(int)];
}CHI;

int main(int argc,char const *argv[])
{
    /*
    union AnElt {
        int i;
        char c;
    }elt1,elt2;使用一个空间

    所有变量

    elt1.i = 4;

    */

   CHI chi;
   int i;
   chi.i = 1234;
   for (int i = 0; i < sizeof(int); i++)
   {
    printf("%02hhX",chi.ch[i]);
   }
   printf("\n");
   return 0;
   

}
#include <string.h>
#include <stdio.h>
int mylen(const char* a);
int main()
{
    //strlen  ==length
    /*strcmp ==compare比较= ，< ,>   strcmp(a,b)
    if(a==b) 0
    a < b -1
    a> b 1
    */  

    char line[] = "Hello";
    printf("%lu\n",mylen(line));
    //strlen(const char* s);
    return 0;

}

int mylen(const char* a)
{
    int i = 0;
    int idx = 0;
    while (a[idx] != '\0'){
        idx ++;
        i ++;
    }
    return i;
    
    i = strlen(a);
}
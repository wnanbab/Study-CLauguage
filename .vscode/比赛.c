


while(scanf("%d",&n)!=EOF){
        if(n > maxnum){
            maxnum = n;
        }
    }

    #include<stdio.h>
#include<string.h>

int main () {
    char s;
    scanf("%s",&s);
    if (isupper(s)) {
        printf("upper");
    }else if (islower(s)) {
        printf("lower");
    }else if (isdigit(s)) {
        printf("digit");
    }else{
        printf("other");
    }
    return 0;
}



int main () {
    char s[100];
    int length;
    int hasupper = 0;
    int haslower = 0;
    int hasdigit = 0;
    scanf("%s",&s);
    length = strlen(s);
    for(int j=0 ; j<length; j++){
        if (isupper(s[j])) {
            hasupper += 1;
        }else if (islower(s[j])) {
            haslower += 1;
        }else if (isdigit(s[j])) {
            hasdigit += 1;
        }
    }
    if (length >= 6 && hasupper != 0 && haslower!= 0 && hasdigit != 0) {
        printf("True");
    }else{
        printf("False");
    }

    return 0;

    
}
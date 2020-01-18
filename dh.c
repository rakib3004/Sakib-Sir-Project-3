#include<stdio.h>
int main(){

    char s[10];
    fgets(s,sizeof(s),stdin);

    printf("%s%d",s,sizeof(s));
    return 0;

}

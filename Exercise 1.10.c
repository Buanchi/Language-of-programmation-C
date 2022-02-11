#include <stdio.h>
int main (){
    int c;
    int aux = 1;
    while ((c=getchar())!=EOF){
        aux = 1;
        if(c=='\t'){
            printf("\\t");
            aux = 0;
        }
        if(c=='\b'){
            printf("\\b");
            aux = 0;
        }
        if(c=='\\'){
            printf("\\");
            aux = 0;
        }
        if(aux == 1){
            putchar(c);
        }
    }
    return 0;

}

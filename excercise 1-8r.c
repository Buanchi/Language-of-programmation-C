#include <stdio.h>
int main (){
    int c;
    int white_counter = 0;
    int tab_counter = 0;
    int line_counter = 0;
    while((c=getchar())!= EOF){
        if(' ' == c){
            white_counter++;
        }
        if('\t' == c){
            tab_counter++;
        }
        if('\n' == c){
            line_counter++;
        }
    }
    printf("number of spaces: %d\n",white_counter);
    printf("number of tabs: %d\n",tab_counter);
    printf("number of lines: %d\n",line_counter);

}





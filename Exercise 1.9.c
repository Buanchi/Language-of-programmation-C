#include <stdio.h>
int main()
{
    int c, aux;
    while((c = getchar())!=EOF)
    {
        if(c != ' ' && c != '\t')
        {
            putchar(c);
            aux = 1;
        }
        if(c == ' ' || c == '\t')
        {
            if(aux == 1)
            {
                putchar(' ');
                aux = 2;
            }
        }
    }
    return 0;
}

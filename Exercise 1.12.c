#include <stdio.h>
int main()
{
    int c;
    int aux;
    aux = 2;

    while((c = getchar())!=EOF)
    {
        if(c !=' '&& c != '\n' && c != 't')
        {
            aux = 1;
            putchar(c);
        }
        else
        {
            if(aux == 1)
            {
                aux = 2;
                putchar('\n');
            }
        }


    }

    return 0;
}

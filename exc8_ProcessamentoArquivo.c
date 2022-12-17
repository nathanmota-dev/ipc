#include <stdio.h>

int main()
{
    
    FILE *file;
    
    file = fopen("teste.txt", "w");
    
    fprintf(file, "Num, Nome, Curso, Nota 1, Nota2.");
    
    fclose(file);

    return 0;
}

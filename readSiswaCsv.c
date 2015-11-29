#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct klassSiswa 
{
  char* nama;
  int   nim;
}klassSiswa;

klassSiswa listSiswa[10000];

const char* getfield(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, ";");
         tok && *tok;
         tok = strtok(NULL, ";\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}

void main()
{
    int i = 0;
    FILE* stream = fopen("ilmu_komputasi_name_and_nim_only.csv", "r");
    char line[1024];
    while (fgets(line, 1024, stream))
    {   
        char* line1 = strdup(line);
        char* line2 = strdup(line);
        char* line3 = strdup(line);
        listSiswa[i].nama = (char *) malloc(sizeof(getfield(line3, 2)) * 3);
        listSiswa[i].nim =  atoi(getfield(line1, 1));
        strcpy(listSiswa[i].nama, getfield(line2, 2));
        free(line1);
        free(line2);
        i++;
    }
}
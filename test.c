// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// const char* getfield(char* line, int num)
// {
//     const char* tok;
//     for (tok = strtok(line, ";");
//          tok && *tok;
//          tok = strtok(NULL, ";\n"))
//     {
//         if (!--num)
//             return tok;
//     }
//     return NULL;
// }

// int main()
// {
//     FILE* stream = fopen("ilmu_komputasi_name_and_nim_only.csv", "r");

//     char line[1024];
//     while (fgets(line, 1024, stream))
//     {
//         char* tmp = strdup(line);
//         printf("%s\n", getfield(tmp, 2));
//         // NOTE strtok clobbers tmp
//         free(tmp);
//     }
// }



/**********************************
C Demo how to READ with fread.
**********************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct customer {
   char  fname[20],lname[20];
   int   acct_num;
   float acct_balance;
};

void main ()
{
   FILE *infile;
   struct customer input;

   /*** open the accounts file ***/
   infile = fopen ("accounts.dat","r");
   if (infile == NULL)
     {
      fprintf(stderr, "\nError opening accounts.dat\n\n");
      exit (1);
     }

   while (fread (&input, sizeof(struct customer), 1, infile))
      printf ("Name = %10s %10s   Acct Num = %8d   Balance = %8.2f\n",
              input.fname, input.lname, input.acct_num, input.acct_balance);
}

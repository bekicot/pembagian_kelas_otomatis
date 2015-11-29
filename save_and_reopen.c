void simpanKeFile();

void simpanKeFile(){
  FILE *outfile;
  fileFormat outFileFormat;
  char namaFile[100];
  int i, j;

  while(listSiswa[i].nama != NULL){
    outFileFormat.listSiswa[i] = listSiswa[i];
    i++;
  }
  i = 0;
  while(listKelas[i].nama != NULL){
    printf("nnan %i\n", i);
    outFileFormat.listKelas[i] = listKelas[i];
    i++;
  }

  if (outfile == NULL)
    {
      printf("Masukan nama filenya : ");
      scanf("%s", namaFile);
      outfile = fopen(namaFile,"w");
      if(outfile == NULL)
        fprintf(stderr, "\nError Saat Membuka %s\n\n", namaFile);
    }

   // write entire structure to Accounts file
   fwrite (&outFileFormat, sizeof(outFileFormat), 1, outfile);
}
// void readFromFIle(){
//   FILE *infile;
//   char namaFile[100];
//   int i, j;

//   /*** open the accounts file ***/
//   if (infile == NULL)
//     {
//       printf("Masukan nama filenya : ");
//       scanf("%s", namaFile);
//       infile = fopen(namaFile,"r");
//       if(infile == NULL)
//         fprintf(stderr, "\nError Saat Membuka %s\n\n", namaFile);
//     }


//   while (fread (&listSiswa, sizeof(fileFormat), 1, infile)){

//   }
// }
void readFromFIle(){
  FILE *infile;
  fileFormat outFileFormat;
  char namaFile[100];
  int i, j;

  /*** open the accounts file ***/
  if (infile == NULL)
    {
      printf("Masukan nama filenya : ");
      scanf("%s", namaFile);
      infile = fopen(namaFile,"r");
      if(infile == NULL)
        fprintf(stderr, "\nError Saat Membuka %s\n\n", namaFile);
    }


  while (fread (&outFileFormat, sizeof(fileFormat), 1, infile))
    i =0;
    while(outFileFormat.listSiswa[i].nama != NULL){
      // printf("%s\n", outFileFormat.listSiswa[i].nim);
      // listSiswa[i] = outFileFormat.listSiswa[i];
      listSiswa[i].nama = (char *)malloc(sizeof( outFileFormat.listSiswa[i].nama)*3);
      strcpy(listSiswa[i].nama, outFileFormat.listKelas[i].nama);
      // listSiswa = outFileFormat.listSiswa;
      i++;
    }
}
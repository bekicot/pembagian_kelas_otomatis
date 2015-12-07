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

   fwrite (&outFileFormat, sizeof(outFileFormat), 1, outfile);
}

void readFromFIle(){
  FILE *infile;
  fileFormat outFileFormat;
  char namaFile[100];
  int i, j;

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
      listSiswa[i] = outFileFormat.listSiswa[i];
      i++;
    }
    while(outFileFormat.listKelas[i].nama != NULL){
      listKelas[i] = outFileFormat.listKelas[i];
      i++;
    }
}
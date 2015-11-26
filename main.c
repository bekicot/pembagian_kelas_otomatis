#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "struktur_data.c"
#include "input_data.c"
#include "load_data.c"
#include "menu.c"
// #include <gtk/gtk.h>

int main(int argc, char const *argv[]) {
  loadSiswaCsv();
  menuUtama();
  return 0;
}


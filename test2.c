#include <string.h>
#include <stdio.h>
int main (int argv, char* argc [])
{
  FILE *fOut;
  int i=0;
  char FileName[256];                                         for(i=0; i<argv; i++)
  {
      printf("%s\n", argc[i]);
  }    
      printf("Enter file name...");  //Ввод имени файла 
      scanf("%s", FileName);
      printf("Enter a string...");   //Ввод строки 
      scanf("%s", str);
      fOut=fopen(FileName, "r");     //Открыть файл для записи
      if (NULL==fOut)                //Файл не существует
      {
          printf("ERROR: FILE ISN'T FOUND!");
          return 1;   
      }
      else {
          printf("OK: file was created");  
      }
      if (NULL==str) //строка не существует
      {
          printf("ERROR: THIS STRING ISN'T FOUND!");    
          return 2;
      }
      else {
          printf("\nOK: this string was written\n"); 
      } 
      fprintf(fOut,"%s", str);
      fscanf("%s", str);
      fclose(fOut);
      return 0;
}

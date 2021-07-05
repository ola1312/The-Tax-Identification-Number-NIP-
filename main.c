#include <stdio.h>

int main(void)
{
  const short wagi[] = {6, 5, 7, 2, 3, 4, 5, 6, 7};
  const short *w = wagi;
  int nip[10];
  int *n = nip;
  int znak = 0;
  int licznik = 0;
  
  printf("Podaj numer NIP: ");
  while(licznik<10)
  {
    znak = getchar();
    if (48<=znak && znak <=57)
    {
      *n ++ = znak-48;
      licznik++;
    }
  }
  n--;
  int iloczyny = 0;
  for (int i=0; i<9; i++)
  {
    iloczyny += *w ++ *nip[i];
  }
  int cyfra = iloczyny % 11;
  printf("Podany NIP %d%d%d-%d%d%d-%d%d-%d%d jest ", nip[0], nip[1], nip[2], nip[3], nip[4], nip[5], nip[6], nip[7], nip[8], nip[9]);
  if(cyfra == *n)
    printf("poprawny.\n");
  else
    printf("niepoprawny.\n");
    return 0;
}

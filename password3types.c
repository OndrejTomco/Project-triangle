#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));

  int i;
  int type;
  char password[9];

for(i=0;i<9;i++) {
  type=rand()%3;

  switch (type)
  {
    case 0: password[i] = rand()%10+48;break;
    case 1: password[i] = rand()%26+65;break;
    case 2: password[i] = rand()%26+97;
  }
}
password[8] = '\0';
printf("%s",password );


}

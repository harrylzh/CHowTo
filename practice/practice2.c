#include <stdio.h>
#include <math.h>
#include "includeClzh.h"
// #include "includeCPPlzh.h"


void P_2_27();//header

void P_2_27(){//body
  for(int i = 0; i  < 8 ; i++){
      char *l = (i % 2 == 0) ? "* * * * * * * *" : " * * * * * * * *" ;
      puts(l);
      
  }
}

void P_2_29();//header

void P_2_29(){//body
  printf("A : %d\n", 'A');
  printf("$ : %d\n", '$');
  printf("  : %d\n", ' ');
}

void P_2_30(); // header

void P_2_30()
{ // body
    int num;

    // puts("请输入一个五位整数 : ");
    // scanf("%d", &num);
    num = consoleGetInt("请输入一个五位整数 : \n");

    decSplit(num);
}

void P_2_31(); // header

void P_2_31()
{ // body
    printf("%s\t%s\t%s\n", "number", "squard", "cube");
    for (int i = 0; i < 11; i++)
    {
        int sq = square(i);
        int cu = cube(i);

        printf("%d\t%d\t%d\n", i, sq, cu);
    }
}

int main(int argc, const char *argv[])
{
    // P_2_31();
    // P_2_30();
    // P_2_29();
    P_2_27();
    return 0;
}
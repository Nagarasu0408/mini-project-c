#include<stdio.h>

#include<stdlib.h>
int i,j,k,l,m,count=6,c=1,c1=10,c2=1,c3=10,c4=11,c5=0,c6=8,a=0;
void line()
{
 for(k=0;k<=2;k++)
 {
  printf("*");
 }
 
}

void gap()
{
for(k=0;k<=2;k++)
{ printf(" ");
}
}
void crosstr()
{
 for(j=10;j>=i;j--)
 {
  printf(" ");
 }
}
void crosstl()
{
 for(j=10;j>=i;j--)
 {
 printf(" ");
 }
}
void crossbr()
{
 for(l=1;l<=i;l++)
 {
  printf(" ");
 }
}
void crossbl()
{
 for(j=1;j<=i;j++)
 {
  printf(" ");
 }
}
void mida()
{
 for(l=1;l<=i;l++)
 {
  if(i>4&&i<7)
       {
         printf("**");
    }else
    {
     printf("  ");
    }
 }
}
void midb()
{
 for(l=1;l<=5;l++)
 {
  if(i>=0&&i<2||i>4&&i<7||i>9&&i<=11)
  {
   printf("**");
  }else
  {
   printf("  ");
  }
 }
 for(k=0;k<=2;k++)
 {
  if(i>=0&&i<2||i>4&&i<7||i>9&&i<=11)
  {
   printf(" ");
  }else
  {
   printf("*");
  }
 }
}
void midc()
{
 for(l=1;l<=5;l++)
 {
 if(i>=0&&i<2||i>9&&i<=11)
  {
   printf("**");
  }else
  {
   printf("  ");
  }
 }
}
void midd()
{
 for(l=1;l<=5;l++)
 {
  if(i>=0&&i<2||i>9&&i<=11||l==5)
  {
   printf("**");
  }
  else
  {
  printf("  "); 
  }
 }
 for(k=0;k<2;k++)
 {
  if(i>=0&&i<2||i>9&&i<=11)
  {
   printf(" ");
  }
  else
  {
   printf("*");
  }
 }
}
void midh()
{
 for(l=1;l<=5;l++)
{
 if(i>4&&i<7)
 {printf("**");
 }else
 {
  printf("  ");
 }
}
}
void mide()
{
 for(l=1;l<=5;l++)
 {
  if(i>=0&&i<2||i>4&&i<7||i>9&&i<=11)
  {printf("**");
  }
  else
  {
  printf("  ");
  }
 }
}
void midf()
{
 for(l=1;l<=5;l++)
 {
  if(i>=0&&i<2||i>4&&i<7)
  {
   printf("**");
  }else
  {
   printf("  ");
  }
 }
}
void midg()
{
 for(l=1;l<=5;l++)
 {
 if(i>=0&&i<2||i>4&&i<7&&l>=3&&l<=5||i>=6&&i<=9&&l==5||i>9&&i<=11)
  {
   printf("**");
  }else
  {
   printf("  ");
  }
 }
}
void spi()
{
 for(l=0;l<=6;l++)
 {
  if(i>=0&&i<2||i>=2&&i<=9&&l==3||i>9&&i<=11)
  {
   printf("***");
  }else
  {
  printf("   ");
  }
 }
}
void spj()
{
 for(l=0;l<=6;l++)
 {
    if(i>=0&&i<2||i>=2&&i<=9&&l==3||i>=7&&i<=9&&l==0||i>9&&i<=11&&l<=3)
  {
   printf("***");
  }else
  {
   printf("   ");
  }
 }
}
void midk()
{
 for(l=0;l<=6;l++)
 {
  if(l==count)
  {
   printf("***");
   
  }else
  {
  printf(" ");//one space
  }
 }
 if(i<=5)
 {
 count--;
 }
 else if(i<=11)
 {
 count++; 
 }
}
void midl()
{
 for(l=1;l<=5;l++)
 {
  if(i>9&&i<=11)
  {
  printf("**");
  }
  else
  {
  printf("  ");//two spaces
  }
 }
}
void midm()
{
  for(j=0;j<=2;j++)
  {
   printf("*");
  }
  for(k=1;k<=i;k++)
    {
    printf(" ");
 }
 for(j=0;j<=2;j++)
  {
   printf("*");
  }
  for(m=10;m>=i;m--)
  {
   printf("  ");
  }
  for(j=0;j<=2;j++)
  {
   printf("*");
  }
  for(k=1;k<=i;k++)
  {
   printf(" ");
  }
  for(j=0;j<=2;j++)
  {
   printf("*");
  }
}
void midv()
{
   for(j=1;j<=i;j++)
  {
   printf(" ");
  }
  for(l=0;l<=2;l++)
       {
        printf("*");
  }
  for(k=10;k>=i;k--)
    {
    printf("  ");//two space
 }
     for(l=0;l<=2;l++)
     {
      printf("*");
  }
}
void mido()
{
 for(k=0;k<=2;k++)
 {
  if(i==0&&k<2||i==1&&k<1||i==11&&k<2||i==10&&k<1)
  {
  printf(" ");
  }
  else
  {
   printf("*");
  }
 }
 for(l=1;l<=6;l++)
 {
  if(i>=0&&i<2||i>9&&i<=11)
  {
   printf("**");
  }else
  {
   printf("  ");
  }
 }
 for(k=0;k<=2;k++)
 {
  if(i==0&&k>0||i==1&&k>1||i==11&&k>0||i==10&&k>1)
  {printf(" ");
  }else
  {printf("*");
  }
 }
}
void midp()
{
for(l=1;l<=5;l++)
{
 if(i>=0&&i<2||i>4&&i<7||i>2&&i<=4&&l==5)
 {
 printf("**");
 }
 else
 {
  printf("  ");
 }
}
}
void spq()
{
 for(l=0;l<=11;l++)
 {
if(i>=0&&i<2&&l<9||i>=2&&i<9&&l==0||l==8&&i<10||i>7&&i<=9&&l<9||i>=9&&i<=11&&l==i)
  {
   printf("**");
  }
  else
  {
   printf("  ");
  }
 }
}
void midr()
{
 for(l=1;l<=5;l++)
 {
  if(i>=0&&i<2||i>4&&i<7||i>=3&&i<=4&&l==5||i>=7&&i<=11&&l==c4)
  {
   printf("**");
  }else
  {
   printf("  ");
  }
 }
 if(i>6)
 {
  c4++;
 }
 else if(c4>5)
 {
 c4=1;
 }
}
void sps()
{
 for(l=1;l<=8;l++)
 {
  if(i>=0&&i<2||i>4&&i<7||i>=2&&i<=4&&l==1||i>6&&i<=9&&l==8||i>9&&i<=11)
  {
   printf("**");
   
  }else
  printf("  ");
 }
 
}
void spt()
{
 for(l=0;l<=6;l++)
 {
  if(i>=0&&i<2||i>=2&&i<=11&&l==3)
  {
   printf("***");
  }else{
   printf("   ");
  
  }
 }
}

void midu()
{
 for(l=1;l<=6;l++)
 {
  if(i>9&&i<=11)
  {
   printf("**");
  }
  else
  {
   printf("  ");
  }
 }
}
void midw()
{
for(j=0;j<=i;j++)
{
 printf("  ");
}
}
void spx()
{
 for(l=1;l<=11;l++)
 {
  if(l==c||l==c1)
  {
   printf("***");
  }else{
   printf("   ");
  }
 }if(i<=4)
 {
  c++;
  c1--;
 }else if(i<=11)
 {c1++;
 c--;
 }
}
void spy()
{
 for(l=0;l<=11;l++)
 {
  if(l==c2||l==c3&&i<5)
  {
   printf("***");
  }else
  {
   printf("  ");
  }
 }
 if(i<=4)
 {
  c2++;
  c3--;
 }else if(i<=11)
 {
  c3++;
 }
 if(i>=5)
 {
  printf(" ");
 }
}
void spz()
{
 for(l=0;l<=11;l++)
 {
  if(i>=0&&i<2||i>9&&i<=11||i>=2&&i<=9&&l==c4)
  {
   printf("**");
  }else
  {
   printf("  ");
  }
 }
 c4=c4-1;
}
int main()
{
 start:
 c=1,c1=10,c2=1,c3=10,c4=11;
 char cc[100];
 printf(" enter your name:");
 scanf("%s",&cc);
 printf("\n");
  
  for(i=0;i<=11;i++)
   {
    for(a=0;cc[a]!=NULL;a++)
    {
      if(cc[a]=='a')
   {
    system("color f1");
    crosstr();
    line();
    mida();
    line();
    crosstl();
    gap();
   }
     
    else if(cc[a]=='b')
    {
     system("color 01");
     line();midb();gap();
    }
    else if(cc[a]=='c')
    {
     system("color f3");
     line();midc();gap();
    }
        else if(cc[a]=='d')
     {system("color f5");
      line();midd();gap();
     }
     else if(cc[a]=='e')
     {system("color f6");
      line();mide();gap();
     }
      else if(cc[a]=='f')
     {
     system("color f1");
      line();midf();gap();
     } 
     else if(cc[a]=='g')
     {
     system("color f8");
      line();midg();gap();
     } 
     else if(cc[a]=='h')
     {
     system("color f9");
      line();midh();line();gap();
     } 
     else if(cc[a]=='i')
     {
     system("color f5");
      spi();gap();
     } 
     else if(cc[a]=='j')
     {
     system("color 01");
      spj();gap();
     }
      else if(cc[a]=='k')
     {
     system("color 02");
      line();midk();gap();
     } 
     else if(cc[a]=='l')
     {
     system("color 03");
      line();midl();gap();
     } 
     else if(cc[a]=='m')
     {
     system("color 04");
        midm();gap();
     } 
     else if(cc[a]=='n')
     {
     system("color 05");
      line();crossbr();line();crosstl();line();gap();
     }
      
      else if(cc[a]=='o')
     {
     system("color 06");
      mido();gap();
     } 
     else if(cc[a]=='p')
     {
     system("color 07");
      line();midp();gap();
     } 
     else if(cc[a]=='q')
     {
     system("color 08");
      spq();gap();
     }
      else if(cc[a]=='r')
     {
     system("color 09");
      line();midr();gap();
     }
      else if(cc[a]=='s')
     {
     system("color f1");
      sps();gap();
     }
      else if(cc[a]=='t')
     {
     system("color f2");
      spt();gap();
     }
      else if(cc[a]=='u')
     {
     system("color f5");
      line();midu();line();gap();
     }
      else if(cc[a]=='v')
     {
     system("color f8");
        midv();gap();
     }
      else if(cc[a]=='w')
     {
     system("color f7");
      line();crosstr();line();midw();line();crosstl();line();gap();
     }
      else if(cc[a]=='x')
     {
     system("color f6");
      spx();gap();
     } else if(cc[a]=='y')
     {
     system("color 02");
     spy();gap();
     }
      else if(cc[a]=='z')
     {
     system("color 03");
     spz();gap();
     }
      else if(cc[a]==' ')
     {
     system("color 04");
      gap();gap();
     }
     
    }
     printf("\n");
   }
    goto start;
}

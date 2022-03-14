#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;
void gotoRowCol(int rpos, int cpos)
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    int xpos=cpos, ypos = rpos;
    COORD scrn;
    HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X = xpos;
    scrn.Y = ypos;
    SetConsoleCursorPosition(hOuput,scrn);
}
void printgrid(int sc,int se,int rdim,int cdim,char s)
{
    for(int ri=0;ri<rdim;ri++)
    {
        for(int ci=0;ci<cdim;ci++)
        {
            if(ri==0 || ri==rdim-1 || ci==0 || ci==cdim-1)
                {
                 gotoRowCol(sc+ri,se+ci);
                 cout<<s;
                }
        }
    }
}
void nofbox(int BN,int rdim,int cdim,char s)
{
    int ri=(BN-1)/10 * rdim;
    int ci=(BN-1)%10 * cdim;

    printgrid(ri,ci,rdim,cdim,s);
}
void valueprint(int BN,int val,int rdim,int cdim)
{
    int ri=(BN-1)/10 * rdim+rdim/2;
    int ci=(BN-1)%10 * cdim+cdim/2-1;

     gotoRowCol(ri,ci);
     cout<<val;
}
void printbox(int BN,int rdim,int cdim,char s)
{
//    int k=100;
    for(int i=1,v=100;i<=100,v>0;i++,v--)
    {
     nofbox(i,rdim,cdim,s);
     valueprint(i,v,rdim,cdim);
     if((i%10==0)
     {
         for(int k=100,n=10;n>0,k>90;n--,k--)
         {
           nofbox(k,rdim,cdim,s);
           valueprint(i,n,rdim,cdim);
         }
     }

    }
}
int main()
{
    int rows=80,cols=88,BN;
    int rdim=rows/13,cdim=cols/13,sc=0,se=0;
    printbox(BN,rdim,cdim,-37);
    getch();
    return 0;
}

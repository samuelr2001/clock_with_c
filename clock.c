#include <stdio.h>
#include <stdlib.h>
#include  <windows.h>


int main(int argc, char const *argv[])
{
    /* code */
     
     int h,m,s;
     int d = 1000;

     printf("defina o tempo de inicio desejado: \n");
     scanf("%d%d%d", &h,&m,&s);

     
        if (h > 12 || m > 60 || s > 60)
        {
            printf("ERROR !\n");
            exit(0);
        }
        
        while (1)
        {
            s++; 
            if(s > 59){
                m++;
                s=0;
                
            }
            if(m > 59){
                 h++;
                 m=0;

            }
            if(h > 12){
                h=1;
            }

            printf("\n Relogio: ");
            printf("\n %02d:%02d%:%02d", h,m,s);
            Sleep(d);
            system("cls");
        }
        



    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
    system("color F0");
    float massa,altura,imc;
    char sair;
    do{
        system("cls");
        printf("Qual a sua massa? ");
        scanf("%f",&massa);
        printf("Qual a sua altura? ");
        scanf("%f",&altura);
        printf("\n");
        imc=massa/(altura*altura);
        if (imc<18.5)
            printf("Seu IMC %c %.2f\nVocê est%c parecendo o Xuverson!\n",-126,imc,-96);
        else{
            if(imc<25)
                printf("Seu IMC %c %.2f\nSeu peso est%c normal!\n",-126,imc,-96);
            else{
                if(imc<30)
                    printf("Seu IMC %c %.2f\nCome%ce um regime!\n",-126,imc,-121);
                else
                    printf("Seu IMC %c %.2f\nSe mata logo!\n",-126,imc);
            }
        }
        printf("Aperte enter para recome%car ou esc para sair!",-121);
        do{
            sair=getch();
        }while(sair!=13 && sair!=27);
    }while(sair==13);
    return 0;
}

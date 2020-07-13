#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<conio.h>


int main(void)
{
    int logicaProposicional,menu,somatorio,matriz,analiseCombinatoria;//menus
    int p, q,result;;//Logica Proposicional
    int j,m,n,soma,s;//somatorio
    int a11,a12,a21,a22,b11,b12,b21,b22,c11,c12,c21,c22,det;//matriz
    int i,k,a,fatorial,fat,arranjo,fat2,combin;//analisecombinatorio
    int b,simples;//funcoes simples
    system("MODE con cols=53 lines=30 ");

    while(menu!= 6)
    {
        result = 0;
        menu = 0;
        logicaProposicional = 0;
        somatorio = 0;
        matriz = 0;
        analiseCombinatoria = 0;
        arranjo = 1;
        simples=0;
        s=0;


        textcolor(11);
        printf("  ______     _______     _           _______ \n");
        printf(" |  __   %c  (  ____ %c   ( )         (  ____ %c \n",92,92,92);
        printf(" | (  %c  )  | (    %c/   | |         | (    %c/ \n",92,92,92);
        printf(" | |   ) |  | |         | |         | |      \n");
        printf(" | |   | |  | |         | |         | |      \n");
        printf(" | |   ) |  | |         | |         | |      \n");
        printf(" | (__/  )_ | (____/%c _ | (____/%c _ | (____/%c \n",92,92,92);
        printf(" (______/(_)(_______/(_)(_______/(_)(_______/\n\n");
        textcolor(7);
        printf("    Dispositivo de Calculo em Linguagem C");

        printf("\n\n");
        printf("     _____________________________________\n");
        printf("    |           Menu Principal            |\n");
        printf("    |_____________________________________|\n");
        printf("    |                                     |\n");
        printf("    |        1- Logica Proposicional      |\n");
        printf("    |        2- Somatorio                 |\n");
        printf("    |        3- Matriz                    |\n");
        printf("    |        4- Analise Combinatoria      |\n");
        printf("    |        5- Funcoes Simples           |\n");
        printf("    |               Sair(6)               |\n");
        printf("    |_____________________________________|\n");
        printf("\n    Digite uma das opcoes acima:");
        scanf("%d",&menu);
        system("cls");


        switch(menu)
        {
        case 1://logica
            while(logicaProposicional != 8)
            {
                textcolor(11);
                printf("           _                 _ \n");
                printf("          | |               (_)\n");
                printf("          | |     ___   __ _ _  ___ __ _ \n");
                printf("          | |    / _ \ / _`  | |/ __/ _` |\n");
                printf("          | |___| (_) | (_| | | (_| (_| |\n");
                printf("          %c_____/%c___/ %c__, |_|%c___%c__,_|\n",92,92,92,92,92);
                printf("                        __/ |            \n");
                printf("                       |___/             \n");

                textcolor(7);
                printf("\n\n\n");
                printf("           _____________________________\n");
                printf("          |     Logica Proposicional    |\n");
                printf("          |_____________________________|\n");
                printf("          |         1- ~ p              |\n");
                printf("          |         2- ~ q              |\n");
                printf("          |         3- p V q            |\n");
                printf("          |         4- p ^ q            |\n");
                printf("          |         5- p _V_ q          |\n");
                printf("          |         6- p -> q           |\n");
                printf("          |         7-  p <--> q        |\n");
                printf("          |  Voltar ao menu anterior(8) |\n");
                printf("          |_____________________________|\n");
                printf("          Digite uma das opcoes acima:");
                scanf("%d",&logicaProposicional);
                printf("        _____________________________\n");
                system("cls");//esse codigo limpa a tela
                if(logicaProposicional !=8)
                {

                    switch(logicaProposicional)
                    {
                    case 1:

                        printf("-----------------------------\n");
                        printf("Logica Proposicional\n\n");
                        printf("Digite o Valor de P:\n");
                        scanf("%d",&p);
                        printf("-----------------------------\n");
                        system("cls");

                        if (p == 1 )
                        {
                            result = 0;
                            printf("A negacao de P :%d",result);
                        }
                        else
                        {
                            result = 1;
                            printf("%d",result);
                        }

                        printf("\n-----------------------------\n");
                        system("pause");
                        system("cls");
                        break;

                    case 2:
                        printf("-----------------------------\n");
                        printf("Logica Proposicional\n\n");
                        printf("Digite o Valor de Q:\n");
                        scanf("%d",&q);

                        printf("-----------------------------\n");
                        system("cls");

                        if (q == 1)
                        {
                            result = 0;
                            printf("A negacao de Q:%d",result);
                        }
                        else
                        {
                            result = 1;
                            printf("%d",result);
                        }



                        printf("\n-----------------------------\n");
                        system("pause");
                        system("cls");
                        break;


                    case 3://V
                        printf("-----------------------------\n");
                        printf("Logica Proposicional\n\n");
                        printf("Digite o Valor de P:\n");
                        scanf("%d",&p);
                        printf("Digite o Valor de Q:\n");
                        scanf("%d",&q);
                        printf("-----------------------------\n");
                        system("cls");

                        printf("-----------------------------\n");
                        if (p == 1 && q == 1)
                        {
                            result=1;
                            printf("Resultado:%d",result);

                        }
                        else if (p == 1 && q == 0)
                        {
                            result=1;
                            printf("%d",result);

                        }
                        else if (p == 0 && q == 1)
                        {
                            result=1;
                            printf("Resultado:%d",result);

                        }
                        else
                        {
                            result = 0;
                            printf("Resultado:%d",result);
                            ;
                        }
                        printf("\n-----------------------------\n");
                        system("pause");
                        system("cls");
                        break;

                    case 4://^

                        printf("-----------------------------\n");
                        printf("Logica Proposicional\n\n");
                        printf("Digite o Valor de P:\n");
                        scanf("%d",&p);
                        printf("Digite o Valor de Q:\n");
                        scanf("%d",&q);
                        printf("-----------------------------\n");
                        system("cls");

                        system("cls");
                        printf("-----------------------------\n");
                        if (p == 1 && q == 1)
                        {
                            result=1;
                            printf("Resultado:%d",result);

                        }
                        else if (p == 1 && q == 0)
                        {
                            result=0;
                            printf("Resultado:%d",result);
                        }
                        else if (p == 0 && q == 1)
                        {
                            result=0;
                            printf("Resultado:%d",result);
                        }
                        else
                        {
                            result=0;
                            printf("Resultado:%d",result);
                        }
                        printf("\n-----------------------------\n");
                        system("pause");
                        system("cls");
                        break;

                    case 5://_v_

                        printf("-----------------------------\n");
                        printf("Logica Proposicional\n\n");
                        printf("Digite o Valor de P:\n");
                        scanf("%d",&p);
                        printf("Digite o Valor de Q:\n");
                        scanf("%d",&q);
                        printf("-----------------------------\n");
                        system("cls");


                        if (p == 1 && q == 1)
                        {
                            result=0;


                        }
                        else if (p == 1 && q == 0)
                        {
                            result=1;


                        }
                        else if (p == 0 && q == 1)
                        {
                            result=1;


                        }
                        else
                        {
                            result = 1;
                        }
                        printf("Resultado:%d",result);
                        printf("\n-----------------------------\n");
                        system("pause");
                        system("cls");
                        break;


                    case 6://->

                        printf("-----------------------------\n");
                        printf("Logica Proposicional\n\n");
                        printf("Digite o Valor de P:\n");
                        scanf("%d",&p);
                        printf("Digite o Valor de Q:\n");
                        scanf("%d",&q);
                        printf("-----------------------------\n");
                        system("cls");

                        system("cls");
                        printf("\n-----------------------------\n");

                        if (p == 1 && q == 1)
                        {
                            result=1;

                        }
                        else if (p == 1 && q == 0)
                        {
                            result=0;

                        }
                        else if (p == 0 && q == 1)
                        {
                            result=1;

                        }
                        else
                        {
                            result = 1;


                        }
                        printf("%d",result);
                        printf("\n-----------------------------\n");
                        system("pause");
                        break;
                    case 7://<->

                        printf("-----------------------------\n");
                        printf("Logica Proposicional\n\n");
                        printf("Digite o Valor de P:\n");
                        scanf("%d",&p);
                        printf("Digite o Valor de Q:\n");
                        scanf("%d",&q);
                        printf("-----------------------------\n");
                        system("cls");

                        system("cls");
                        printf("\n-----------------------------\n");

                        if (p == 1 && q == 1)
                        {
                            result=1;

                        }
                        else if (p == 1 && q == 0)
                        {
                            result=0;

                        }
                        else if (p == 0 && q == 1)
                        {
                            result=0;

                        }
                        else
                        {
                            result=1;

                        }
                        printf("Resultado:%d",result);
                        printf("\n-----------------------------\n");
                        system("pause");
                        system("cls");
                        break;



                    }//fim resultado logica
                }//fim if logica
            }//fim menu logica
            break;
        case 2://somatorio
            while(somatorio != 3)
            {
                textcolor(11);
                printf("   _____                       _             _\n");
                printf("  /  ___|                     | |           (_)\n");
                printf("  %c `--.  ___  _ __ ___   __ _| |_ ___  _ __ _  ___\n",92);
                printf("   `--. \/  _ %c| '_ ` _ %c / _` | __/ _ %c| '__| |/ _ %c\n",92,92,92,92);
                printf("  /%c__/ / (_) | | | | | | (_| | || (_) | |  | | (_)|\n",92);
                printf("  %c____/ %c___/|_| |_| |_|%c__,_|%c__%c___/|_|  |_|%c___/\n",92,92,92,92,92,92);

                menu =0;
                soma = 0;
                m=0;
                n=0;
                s=0;
                printf("\n\n\n\n");
                textcolor(7);
                printf("       ________________________________________\n");
                printf("      |                Somatorio               |\n");
                printf("      |                                        |\n");
                printf("      |   1- Somatorio de j = m -> n (j)       |\n");
                printf("      |   2- Somatorio de j = m -> n (-j)^(j+1)|\n");
                printf("      |                                        |\n");
                printf("      |       Voltar ao menu Principal(3)      |\n");
                printf("      |________________________________________|\n");
                printf("        Digite uma das opcoes acima:");
                scanf("%d",&somatorio);
                printf("-----------------------------\n");
                system("cls");

                if(somatorio != 3 )
                {
                    if(somatorio  == 0)
                    {
                        printf("digite uma opcao valida\n");
                        system("pause");
                        system("cls");
                        break;
                    }
                    system("cls");
                    printf("\n-----------------------------\n");
                    printf("Digite o valor de m:\n");
                    scanf("%d",&m);
                    printf("Digite o valor de n:\n");
                    scanf("%d",&n);
                    printf("\n-----------------------------\n");
                    system("cls");

                    switch(somatorio)
                    {
                    case 1: //algoritmo somatorio simples
                        soma = 0;

                        for(j = m; m <= n; j)
                        {
                            if (m <= 0)
                            {
                                soma = soma + m;
                                j=1;
                                printf("%d \n",m);
                                m = m + j;
                            }
                            else
                            {
                                soma = soma + m;
                                printf("%d \n",m);
                                m = m + j;
                            }
                        }
                        printf("\n-----------------------------\n");
                        printf("%d", soma);
                        printf("\n-----------------------------\n\n");
                        system("pause");
                        system("cls");
                        break;

                    case 2:

                        j =m;

                        printf("\n-----------------------------\n\n");
                        for(j = m; j <= n; j++)
                        {
                            soma = soma + pow(-j,j+1);
                            s= soma+s;
                            printf("%d\n",soma);
                        }
                        printf("\n-----------------------------\n");
                        printf("%d", s);
                        printf("\n-----------------------------\n\n");
                        system("pause");
                        system("cls");

                        break;
                    }//fim resultado somatorio

                }//fim if somatorio


            }//fim menu somatorio

            break;
        case 3://matriz
            while(matriz != 5)
            {
                textcolor(11);
                printf("      ___  ___      _        _\n");
                printf("      |  %c/  |     | |      (_)\n",92);
                printf("      | .  . | __ _| |_ _ __ _ _______  ___\n");
                printf("      | |%c/| |/ _` | __| '__| |_  / _ %c/ __|\n",92,92);
                printf("      | |  | | (_| | |_| |  | |/ /  __/%c__ %c\n",92,92);
                printf("      %c_|  |_/%c__,_|%c__|_|  |_/___%c___||___/\n",92,92,92,92);


                textcolor(7);
                printf("\n\n\n\n\n");
                printf("          ____________________________\n");
                printf("         |          Matrizes          |\n");
                printf("         |____________________________|\n");
                printf("         |1- Determinante             |\n");
                printf("         |2- Soma                     |\n");
                printf("         |3- Subtracao                |\n");
                printf("         |4- Produto                  |\n");
                printf("         |                            |\n");
                printf("         | Voltar ao menu anterior(5) |\n");
                printf("         |____________________________|\n");
                printf("          Digite uma das opcoes acima:");
                scanf("%d",&matriz);
                system("cls");

                if(matriz != 5)
                {
                    switch(matriz)
                    {
                    case 1://Determinante
                        printf("Digite o valor para a11 : ");
                        scanf("%d",&a11);
                        printf("Digite o valor para a12 : ");
                        scanf("%d",&a12);
                        printf("Digite o valor para a21 : ");
                        scanf("%d",&a21);
                        printf("Digite o valor para a22 : ");
                        scanf("%d",&a22);
                        det = (a11*a22) - (a12*a21);

                        system("cls");

                        printf("Matriz 2x2\n");
                        printf("(%d  %d)\n",a11,a12);
                        printf("(%d  %d)\n",a21,a22);

                        printf("Determinante = %d x %d - %d x %d\n",a11,a22,a12,a21);
                        printf("Resultado = %d\n",det);
                        system("pause");
                        system("cls");
                        break;

                    case 2 ://soma
                        printf("Digite o valor para a11 : ");
                        scanf("%d",&a11);
                        printf("Digite o valor para a12 : ");
                        scanf("%d",&a12);
                        printf("Digite o valor para a21 : ");
                        scanf("%d",&a21);
                        printf("Digite o valor para a22 : ");
                        scanf("%d",&a22);
                        system("cls");

                        printf("Digite o valor para b11 : ");
                        scanf("%d",&b11);
                        printf("Digite o valor para b12 : ");
                        scanf("%d",&b12);
                        printf("Digite o valor para b21 : ");
                        scanf("%d",&b21);
                        printf("Digite o valor para b22 : ");
                        scanf("%d",&b22);
                        system("cls");

                        c11 = a11 + b11;
                        c12 = a12 + b12;
                        c21 = a21 + b21;
                        c22 = a22 + b22;

                        printf("Matriz A\n");
                        printf("(%d  %d)\n",a11,a12);
                        printf("(%d  %d)\n",a21,a22);
                        printf("\n");
                        printf("Matriz B\n");
                        printf("(%d  %d)\n",b11,b12);
                        printf("(%d  %d)\n",b21,b22);
                        printf("\n");
                        printf("Soma das Matrizes\n");
                        printf("(%d  %d)\n",c11,c12);
                        printf("(%d  %d)\n",c21,c22);
                        system("pause");
                        system("cls");
                        break;
                    case 3 : //subtracao

                        printf("Digite o valor para a11 : ");
                        scanf("%d",&a11);
                        printf("Digite o valor para a12 : ");
                        scanf("%d",&a12);
                        printf("Digite o valor para a21 : ");
                        scanf("%d",&a21);
                        printf("Digite o valor para a22 : ");
                        scanf("%d",&a22);
                        system("cls");

                        printf("Digite o valor para b11 : ");
                        scanf("%d",&b11);
                        printf("Digite o valor para b12 : ");
                        scanf("%d",&b12);
                        printf("Digite o valor para b21 : ");
                        scanf("%d",&b21);
                        printf("Digite o valor para b22 : ");
                        scanf("%d",&b22);
                        system("cls");

                        c11 = a11 - b11;
                        c12 = a12 - b12;
                        c21 = a21 - b21;
                        c22 = a22 - b22;



                        printf("Matriz A\n");
                        printf("(%d  %d)\n",a11,a12);
                        printf("(%d  %d)\n",a21,a22);
                        printf("\n");
                        printf("Matriz B\n");
                        printf("(%d  %d)\n",b11,b12);
                        printf("(%d  %d)\n",b21,b22);
                        printf("\n");
                        printf("Subtracao das Matrizes\n");
                        printf("(%d  %d)\n",c11,c12);
                        printf("(%d  %d)\n",c21,c22);
                        system("pause");
                        system("cls");
                        break;
                    case 4: //Produto


                        printf("Digite o valor para a11 : ");
                        scanf("%d",&a11);
                        printf("Digite o valor para a12 : ");
                        scanf("%d",&a12);
                        printf("Digite o valor para a21 : ");
                        scanf("%d",&a21);
                        printf("Digite o valor para a22 : ");
                        scanf("%d",&a22);
                        system("cls");

                        printf("Digite o valor para b11 : ");
                        scanf("%d",&b11);
                        printf("Digite o valor para b12 : ");
                        scanf("%d",&b12);
                        printf("Digite o valor para b21 : ");
                        scanf("%d",&b21);
                        printf("Digite o valor para b22 : ");
                        scanf("%d",&b22);
                        system("cls");

                        c11 = (a11 * b11) + (a12 * b21);
                        c12 = (a11 * b12) + (a12 * b22);
                        c21 = (a21 * b11) + (a22 * b21);
                        c22 = (a21 * b12) + (a22 * b22);


                        printf("Matriz A\n");
                        printf("(%d  %d)\n",a11,a12);
                        printf("(%d  %d)\n",a21,a22);
                        printf("\n");
                        printf("Matriz B\n");
                        printf("(%d  %d)\n",b11,b12);
                        printf("(%d  %d)\n",b21,b22);
                        printf("\n");
                        printf("Produto das Matrizes\n");
                        printf("(%d  %d)\n",c11,c12);
                        printf("(%d  %d)\n",c21,c22);
                        system("pause");
                        system("cls");
                        break;

                    }//fim resultado matriz
                }//fim if matriz
            }//fim menu matriz
            break;
        case 4:
            while(analiseCombinatoria != 4)
            {
                menu =0;
                k=0;
                fatorial=1;
                fat=1;
                arranjo = 1;
                fat2=1;

                textcolor(11);
                printf("          ___              _ _\n");
                printf("         / _ %c            | (_)\n",92);
                printf("        / /_%c %c_ __   __ _| |_ ___  ___\n",92,92);
                printf("        |  _  | '_ %c / _` | | / __|/ _ %c\n",92,92);
                printf("        | | | | | | | (_| | | %c__ %c  __/\n",92,92);
                printf("        %c_| |_/_| |_|%c__,_|_|_|___/%c___|\n",92,92,92);

                textcolor(7);
                printf("\n\n\n\n\n");
                printf("          ____________________________\n");
                printf("         |    Analise Combinatoria    |\n");
                printf("         |____________________________|\n");
                printf("         |1- Permutacao Simples       |\n");
                printf("         |2- Arranjo Simples          |\n");
                printf("         |3- Combinacao Simples       |\n");
                printf("         | Voltar ao Menu Principal(4)|\n");
                printf("         |____________________________|\n");
                printf("          Digite uma das opcoes acima:");
                scanf("%d",&analiseCombinatoria);

                system("cls");

                if(analiseCombinatoria != 4)
                {
                    switch(analiseCombinatoria)
                    {

                    case 1://permutacao simples


                        n=0;
                        j= 10;


                        while(j > 1)
                        {
                            printf("Insira um valor para sua permutacao : ");
                            scanf("%d", &n);
                            j = n;
                            system("cls");
                            if (n > 0)
                            {
                                for(i = 1; n > 1; n--)
                                {
                                    i = i * n;
                                }
                                n= n + 10;
                                printf("Possibilidades: %d\n", i);
                                system("pause");
                                system("cls");
                            }
                            else
                            {
                                printf("O numero tem que ser maior que 0\n");
                                system("pause");
                                system("cls");
                            }


                            break;
                        }
                        break;
                    case 2://Arranjo simples


                        printf("De um valor para n : ");
                        scanf("%d",&n);
                        printf("De um valor para k : ");
                        scanf("%d",&k);

                        system("cls");

                        for( i = n; i > 0; i--)
                        {
                            fatorial = fatorial * i;
                        }
                        printf("O resultado de n e: %d \n",fatorial);

                        for ( a = n-k; a > 0; a--)
                        {
                            fat = fat * a;
                        }

                        printf("O resuldado de (%d - %d)! = %d \n",n,k,fat);

                        printf("\n");


                        for( i = n; i > n-k; i--)
                        {
                            arranjo = arranjo * i;
                        }

                        printf("O resultado de : %d! / (%d - %d)! = %d \n",n,n,k,arranjo);
                        system("pause");
                        system("cls");
                        break;
                    case 3:
                        printf("De um valor para n : ");
                        scanf("%d",&n);
                        printf("De um valor para k : ");
                        scanf("%d",&k);

                        system("cls");

                        for( i = n; i > 0; i--)
                        {
                            fatorial = fatorial * i;
                        }
                        printf("O resultado de n e: %d \n",fatorial);

                        for ( a = n-k; a > 0; a--)
                        {
                            fat = fat * a;
                        }

                        printf("O resuldado de (%d - %d)! = %d \n",n,k,fat);

                        printf("\n");

                        for( i = k; i > 0; i--)
                        {
                            fat2 = fat2 * i;
                        }
                        printf("O resultado de k e: %d \n",fat2);

                        for( i = n; i > n-k; i--)
                        {
                            arranjo = arranjo * i;
                        }

                        combin= arranjo / fat2;
                        printf("O resultado de : %d! / (%d - %d)! * %d! = %d \n",n,n,k,k, combin);
                        system("pause");
                        system("cls");
                        break;
                    }
                }//fim if combinatoria
            }//fim menu combinatoria
            break;
        case 5:
            while(simples!=5)
            {
                textcolor(11);
                printf("          _____ _                 _\n");
                printf("         / ____(_)               | |\n");
                printf("        | (___  _ _ __ ___  _ __ | | ___  ___\n");
                printf("         %c___ %c| | '_ ` _ %c| '_ %c| |/ _ %c/ __|\n",92,92,92,92,92);
                printf("         ____) | | | | | | | |_) | |  __/%c__ %c\n",92,92);
                printf("        |_____/|_|_| |_| |_| .__/|_|%c___||___/\n",92);
                printf("                           | |\n");
                printf("                           |_|\n");

                textcolor(7);
                printf("\n\n\n\n");
                printf("          _______________________________\n");
                printf("         |       Funcoes simples         |\n");
                printf("         |_______________________________|\n");
                printf("         |1- Soma                        |\n");
                printf("         |2- Subtracao                   |\n");
                printf("         |3- Multiplicacao               |\n");
                printf("         |4- Divisao                     |\n");
                printf("         |  Voltar ao menu principal(5)  |\n");
                printf("         |_______________________________|\n");
                printf("          Digite uma das opcoes acima:");
                scanf("%d",&simples);
                system("cls");

                if(simples!=5)
                {
                    switch(simples)
                    {
                    case 1:
                        printf("Digite um numero para a : ");
                        scanf("%d",&a);
                        printf("Digite um numero para b : ");
                        scanf("%d",&b);
                        printf("A soma de a e b = %d\n",a+b);
                        system("pause");
                        system("cls");
                        break;
                    case 2:
                        printf("Digite um numero para a : ");
                        scanf("%d",&a);
                        printf("Digite um numero para b : ");
                        scanf("%d",&b);
                        printf("A subtracao de a e b = %d\n",a-b);
                        system("pause");
                        system("cls");
                        break;
                    case 3:
                        printf("Digite um numero para a : ");
                        scanf("%d",&a);
                        printf("Digite um numero para b : ");
                        scanf("%d",&b);
                        printf("O produto de a e b = %d\n",a*b);
                        system("pause");
                        system("cls");
                        break;
                    case 4:


                        printf("Digite um numero para a : ");
                        scanf("%d",&a);
                        printf("Digite um numero para b : ");
                        scanf("%d",&b);
                        if (b > 0)
                        {
                            printf("A divisao de a e b = %d\n",a/b);
                        }
                        else printf("Nao da para dividir nenhum numero por 0\n");
                        system("pause");
                        system ("cls");
                        break;


                    }//fim switch resultados funcoes simples
                }//fim if funcoes simples

            }//fim while funcoes simples
            break;
            // break;
        }//fim switch menu

    }//fim while menu principal

}//fim main





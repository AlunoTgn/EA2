/***********************************************************
1)Ler um número e imprimir se ele é par ou ímpar.
************************************************************/

/*
#include <stdlib.h>
#include <stdio.h>
int main ()
{
    int num;
    printf("digite um numero inteiro: ");
    scanf("%d",&num);
    if(num%2==0)//operador módulo (%)
    {
        printf("Par");
    }
    else
        printf("Ímpar");

    return 0;
}
*/

/**************************************************************
2)Ler um número e imprimir se ele é positivo, negativo ou nulo.
***************************************************************/

/*
#include<stdio.h>
int main ()
{

    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if(x > 0)
    {
        printf("%d e positivo", x);
    }
    else if(x < 0)
    {
        printf("%d e negativo", x);
    }
    else
    {
        printf("%d e nulo", x);
    }

    return 0;
}
*/
 
/************************************************************************************************************************
3)Construir um algoritmo que leia dois valores numéricos inteiros e efetue a adição; caso o resultado seja maior que 10, apresentá-lo.
**************************************************************************************************************************/

/*
#include<stdio.h>
int main()
{

// variaveis
    int x =0;
    int y =0;
    int r =0;

// Entradas
    printf("Digite um numero: ");
    scanf("%i", &x);

    printf("Digite outro numero: ");
    scanf("%i", &y);
// Processamentos
    r = x + y;

    if(r > 10)
    {
        printf("o valor da soma de %d + %d = %d",x,y,r);
    }

// Saidas

    return 0;

}
*/
/*******************************************************************************************************************************
4)Construir um algoritmo que leia dois números e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8; caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
*********************************************************************************************************************************/

/*
#include<stdio.h>
#include<stdlib.h>
int main()
{

    int a, b, soma;
    printf("Insira o valor de A: ");
    scanf("%d", &a);
    printf("Insira o valor de B: ");
    scanf("%d", &b);
    soma = a + b;
    if(soma > 20)
        soma = soma + 8;
    else
        soma = soma - 5;

    printf("Valor resultante: %d\n", soma);

    system("pause");
    return 0;
}
*/

/********************************************************************************************
5)Entrar com um número e imprimir uma das mensagens: é múltiplo de 3 ou não é múltiplo de 3.
*********************************************************************************************/

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int x, result;
    printf("Entre com um numero: ");
    scanf("%d", &x);
    result = x % 3;
    if (result == 0)
    {
        printf("É multiplo de 3\n");
    }
    else
    {
        printf("Não é multiplo de 3\n");
    }

    return 0;
}
*/

/********************************************************************
6)Entrar com um número e informar se ele é divisível por 3 e por 7.
*********************************************************************/

/*
#include <stdio.h>

int main()
{

    int Numero;

    printf("Digite um numero: ");
    scanf("%d",&Numero);
    if(Numero % 3 == 0 && Numero % 7 == 0)
    {
        printf("%d é divisivel por 3 e 7\n",Numero);
    }
    else
    {
        printf("%d nao e divisivel por 3 e 7\n",Numero);
    }


    return 0;
}
*/

/****************************************************************************************************************
7)Entrar com um número e informar se ele é divisível por 10, por 5, por 2 ou se não é divisível por nenhum deles.
*****************************************************************************************************************/

/*
#include <stdio.h>

int main()
{

    int numero;
    printf("Entre com um valor positivo: ");
    scanf("%d", &numero);
    if (numero % 10 == 0 && numero%5 == 0 && numero % 2 == 0)
        printf("O numero eh divisivel por 10, 5 e 2\n");
    else
        printf("O numero nao eh divisivel por nenhum desses 10, 5 e 2\n");

    return 0;
}
*/

/********************************************************************************************************************************
8) A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Fazer um algoritmo que permita entrar com o salário bruto e o valor da prestação e informar se o empréstimo pode ou não ser concedido.
*********************************************************************************************************************************/

/*
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    float salbruto, prestacao, porcent;
    printf("Informe o salario bruto: ");
    scanf("%f",&salbruto);
    printf("Informe o valor da prestacao: ");
    scanf("%f",&prestacao);
    porcent = salbruto * 0.30;
    if (prestacao > porcent)
        printf("\nEmprestimo não pode ser concedido\n");
    else
        printf("\nEmprestimo pode ser concedido");
   
    return 0;
}
*/

/**********************************************************************************************************************************
9)Entrar com o ano de nascimento de uma pessoa e o ano atual. Imprimir a idade da pessoa. Não se esqueça de verificar se o ano de nascimento é um ano válido.
***********************************************************************************************************************************/

/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int idade, ano_atual, ano_nasc;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Insira em que ano estamos: ");
    scanf("%d", &ano_atual);
    ano_nasc = ano_atual - idade;
    printf("Voce nasceu em: %d", ano_nasc);
    printf("\n");
   

    return 0;
}
*/

/**********************************************************************************************************************************
10)Escrever um algoritmo que leia um peso na Terra e o número de um planeta e imprima o valor do seu peso neste planeta. A relação de planetas é dada a seguir juntamente com o valor das gravidades relativas à Terra:
Para o peso do planeta (Pplaneta) use a fórmula : Pplaneta = (Pterra / 10) * gravidade;
# gravidade relativa Planeta
1 0,37 Mercúrio
2 0,88 Vênus
3 0,38 Marte
4 2,64 Jupiter
5 1,15 Saturno
6 1,17 Urano
***********************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, resultado;
    int escolha;

    printf("Entre com um valor imprimindo o mesmo para saber seu peso aqui na terra : ");
    scanf("%f",&peso);
    system("cls");
    printf("Escolha algum dos planetas: \n0.37 -1- Mercurio \n0.88 -2- Venus \n0.38 -3- Marte \n2.64 -4- Jupiter \n1.15 -5- Saturno \n1.17 -6- Urano\n");
    scanf("%i",&escolha);
    switch (escolha)
    {
    case 1:
        resultado = peso*0.37;
        printf("O valor do seu peso neste Pplaneta eh  %.2f", resultado);

        break;
    case 2:
        resultado = peso*0.88;
        printf("O valor do seu peso neste Pplaneta eh %.2f",resultado);
        break;
    case 3:
        resultado = peso*0.38;
        printf("O valor do seu peso neste Pplaneta eh %.2f",resultado);
        break;
    case 4:
        resultado = peso*2.64;
        printf("O valor do seu peso neste Pplaneta eh %.2f",resultado);
        break;
    case 5:
        resultado = peso*1.15;
        printf("O valor do seu peso neste Pplaneta eh %.2f",resultado);
        break;
    case 6:
        resultado = peso*1.17;
        printf("O valor do seu peso neste Pplaneta eh %.2f",resultado);
        break;
    default :
        printf("Erro: valor invalido!Digite somente valores de 1 a 6\n");
        system("pause");

         }
}


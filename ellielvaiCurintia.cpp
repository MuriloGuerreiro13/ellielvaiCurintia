1

#include <stdio.h>

int main() {
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("\nSoma: %.2f", n1 + n2);
    printf("\nSubtracao: %.2f", n1 - n2);
    printf("\nMultiplicacao: %.2f", n1 * n2);

    if (n2 != 0) {
        printf("\nDivisao: %.2f", n1 / n2);
    } else {
        printf("\nNao e possivel dividir por zero.");
    }

    return 0;
}

2
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    return 0;
}




3
 #include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}





4 
#include <stdio.h>

int main() {
    int senha;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
    } while (senha != 123);

    printf("Senha correta!\n");
    printf("Acesso liberado!");

    return 0;
}

5 = 
1
2
3
4
5

6 = Maior que 3


7 
#include <stdio.h>

int main() {
    float n1, n2, resultado;
    int opcao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("\nEscolha uma operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = n1 + n2;
            printf("Resultado: %.2f", resultado);
            break;

        case 2:
            resultado = n1 - n2;
            printf("Resultado: %.2f", resultado);
            break;

        case 3:
            resultado = n1 * n2;
            printf("Resultado: %.2f", resultado);
            break;

        case 4:
            if (n2 != 0) {
                resultado = n1 / n2;
                printf("Resultado: %.2f", resultado);
            } else {
                printf("Nao e possivel dividir por zero.");
            }
            break;

        default:
            printf("Opcao invalida!");
    }

    return 0;
}

8
#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}


9 
#include <stdio.h>

int main() {
    int i = 1;
    int soma = 0;

    while (i <= 5) {
        soma = soma + i;
        i++;
    }

    printf("Resultado da soma: %d", soma);

    return 0;
}








10
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

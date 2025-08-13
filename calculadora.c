#include <stdio.h>
#include <ctype.h>

int main()
{
    char sexo;
    int idade, atividade, GETD;
    float peso, idr, tmb, altura;
    
    printf("⋆˙⟡ --- Calculadora de gasto calórico --- ⋆˙⟡");
    
    printf("\nInforme seu sexo (Insira M para Masculino e F para Feminino): ");
    scanf(" %c", &sexo);
    
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    
    printf("Informe seu peso atual (em kg): ");
    scanf("%f", &peso);
    
    printf("Informe sua altura (em cm): ");
    scanf("%f", &altura);
    
    if(tolower(sexo) == 'f') {
        tmb = (10 * peso) + (6.25 * altura) - (5 * idade) - 161;
        printf("\nSua TMB é de %.f calorias por dia!\n\n", tmb);
    } else if(tolower(sexo) == 'm') {
        tmb = (10 * peso) + (6.25 * altura) - (5 * idade) +5;
        printf("\nSua TMB é de %.f calorias por dia!\n\n", tmb);
    } else {
        printf("\nERRO: Sexo invalido inserido. Por favor, reinicie o programa e insira 'M' ou 'F'.\n\n");
    }

    printf("Perfeito! Agora vamos calcular seu Gasto Energético Total Diário (GETD).\n");
    printf(" ────୨ৎ──── Informe seu nível de atividade ────୨ৎ────\n");
    printf("\n\t     1. Sedentário.\n\t     2. Levemente ativo.\n\t     3. Ativo\n\t     4. Muito ativo\n\n🍵︎ Insira uma das opções acima: ");
    scanf("%d", &atividade);
    
    if(atividade == 1) {
        GETD = (tmb * 1.2);
        printf("\n⇢ Seu GETD é de %.d calorias/dia!", GETD);
    } else if (atividade == 2) {
        GETD = (tmb * 1.375);
        printf("\n⇢ Seu GETD é de %.d calorias/dia!", GETD);
    } else if (atividade == 3) {
        GETD = (tmb * 1.55);
        printf("\n⇢ Seu GETD é de %.d calorias/dia!", GETD);
    } else if (atividade == 4) {
        GETD = (tmb * 1.725);
        printf("\n⇢ Seu GETD é de %.d calorias/dia!", GETD);
    } else {
        printf("\n⇢ ERRO: Opção de atividade invalida.");
    }
        
    return 0;
}

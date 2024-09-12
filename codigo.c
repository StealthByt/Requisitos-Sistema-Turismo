#include <stdio.h>

int main() {
    char requisito[100];
    int impacto, viabilidade;

    // Entrada do requisito pelo usuário
    printf("Digite o nome do requisito: ");
    fgets(requisito, sizeof(requisito), stdin);

    // Entrada de impacto e viabilidade pelo usuário
    printf("Avalie o impacto no usuário final (1 a 5): ");
    scanf("%d", &impacto);
    
    printf("Avalie a viabilidade técnica (1 a 5): ");
    scanf("%d", &viabilidade);

    // Classificação do requisito
    if (impacto >= 4 && viabilidade >= 4) {
        printf("Requisito '%s' tem prioridade ALTA.\n", requisito);
    } else if (impacto >= 3 && viabilidade >= 3) {
        printf("Requisito '%s' tem prioridade MÉDIA.\n", requisito);
    } else {
        printf("Requisito '%s' tem prioridade BAIXA.\n", requisito);
    }

    return 0;
}

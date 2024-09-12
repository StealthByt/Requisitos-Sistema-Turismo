#include <stdio.h>
#include <string.h>

int main() {
    char requisito[100] = "Manter Perfis de Acesso";
    int impacto, viabilidade;

    printf("Requisito: %s\n", requisito);
    printf("Avalie o impacto no usuário final (1 a 5): ");
    scanf("%d", &impacto);  // Entrada do impacto

    printf("Avalie a viabilidade técnica (1 a 5): ");
    scanf("%d", &viabilidade);  // Entrada da viabilidade

    // Classificação com base nas entradas
    if (impacto >= 4 && viabilidade >= 4) {
        printf("Requisito '%s' tem prioridade ALTA.\n", requisito);
    } else if (impacto >= 3 && viabilidade >= 3) {
        printf("Requisito '%s' tem prioridade MÉDIA.\n", requisito);
    } else {
        printf("Requisito '%s' tem prioridade BAIXA.\n", requisito);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int opcao;
    int minutos;
    float calorias;

    printf("========================================\n");
    printf("       SISTEMA DE ROTINA DE TREINOS      \n");
    printf("========================================\n");
    printf("Controle seus treinos e estime as calorias queimadas.\n");
    printf("Bem-vindo(a)! Vamos cuidar da sua saude!\n");

    do {
        printf("\n===== ROTINA DE ATIVIDADE FISICA =====\n");
        printf("1 - Registrar treino\n");
        printf("2 - Consultar treinos\n");
        printf("3 - Calcular calorias queimadas\n");
        printf("4 - Exibir relatorio de atividades\n");
        printf("0 - Encerrar programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nTreino registrado com sucesso!\n");
                break;

            case 2:
                printf("\nConsulta de treinos selecionada.\n");
                printf("Em breve, voce podera visualizar seus treinos registrados.\n");
                break;

            case 3:
                printf("\nDigite a quantidade de minutos de treino: ");
                scanf("%d", &minutos);

                if (minutos > 0) {
                    calorias = minutos * 5.0;
                    printf("Tempo de treino: %d minutos\n", minutos);
                    printf("Calorias estimadas: %.2f kcal\n", calorias);
                } else if (minutos == 0) {
                    printf("Nenhum minuto de treino informado.\n");
                } else {
                    printf("Erro: informe um tempo positivo.\n");
                }
                break;

            case 4:
                printf("\n===== RELATORIO DE ATIVIDADES =====\n");
                printf("A estimativa utilizada e de 5 kcal por minuto.\n");
                printf("Continue acompanhando sua rotina de exercicios!\n");
                break;

            case 0:
                printf("\nEncerrando o sistema. Ate a proxima!\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
                printf("Escolha uma opcao disponivel no menu.\n");
                printf("Tente novamente.\n");
                break;
        }

    } while (opcao != 0);

    printf("Obrigado por utilizar o Sistema de Rotina de Treinos!\n");

    return 0;
}
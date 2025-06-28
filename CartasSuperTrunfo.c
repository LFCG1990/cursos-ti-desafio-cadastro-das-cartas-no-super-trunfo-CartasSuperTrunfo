#include <stdio.h>

int main(){
    char estado1[20];
    char codigo1[5];
    char cidade1[20];
    int populacao1;
    int pontosturistico1;
    float area1;
    float pib1;

    char estado2[20];
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    int pontosturistico2;
    float area2;
    float pib2;
    

    printf("Digite o Estado \n");
    scanf("%s", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B02): \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite o número de habitantes \n");
    scanf("%d", &populacao1);

    printf("Digite a Área em km² \n");
    scanf("%f", &area1);

    printf("Digite o PIP \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos \n");
    scanf("%d", &pontosturistico1);

    printf("Digite o Estado \n");
    scanf("%s", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B02): \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o número de habitantes \n");
    scanf("%d", &populacao2);

    printf("Digite a Área em km² \n");
    scanf("%f", &area2);

    printf("Digite o PIP \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos \n");
    scanf("%d", &pontosturistico2);




    printf("Estado: %s\n",estado1);
    printf("Codigo: %s\n",codigo1);
    printf("Nome da Cidade: %s \n",cidade1);
    printf("População: %d \n",populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Números de Pontos Turísticos: %d \n", pontosturistico1);

    printf("Estado: %s\n",estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Nome da Cidade: %s \n",cidade2);
    printf("População: %d \n",populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Números de Pontos Turísticos: %d \n", pontosturistico2);


    return 0;
}

#include <stdio.h>

int main(){

    unsigned long int populacao;
    int pontos_turisticos;
    float PIB, area, densidade_populacional, PIB_Capita, superpoder, inv_densidade_populacional;
    char estado[1], nome_cidade[30], codigo_cidade[3];

    unsigned long int populacao_2;
    int pontos_turisticos_2;
    float PIB_2, area_2, densidade_populacional_2, PIB_Capita_2, superpoder_2, inv_densidade_populacional_2;
    char estado_2[1], nome_cidade_2[30], codigo_cidade_2[3];

    //Carta 1

    printf("De acordo com a primeira carta?\n");
    printf("\n");

    printf("Digite seu Estado: ");
    scanf("%s", estado);

    printf("Digite seu código: ");
    scanf("%s", codigo_cidade);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("Digite sua populacao: ");
    scanf("%d", &populacao);

    printf("Digite sua area: ");
    scanf("%f", &area);

    printf("Digite seu PIB em bilhões: ");
    scanf("%f", &PIB);

    PIB = (float) PIB;

    densidade_populacional = (float) populacao / area;
    PIB_Capita = (PIB * 1000000000)  / populacao;
    inv_densidade_populacional = 1 / densidade_populacional;
    

    printf("Digite quantos pontos turísticos tem:");
    scanf("%d", &pontos_turisticos);

    printf("\n");

    superpoder = populacao + area + PIB + pontos_turisticos + PIB_Capita + inv_densidade_populacional;

    printf("Carta 1:\n");
    printf("\n");
    
    printf("Estado: %.1s \n", estado);
    printf("Código: %.3s \n", codigo_cidade);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Área: %.1f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional);
    printf("PIB per Capita: %.2f reais \n", PIB_Capita);
    printf("Superpoder: %.2f \n", superpoder);

    //Carta 2
    printf("\n");
    printf("De acordo com a segunda carta?\n");
    printf("\n");

    printf("Digite seu Estado: ");
    scanf("%s", estado_2);

    printf("Digite seu código: ");
    scanf("%s", codigo_cidade_2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade_2);

    printf("Digite sua populacao: ");
    scanf("%d", &populacao_2);

    printf("Digite sua area: ");
    scanf("%f", &area_2);

    printf("Digite seu PIB em bilhões: ");
    scanf("%f", &PIB_2);

    PIB_2 = (float) PIB_2;
    
    PIB_Capita_2 = (PIB_2 * 1000000000)  / populacao_2;

    densidade_populacional_2 = (float) populacao_2 / area_2;
    inv_densidade_populacional_2 = 1 / densidade_populacional_2;
    

    printf("Digite quantos pontos turísticos tem:");
    scanf("%d", &pontos_turisticos_2);
    printf("\n");

    superpoder_2 = (float) populacao_2 + area_2 + PIB_2 + pontos_turisticos_2 + PIB_Capita_2 + inv_densidade_populacional_2;

    printf("Carta 2:\n");
    printf("\n");
    
    printf("Estado: %.1s \n", estado_2);
    printf("Código: %.3s \n", codigo_cidade_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Área: %.1f Km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", PIB_2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional_2);
    printf("PIB per Capita: %.2f reais \n", PIB_Capita_2);
    printf("Superpoder: %.2f \n", superpoder_2);
    
    printf("\n");
    printf("Comparação das Cartas: \n");
    printf("\n");
    printf("Carta 1 = 1\n");
    printf("Carta 2 = 0\n");
    printf("\n");

    printf("População: %d\n", (populacao > populacao_2));
    printf("Área: %d\n", (area > area_2));
    printf("PIB: %d\n", (PIB > PIB_2));
    printf("Pontos Turísticos: %d\n", (pontos_turisticos > pontos_turisticos_2));
    printf("Densidade Populacional: %d\n", (densidade_populacional < densidade_populacional));
    printf("PIB per Capita: %d\n", (PIB_Capita > PIB_Capita_2));
    printf("Superpoder: %d\n", (superpoder > superpoder_2));
    
}
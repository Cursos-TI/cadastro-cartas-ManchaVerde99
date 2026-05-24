#include <stdio.h>

int main(){

        /* Carta 1 */


    char estado1[3];
    char codigo1[6];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontoturisticos1;

    /* Carta 2 */

             
                char estado2[3];
                char codigo2[6];
                char cidade2[50];
                int populacao2;
                float area2;
                float pib2;
                int pontoturisticos2;

              /* Cadastro carta 1 */


         printf("\nCadastro da carta N1\n");

                        printf("Estado (A a H): ");
                        scanf("%2s", &estado1);         

                        printf("Digite o codigo da carta (Ex: SP01):");
                        scanf("%5s", codigo1);

                        printf("Nome da sua Cidade:");
                        scanf(" %[^\n]", cidade1);

                        printf("População: ");
                            scanf("%d", &populacao1);

                        printf("Area (km2): ");
                            scanf("%f", &area1);

                        printf("PIB (Em bilhoes): ");
                            scanf("%f", &pib1);
                            
                        printf("Numero de pontos Turisticos: ");
                            scanf("%d", &pontoturisticos1);



                 /* Cadastro carta 2, apenas alterando de estado1 para estado2, pib1 para pib2 */


                   printf("\nCadastro da carta N2\n");

                        printf("Estado (A a H): ");
                        scanf("%2s", &estado2);         

                        printf("Digite o codigo da carta (Ex: SP02):");
                        scanf("%5s", codigo2);

                        printf("Nome da sua Cidade:");
                        scanf(" %[^\n]", cidade2);

                        printf("População: ");
                            scanf("%d", &populacao2);

                        printf("Area (km2): ");
                            scanf("%f", &area2);

                        printf("PIB (Em bilhoes): ");
                            scanf("%f", &pib2);
                            
                        printf("Numero de pontos Turisticos: ");
                            scanf("%d", &pontoturisticos2);


                    /* Exibição de dados armazenados */

    

                printf("\n====Carta 1====\n");
                printf("Estado: %s\n", estado1);
                printf("Codigo: %s\n", codigo1);
                printf("Nome da Cidade: %s\n", cidade1);
                printf("População: %d\n", populacao1);
                printf("Area: %.2f\n", area1);
                printf("PIB: %.2f bilhoes de reais\n", pib1);
                printf("Nuemto de pontos Turisticos: %d\n", pontoturisticos1);

                   printf("\n====Carta 2====\n");
                    printf("Estado: %s\n", estado2);
                    printf("Codigo: %s\n", codigo2);
                    printf("Nome da Cidade: %s\n", cidade2);
                    printf("População: %d\n", populacao2);
                    printf("Area: %.2f\n", area2);
                    printf("PIB: %.2f bilhoes de reais\n", pib2);
                    printf("Nuemto de pontos Turisticos: %d\n", pontoturisticos2);

                    return 0;


}


//Carta 1:
//Estado: SP
//Código: A01
//Nome da Cidade: São Paulo
//População: 12325000
//Área: 1521.11 km²
//PIB: 699.28 bilhões de reais
//Número de Pontos Turísticos: 50

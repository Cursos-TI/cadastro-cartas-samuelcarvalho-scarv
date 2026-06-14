#include <stdio.h>

// Vamos iniciar o desenvolvimento de um jogo super trunfo simples.
// O objetivo inicial é somente coletar informações inseridas pelo usuário, armazená-las em variáveis e exibir na tela.
// Daremos início apresentando na tela uma breve explicação do que será pedido e coletando as informações.

int main() {

printf("\nBem vindo ao jogo SUPER TRUNFO!\n");
printf("Nosso jogo baseia-se na criação e comparação de cartas, onde cada uma possui características únicas.\n");
printf("Para essa versão inicial usaremos como exemplo cartas de estados e cidades brasileiras.\n");
printf("Para iniciar, vamos comecar criando as suas cartas! Por favor, preencha as informações solicitadas abaixo.\n");

 //Declarando as variáveis para armazenar as informações da primeria carta.

    char estado ;
    char codigocarta [4];
    char nomecidade [20];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

  //Coletando as entradas do usuário para a primeira carta.

printf("\nUtilize uma letra de 'A' a 'H' para representar o ESTADO da sua carta: \n");
scanf("%c", &estado);

printf("Utilize um código simples de 3 dígitos para registrar sua carta iniciando com a letra escolhida anteriormente (exemplo: A01, B12 etc): \n");
scanf("%s", codigocarta);

printf("Escolha o nome da cidade: \n");
scanf("%s", nomecidade);

printf("Informe o número de habitantes da cidade (somente números): \n");
scanf("%d", &populacao);

printf("Insira a área da cidade em km²: \n");
scanf("%f", &area);

printf("Insira o valor do PIB da cidade em bilhões de reais: \n");
scanf("%f", &pib);

printf("Insira a quantidade de pontos turísticos da cidade: \n");
scanf("%d", &pontosturisticos);

  // Aqui vai parecer redundância mas como ainda não sei como duplicar tudo sem repetir, vamos copiar o código diferenciando nomenclatura das variáveis somente.

printf("\nAgora vamos coletar os dados da segunda carta! Por favor, preencha as informações solicitadas abaixo.\n");

  //Declarando as variáveis para armazenar as informações da segunda carta.

char estado2;
char codigocarta2 [4];
char nomecidade2 [20];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;

  //Coletando as entradas do usuário para a segunda carta.

printf("\nUtilize uma letra de 'A' a 'h' para representar o ESTADO da sua carta: \n");
scanf(" %c", &estado2);

printf("Utilize um código simples de 3 dígitos para registrar sua carta iniciando com a letra escolhida anteriormente (exemplo: A01, B12 etc): \n");
scanf("%s", codigocarta2);

printf("Escolha o nome da cidade: \n");
scanf("%s", nomecidade2);

printf("Informe o número de habitantes da cidade (somente números): \n");
scanf("%d", &populacao2);

printf("Insira a área da cidade em km²: \n");
scanf("%f", &area2);

printf("Insira o valor do PIB da cidade em bilhões de reais: \n");
scanf("%f", &pib2);

printf("Insira a quantidade de pontos turísticos da cidade: \n");
scanf("%d", &pontosturisticos2);

  // Agora vamos exibir na tela as informções das cartas criadas pelo usuário. 

printf("\nSuas cartas foram criadas!\n");

printf("\nCarta 1:\n");

printf("Estado: %c\n",estado);
printf("Código da carta: %s\n", codigocarta);
printf("Nome da cidade: %s\n", nomecidade);
printf("População: %d\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f bilhões de reais\n", pib);
printf("Pontos turísticos: %d\n", pontosturisticos);

printf("\nCarta 2:\n");

printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigocarta2);
printf("Nome da cidade: %s\n", nomecidade2);
printf("População: %d pessoas\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos turísticos: %d\n", pontosturisticos2);



return 0;
} 

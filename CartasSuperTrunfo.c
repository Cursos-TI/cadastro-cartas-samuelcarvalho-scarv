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

  // Área para entrada de dados

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

  // Área para exibição dos dados da cidade

return 0;
} 

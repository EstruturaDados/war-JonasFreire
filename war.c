// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
//        
// ============================================================================
//
// OBJETIVOS:
// - Modularizar completamente o código em funções especializadas.
// - Implementar um sistema de missões para um jogador.
// - Criar uma função para verificar se a missão foi cumprida.
// - Utilizar passagem por referência (ponteiros) para modificar dados e
//   passagem por valor/referência constante (const) para apenas ler.
// - Foco em: Design de software, modularização, const correctness, lógica de jogo.
//
// ============================================================================

// Inclusão das bibliotecas padrão necessárias para entrada/saída, alocação de memória, manipulação de strings e tempo.
#include<stdio.h>
#include<string.h>

// --- Constantes Globais ---
// Definem valores fixos para o número de territórios, missões e tamanho máximo de strings, facilitando a manutenção.
#define MAX_TERRITORIOS 5// Define o número máximo de produtos


// --- Estrutura de Dados ---
// Define a estrutura para um território, contendo seu nome, a cor do exército que o domina e o número de tropas.
struct Territorios{
    char nome[30];
    char cor_Exercito[10];
    int tropas;
};

// --- Protótipos das Funções ---
// Declarações antecipadas de todas as funções que serão usadas no programa, organizadas por categoria.
// Funções de setup e gerenciamento de memória:
void limpaBufferEntrada() {
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

// --- Função Principal (main) ---
int main() {

// Função principal que orquestra o fluxo do jogo, chamando as outras funções em ordem.
struct Territorios continentes[MAX_TERRITORIOS];
int i;

//Loop para coletar os dados dos 5 territórios
for (i = 0;i < MAX_TERRITORIOS; i++) {
    printf("=================================\n");
    printf("Vamos cadastrar os 5 territorios iniciais do nosso mundo.\n");
    printf("--- Cadastrando Territorio %d ---\n", i + 1);

    printf("Nome do Territorio: ");
    scanf("%[^\n]", continentes[i].nome);
        limpaBufferEntrada();

    printf("Cor do Exercito (ex: Azul, Verde): ");
    scanf("%[^\n]", continentes[i].cor_Exercito);
        limpaBufferEntrada();

    printf("Numero de Tropas: ");
    scanf("%d", &continentes[i].tropas);
        limpaBufferEntrada();

    printf("\n");
}

// Exibir a lista de territórios
printf("--- Territorios Cadastrados ---\n");
for (i = 0; i < MAX_TERRITORIOS; i++) {
    printf("Territorio %d:\n", i + 1);
    printf("Nome: %s\n", continentes[i].nome);
    printf("Cor do Exercito: %s\n", continentes[i].cor_Exercito);
    printf("Numero de Tropas: %d\n", continentes[i].tropas);
}
    
    return 0;
}
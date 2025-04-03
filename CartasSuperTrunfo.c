#include <stdio.h>

//Etrutura para armazenar os dados de uma carta
struct CartaSuperTrunfo {
    char estado;       //Letra de 'A' a 'H'
    char codigo[4];    //codigo da carta (ex: "A01")
    char nomeCidade[50];    //Nome da cidade
    int população;      // Numero de Habitantes
    float area;         //Área em km²
    float pib;         //PIB da cidade
    int pontosTuristicos;    //Numeros de pontos turísticos
    };
//Função para cadastrar uma carta 
void cadastrarCarta(struct CartaSuperTrunfo *carta){
    printf("\n=== Cadastro da Carta ===\n ");
    
    printf("\ninforme a letra do estado (A-H):");
    scanf("%c", &carta->estado);

    printf("\nInforme o código da carta (ex: A01):");
    scanf("%s", carta->codigo);

    printf("\nInforme o nome da cidade:");
    scanf(" %[^\n]", carta->nomeCidade);

    printf("\nInforme a população de cidade:");
    scanf("%d", &carta->população);

    printf("\nInforme a área da cidade (km²): ");
    scanf("%f", &carta->area);

    printf("\nInforme o PIB da cidade: ");
    scanf("%f", &carta->pib);

    printf("\ninforme o numero de ponto turisticos:");
    scanf("%d", &carta->pontosTuristicos);

}
//Função para exibir os dados de uma carta
void exibirCarta(struct CartaSuperTrunfo carta){
    printf("\n====== Carta Super Trunfo=====\n");
    printf("Estado: %c\n", carta.estado);
    printf("Codigo: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.nomeCidade);   
    printf("População: %d habitantes\n", carta.população);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões\n",carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("==============================\n");
      
    
}

int main(){
    struct CartaSuperTrunfo carta1, carta2;

    printf("\nCadastro da primeira carta:\n");
    cadastrarCarta(&carta1);
    
    printf("\nCadastro da segunada carta:\n");
    cadastrarCarta(&carta2);

    printf("\nCartas cadastrados:\n");
    exibirCarta(carta1);
    exibirCarta(carta2);

    

    return 0;
}


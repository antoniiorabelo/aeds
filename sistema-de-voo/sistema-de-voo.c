#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> // Biblioteca para manipulação de datas e horários

// endereço que vai ser cadastrado
<<<<<<< HEAD
typedef struct{
char rua[501];
char numero[11];
char bairro[101];
char cidade[101];
char pais[101];
} endereco;

// data
typedef struct{
char dia[11]; // dia/mes/ano
char hora[6]; // horas/minutos
} data;

// variavel para cadastro dos passageiros
typedef struct {
char codigo_passageiro[5];
char nome[201];
endereco CadastroEndereco;
int fidelidade; // vai ser 1 para sim ou 2 para não
int pontos_fidelidade;
} dados_passageiros;

// variavel para cadastro da tripulação
typedef struct{
char codigo_tripulacao[5];
char nome[201];
char endereco[501];
char telefone[14];
int cargo; // vai ser 1 para piloto, 2 para copiloto ou 3 para comissário
} dados_tripulacao;

// variavel para cadastro do voo
typedef struct{
char codigo_voo[5];
data cadastroData;
char origem[201];
char destino[201];
char codigo_aviao[5];
char codigo_piloto[5];
char codigo_copiloto[5];
char codigo_comissario[5];
int status; // 1 para ativo ou 2 para inativo
int tarifa;
} dados_voo;

// variavel para cadastro de assento
typedef struct{
int numero_assento;
char codigo_voo[5];
int status; // 1 para ativo ou 2 para inativo
} dados_assento;

// variavel para cadastro de reserva
typedef struct {
char codigo_voo[5];
int numero_assento;
char codigo_passageiro[5];
} dados_reserva;

// procedimento para mostrar as opções de cadastramento
void paineldecadastramento(){
printf("Digite 1 para cadastrar passageiros.\n"
"Digite 2 para cadastrar a tripulacao.\n"
"Digite 3 para cadastrar o voo.\n"
"Digite 4 para cadastrar os assentos.\n"
"Digite 5 para cadastrar a reserva.\n"
"Digite 0 para encerrar o cadastramento.\n");
}

// procedimento para cadastrar os passageiros
void CadastroPassageiro(dados_passageiros passageiros[500], int i){
printf("\nCadastro do Passageiro\n");

// improvisado, será gerado automaticamente de 0001 e vai aumentando 1
printf("Digite o codigo do passageiro: ");
scanf("%s", passageiros[i].codigo_passageiro);

// Limpar o buffer de entrada após o scanf
getchar();

printf("Digite o nome: ");
fgets(passageiros[i].nome, 201, stdin);
passageiros[i].nome[strcspn(passageiros[i].nome, "\n")] = 0;  // Remover o '\n' que vem com fgets

printf("Digite a rua: ");
fgets(passageiros[i].CadastroEndereco.rua, 501, stdin);
passageiros[i].CadastroEndereco.rua[strcspn(passageiros[i].CadastroEndereco.rua, "\n")] = 0;

printf("Digite o numero: ");
fgets(passageiros[i].CadastroEndereco.numero, 11, stdin);
passageiros[i].CadastroEndereco.numero[strcspn(passageiros[i].CadastroEndereco.numero, "\n")] = 0;

printf("Digite o bairro: ");
fgets(passageiros[i].CadastroEndereco.bairro, 101, stdin);
passageiros[i].CadastroEndereco.bairro[strcspn(passageiros[i].CadastroEndereco.bairro, "\n")] = 0;

printf("Digite a cidade: ");
fgets(passageiros[i].CadastroEndereco.cidade, 101, stdin);
passageiros[i].CadastroEndereco.cidade[strcspn(passageiros[i].CadastroEndereco.cidade, "\n")] = 0;

printf("Digite o pais: ");
fgets(passageiros[i].CadastroEndereco.pais, 101, stdin);
passageiros[i].CadastroEndereco.pais[strcspn(passageiros[i].CadastroEndereco.pais, "\n")] = 0;

// plano fidelidade
printf("Voce faz parte do plano fidelidade? Digite 1 para sim ou 2 para nao: ");
scanf("%d", &passageiros[i].fidelidade);

// pontos fidelidade (precisa implementar a lógica)

printf("\n");
}

// função principal
int main(){
int escolha = 10, i = 0, j=0;

// vetores e seus tamanhos
dados_passageiros passageiros[500];
dados_tripulacao tripulacao[500];
dados_voo voo[500];
dados_assento assento[500];
dados_reserva reserva[500];

// escolher a opção dentro do loop
while(escolha != 0){
paineldecadastramento();
// Solicita a escolha
printf("\nDigite sua escolha: ");
scanf("%d", &escolha);

switch(escolha){
case 1:
CadastroPassageiro(passageiros, i);
i++;
break;

case 2:

case 0:
printf("Encerrando o cadastramento.\n");
break;

default:
printf("Opção inválida.\n");
break;
}
}
=======
typedef struct {
    char rua[501];
    char numero[11];
    char bairro[101];
    char cidade[101];
    char pais[101];
} endereco;

// data
typedef struct {
char dia[11];
char hora[6];
} data;

// variavel para cadastro dos passageiros
typedef struct {
    char codigo_passageiro[5];
    char nome[201];
    endereco CadastroEndereco;
    char telefone[14];
    int fidelidade; // 1 para sim, 2 para não
    int pontos_fidelidade;
} dados_passageiros;

// variavel para cadastro da tripulação
typedef struct {
    char codigo_tripulacao[5];
    char nome[201];
    endereco CadastroEndereco;
    char telefone[14];
    int cargo; // 1: Piloto, 2: Copiloto, 3: Comissário
} dados_tripulacao;

// variavel para cadastro do voo
typedef struct {
    char codigo_voo[5];
    data cadastroData;
    char origem[201];
    char destino[201];
    char codigo_aviao[5];
    char codigo_piloto[5];
    char codigo_copiloto[5];
    int status; // 1: Ativo, 0: Inativo
    float tarifa;
} dados_voo;

// variavel para cadastro de assento
typedef struct {
    int numero_assento;
    char codigo_voo[5];
    int status;
} dados_assento;

// variavel para cadastro de reserva
typedef struct {
    char codigo_voo[5];
    int numero_assento;
    char codigo_passageiro[5];
} dados_reserva;

// Função para exibir o painel de cadastramento
void paineldecadastramento() {
    printf("\n--- Painel de Cadastramento ---\n");
    printf("1 - Cadastrar Passageiros\n");
    printf("2 - Cadastrar Tripulação\n");
    printf("3 - Cadastrar Voo\n");
    printf("4 - Cadastrar Assentos\n");
    printf("5 - Cadastrar Reserva\n");
    printf("0 - Encerrar o Cadastramento\n");
}

// Função para cadastrar passageiros
void CadastroPassageiro(dados_passageiros passageiros[], int i) {
    printf("\n--- Cadastro de Passageiro ---\n");
    printf("Código do passageiro: ");
    scanf("%s", passageiros[i].codigo_passageiro);
    getchar();

    printf("Nome: ");
    fgets(passageiros[i].nome, 201, stdin);
    passageiros[i].nome[strcspn(passageiros[i].nome, "\n")] = 0;

    printf("Rua: ");
    fgets(passageiros[i].CadastroEndereco.rua, 501, stdin);
    passageiros[i].CadastroEndereco.rua[strcspn(passageiros[i].CadastroEndereco.rua, "\n")] = 0;
>>>>>>> 622ebeb610aa9abf868bfdc9fbee9dfd66c6f9f8

    printf("Número: ");
    fgets(passageiros[i].CadastroEndereco.numero, 11, stdin);
    passageiros[i].CadastroEndereco.numero[strcspn(passageiros[i].CadastroEndereco.numero, "\n")] = 0;

    printf("Bairro: ");
    fgets(passageiros[i].CadastroEndereco.bairro, 101, stdin);
    passageiros[i].CadastroEndereco.bairro[strcspn(passageiros[i].CadastroEndereco.bairro, "\n")] = 0;

    printf("Cidade: ");
    fgets(passageiros[i].CadastroEndereco.cidade, 101, stdin);
    passageiros[i].CadastroEndereco.cidade[strcspn(passageiros[i].CadastroEndereco.cidade, "\n")] = 0;

    printf("País: ");
    fgets(passageiros[i].CadastroEndereco.pais, 101, stdin);
    passageiros[i].CadastroEndereco.pais[strcspn(passageiros[i].CadastroEndereco.pais, "\n")] = 0;

    printf("Telefone: ");
    fgets(passageiros[i].telefone, 14, stdin);
    passageiros[i].telefone[strcspn(passageiros[i].telefone, "\n")] = 0;

    printf("Participa do plano fidelidade? (1 - Sim, 2 - Não): ");
    scanf("%d", &passageiros[i].fidelidade);
    getchar();
}
<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// endereço que vai ser cadastrado
typedef struct{
char rua[501];
char numero[11];
char bairro[101];
char cidade[101];
char pais[101];
} endereco;

// data
typedef struct{
char dia[11]; // dia/mes/ano
char hora[6]; // horas/minutos
} data;

// variavel para cadastro dos passageiros
typedef struct {
char codigo_passageiro[5];
char nome[201];
endereco CadastroEndereco;
int fidelidade; // vai ser 1 para sim ou 2 para não
int pontos_fidelidade;
} dados_passageiros;

// variavel para cadastro da tripulação
typedef struct{
char codigo_tripulacao[5];
char nome[201];
char endereco[501];
char telefone[14];
int cargo; // vai ser 1 para piloto, 2 para copiloto ou 3 para comissário
} dados_tripulacao;

// variavel para cadastro do voo
typedef struct{
char codigo_voo[5];
data cadastroData;
char origem[201];
char destino[201];
char codigo_aviao[5];
char codigo_piloto[5];
char codigo_copiloto[5];
char codigo_comissario[5];
int status; // 1 para ativo ou 2 para inativo
int tarifa;
} dados_voo;

// variavel para cadastro de assento
typedef struct{
int numero_assento;
char codigo_voo[5];
int status; // 1 para ativo ou 2 para inativo
} dados_assento;

// variavel para cadastro de reserva
typedef struct {
char codigo_voo[5];
int numero_assento;
char codigo_passageiro[5];
} dados_reserva;

// procedimento para mostrar as opções de cadastramento
void paineldecadastramento(){
printf("Digite 1 para cadastrar passageiros.\n"
"Digite 2 para cadastrar a tripulacao.\n"
"Digite 3 para cadastrar o voo.\n"
"Digite 4 para cadastrar os assentos.\n"
"Digite 5 para cadastrar a reserva.\n"
"Digite 0 para encerrar o cadastramento.\n");
}

// procedimento para cadastrar os passageiros
void CadastroPassageiro(dados_passageiros passageiros[500], int i){
printf("\nCadastro do Passageiro\n");

// improvisado, será gerado automaticamente de 0001 e vai aumentando 1
printf("Digite o codigo do passageiro: ");
scanf("%s", passageiros[i].codigo_passageiro);

// Limpar o buffer de entrada após o scanf
getchar();

printf("Digite o nome: ");
fgets(passageiros[i].nome, 201, stdin);
passageiros[i].nome[strcspn(passageiros[i].nome, "\n")] = 0;  // Remover o '\n' que vem com fgets

printf("Digite a rua: ");
fgets(passageiros[i].CadastroEndereco.rua, 501, stdin);
passageiros[i].CadastroEndereco.rua[strcspn(passageiros[i].CadastroEndereco.rua, "\n")] = 0;

printf("Digite o numero: ");
fgets(passageiros[i].CadastroEndereco.numero, 11, stdin);
passageiros[i].CadastroEndereco.numero[strcspn(passageiros[i].CadastroEndereco.numero, "\n")] = 0;

printf("Digite o bairro: ");
fgets(passageiros[i].CadastroEndereco.bairro, 101, stdin);
passageiros[i].CadastroEndereco.bairro[strcspn(passageiros[i].CadastroEndereco.bairro, "\n")] = 0;

printf("Digite a cidade: ");
fgets(passageiros[i].CadastroEndereco.cidade, 101, stdin);
passageiros[i].CadastroEndereco.cidade[strcspn(passageiros[i].CadastroEndereco.cidade, "\n")] = 0;

printf("Digite o pais: ");
fgets(passageiros[i].CadastroEndereco.pais, 101, stdin);
passageiros[i].CadastroEndereco.pais[strcspn(passageiros[i].CadastroEndereco.pais, "\n")] = 0;

// plano fidelidade
printf("Voce faz parte do plano fidelidade? Digite 1 para sim ou 2 para nao: ");
scanf("%d", &passageiros[i].fidelidade);

// pontos fidelidade (precisa implementar a lógica)

printf("\n");
}

// função principal
int main(){
int escolha = 10, i = 0, j=0;

// vetores e seus tamanhos
dados_passageiros passageiros[500];
dados_tripulacao tripulacao[500];
dados_voo voo[500];
dados_assento assento[500];
dados_reserva reserva[500];

// escolher a opção dentro do loop
while(escolha != 0){
paineldecadastramento();
// Solicita a escolha
printf("\nDigite sua escolha: ");
scanf("%d", &escolha);

switch(escolha){
case 1:
CadastroPassageiro(passageiros, i);
i++;
break;

case 2:

case 0:
printf("Encerrando o cadastramento.\n");
break;

default:
printf("Opção inválida.\n");
break;
}
}

return 0;
=======

// Cadastrar tripulacao
void CadastroTripulacao(dados_tripulacao tripulacao[500], int i) {
printf("\nCadastro Tripulacao\n");
printf("Digite o codigo: ");
scanf("%s", tripulacao[i].codigo_tripulacao);
getchar();

printf("Digite o nome: ");
fgets(tripulacao[i].nome, 201, stdin);
tripulacao[i].nome[strcspn(tripulacao[i].nome, "\n")] = 0;

printf("Digite a rua: ");
fgets(tripulacao[i].CadastroEndereco.rua, 501, stdin);
tripulacao[i].CadastroEndereco.rua[strcspn(tripulacao[i].CadastroEndereco.rua, "\n")] = 0;

printf("Digite o numero: ");
fgets(tripulacao[i].CadastroEndereco.numero, 11, stdin);
tripulacao[i].CadastroEndereco.numero[strcspn(tripulacao[i].CadastroEndereco.numero, "\n")] = 0;

printf("Digite o bairro: ");
fgets(tripulacao[i].CadastroEndereco.bairro, 101, stdin);
tripulacao[i].CadastroEndereco.bairro[strcspn(tripulacao[i].CadastroEndereco.bairro, "\n")] = 0;

printf("Digite a cidade: ");
fgets(tripulacao[i].CadastroEndereco.cidade, 101, stdin);
tripulacao[i].CadastroEndereco.cidade[strcspn(tripulacao[i].CadastroEndereco.cidade, "\n")] = 0;

printf("Digite o pais: ");
fgets(tripulacao[i].CadastroEndereco.pais, 101, stdin);
tripulacao[i].CadastroEndereco.pais[strcspn(tripulacao[i].CadastroEndereco.pais, "\n")] = 0;

printf("Digite o telefone: ");
fgets(tripulacao[i].telefone, 14, stdin);
tripulacao[i].telefone[strcspn(tripulacao[i].telefone, "\n")] = 0;

printf("Digite 1 para piloto, 2 para copiloto ou 3 para comissario: ");
scanf("%d", &tripulacao[i].cargo);
getchar();
}

// Função para cadastrar voo
void CadastroVoo(dados_voo voos[], dados_tripulacao tripulacao[], int num_tripulacao, int i) {
    printf("\n--- Cadastro de Voo ---\n");

    printf("Código do voo: ");
    scanf("%s", voos[i].codigo_voo);
    getchar();

    int data_valida = 0;
    while (!data_valida) {
        printf("Data (DD/MM/AAAA): ");
        fgets(voos[i].cadastroData.dia, 11, stdin);
        voos[i].cadastroData.dia[strcspn(voos[i].cadastroData.dia, "\n")] = 0;

        int dia, mes, ano;
        sscanf(voos[i].cadastroData.dia, "%d/%d/%d", &dia, &mes, &ano);

        if (mes < 1 || mes > 12 || dia < 1 || dia > 31) {
            printf("Data inválida! Formato deve ser DD/MM/AAAA.\n");
            continue;
        }

        struct tm data_viagem = {0};
        data_viagem.tm_year = ano - 1900;
        data_viagem.tm_mon = mes - 1;
        data_viagem.tm_mday = dia;

        time_t t = time(NULL);
        time_t tempo_viagem = mktime(&data_viagem);
        double diferenca_dias = difftime(tempo_viagem, t) / (60 * 60 * 24);

        if (diferenca_dias < 0 || diferenca_dias > 30) {
            printf("A data deve estar no futuro e dentro de 30 dias.\n");
        } else {
            data_valida = 1;
        }
    }

    printf("Hora (HH:MM): ");
    fgets(voos[i].cadastroData.hora, 6, stdin);
    voos[i].cadastroData.hora[strcspn(voos[i].cadastroData.hora, "\n")] = 0;

    printf("Origem: ");
    fgets(voos[i].origem, 201, stdin);
    voos[i].origem[strcspn(voos[i].origem, "\n")] = 0;

    printf("Destino: ");
    fgets(voos[i].destino, 201, stdin);
    voos[i].destino[strcspn(voos[i].destino, "\n")] = 0;

    printf("Código do piloto: ");
    scanf("%s", voos[i].codigo_piloto);
    getchar();

    printf("Código do copiloto: ");
    scanf("%s", voos[i].codigo_copiloto);
    getchar();

    int piloto_valido = 0, copiloto_valido = 0;
    for (int j = 0; j < num_tripulacao; j++) {
        if (strcmp(voos[i].codigo_piloto, tripulacao[j].codigo_tripulacao) == 0 && tripulacao[j].cargo == 1) {
            piloto_valido = 1;
        }
        if (strcmp(voos[i].codigo_copiloto, tripulacao[j].codigo_tripulacao) == 0 && tripulacao[j].cargo == 2) {
            copiloto_valido = 1;
        }
    }

    if (!piloto_valido || !copiloto_valido) {
        printf("Erro: Piloto ou copiloto inválidos!\n");
        voos[i].status = 0;
        return;
    }

    printf("Tarifa do voo: ");
    scanf("%f", &voos[i].tarifa);
    getchar();

    voos[i].status = 1;
    printf("Voo cadastrado com sucesso!\n");
}

// Função principal
int main() {
    int escolha = -1, i_passageiros = 0, i_tripulacao = 0, i_voos = 0;
    dados_passageiros passageiros[500];
    dados_tripulacao tripulacao[500];
    dados_voo voos[500];
    dados_assento assentos[500];
    dados_reserva reservas[500];

    while (escolha != 0) {
        paineldecadastramento();
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);
        getchar();

        switch (escolha) {
            case 1:
                CadastroPassageiro(passageiros, i_passageiros);
                i_passageiros++;
                break;
            case 2:
                CadastroTripulacao(tripulacao, i_tripulacao);
                i_tripulacao++;
                break;
            case 3:
                CadastroVoo(voos, tripulacao, i_tripulacao, i_voos);
                i_voos++;
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    }

    return 0;
>>>>>>> 622ebeb610aa9abf868bfdc9fbee9dfd66c6f9f8
}
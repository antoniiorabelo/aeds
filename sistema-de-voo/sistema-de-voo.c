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
}
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
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// endereço que vai ser cadastrado
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
int fidelidade;
int pontos_fidelidade;
} dados_passageiros;

// variavel para cadastro da tripulação
typedef struct {
char codigo_tripulacao[5];
char nome[201];
endereco CadastroEndereco;
char telefone[14];
int cargo;
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
char codigo_comissario[5];
int status;
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

// Mostrar as opções de cadastramento
void paineldecadastramento() {
printf("Digite 1 para cadastrar passageiros.\n"
"Digite 2 para cadastrar a tripulacao.\n"
"Digite 3 para cadastrar o voo.\n"
"Digite 4 para cadastrar os assentos.\n"
"Digite 5 para cadastrar a reserva.\n"
"Digite 0 para encerrar o cadastramento.\n");
}

// Cadastrar passageiros
void CadastroPassageiro(dados_passageiros passageiros[500], int i) {
printf("\nCadastro do Passageiro\n");
printf("Digite o codigo do passageiro: ");
scanf("%s", passageiros[i].codigo_passageiro);
getchar();

printf("Digite o nome: ");
fgets(passageiros[i].nome, 201, stdin);
passageiros[i].nome[strcspn(passageiros[i].nome, "\n")] = 0;

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

printf("Digite o telefone: ");
fgets(passageiros[i].telefone, 14, stdin);
passageiros[i].telefone[strcspn(passageiros[i].telefone, "\n")] = 0;

printf("Voce faz parte do plano fidelidade? Digite 1 para sim ou 2 para nao: ");
scanf("%d", &passageiros[i].fidelidade);
getchar();
}

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

void CadastroVoo(dados_voo voo[500],int i){
//improvisado vai ser gerado automaticamente
printf("Digite o codigo do voo: ");
scanf("%s", voo[i].codigo_voo);

printf("Digite o dia,mes e ano(ex:06/12/2024): ");
fgets(voo[i].cadastroData.dia,11,stdin);
voo[i].cadastroData.dia[strcspn(voo[i].cadastroData.dia, "\n")] = 0;

printf("Digite as horas(ex:20:00): ");
fgets(voo[i].cadastroData.hora,6,stdin);
voo[i].cadastroData.hora[strcspn(voo[i].cadastroData.hora, "\n")] = 0;

printf("Digite de onde o aviao esta partindo: ");
fgets(voo[i].origem,201,stdin);
voo[i].origem[strcspn(voo[i].origem, "\n")] = 0;

printf("Digite o destino: ");
fgets(voo[i].destino,201,stdin);
voo[i].destino[strcspn(voo[i].destino, "\n")] = 0;

//essa parte sera do codigo do aviao,piloto,copiloto e comissaro (tera uma funcao para isso depois)





//status tera uma funcao para verficar se esta ativo ou não
printf("Digite 1 se o status do aviao esta ativo ou 2 se esta inativo: ");
scanf("%d", &voo[i].status);

printf("Digite a tarifa do aviao: ");
scanf("%f", &voo[i].tarifa);

}

// Função principal
int main() {
int escolha = 10, i_passageiros = 0, i_tripulacao = 0,i_voo;
dados_passageiros passageiros[500];
dados_tripulacao tripulacao[500];
dados_voo voo[500];
dados_assento assento[500];
dados_reserva reserva[500];

while (escolha != 0) {
paineldecadastramento();
printf("\nDigite sua escolha: ");
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
CadastroVoo(voo, i_voo);
i_voo++;
break;

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

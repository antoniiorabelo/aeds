#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// variavel para cadastro dos passageiros - inicio
typedef struct dados_passageiros{
int codigo_passageiro;
char nome[201];
char endereco[501];
int fidelidade; // vai ser 1 para sim ou 2 para não
int pontos_fidelidade;
}passageiros;

//-fim

//variavel para cadastro da tribulação -inicio
typedef struct dados_tripulacao{
int codigo_tripulacao;
char nome[201];
char endereco[501];
int telefone;
int cargo; //vai ser 1 para piloto,2 para copiloto ou 3 para comissario

} triipulacao;

// fim

//variavel para cadastro do voo - inicio
typedef struct dados_voo{
int codigo_voo;
int data;
int hora;
char origem[201];
char destino[201];
int codigo_aviao;
int codigo_piloto;
int codigo_copiloto;
int codigo_comissario;
int status; //1 para ativo ou 2 para inativo
int tarifa;

} voo;

//fim

//variavel para cadastro de asseto - inicio
typedef struct dados_assento{
int numero_assento;
int codigo_voo;
int status; //1 para ativo ou 2 para inativo
}assento;

//fim

//variavel para cadastro de reserva - inicio
typedef struct dados_reserva{
int codigo_voo;
int numero_assento;
int codigo_passageiro;

}reserva;

//fim

//procedimento para mostrar as opções de cadastramento
void paineldecadastramento(){
printf("Digite 1 para cadastrar passageiros.\n"
       "Digite 2 para cadastrar a tripulcao.\n"
       "Digite 3 para cadastrar o voo.\n"
       "Digite 4 para cadastrar os assentos.\n"
       "Digite 5 para cadastrar a reserva.\n"
       "Digite 0 para encerrar o cadastramento.\n");
}

int main(){
paineldecadastramento();
int escolha=1;
// escolher a opção dentro do loop    -   ainda n sei como guardar e a quantidade de vezes que sera cadastrados.
while(escolha=!0)
switch(escolha);
case 1:



return 0;
}

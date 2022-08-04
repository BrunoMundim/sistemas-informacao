// Bruno Mundim Franco Rocha Gonçalves
// Matricula: 12121BSI246
#include <stdio.h>
#include <stdlib.h>

struct horario
{
  int ano;
  int mes;
  int dia;
  int hora;
  int min;
};
typedef struct horario Horario;

struct veiculo
{
  char placa[7];
  char modelo[10];
  char cor[10];
  Horario horaEntrada;
  Horario horaSaida;
  char status[1];  
};
typedef struct veiculo Veiculo;

void novoHorario(Horario *horario){
  printf("Ano: "); scanf("%d", &horario -> ano);
  printf("Mes: "); scanf("%d", &horario -> mes);
  printf("Dia: "); scanf("%d", &horario -> dia);
  printf("Hora: "); scanf("%d", &horario -> hora);
  printf("Minuto: "); scanf("%d", &horario -> min);  
}

void inserirVeiculo(Veiculo *veiculo) {
  printf("Digite a placa do veiculo: ");
  scanf("%s", veiculo -> placa);
  printf("Digite o modelo do veiculo: ");
  scanf("%s", veiculo -> modelo);
  printf("Digite a cor do veiculo: ");
  scanf("%s", veiculo -> cor);
  printf("Horario Entrada: \n");
  Horario horaEntrada;  
  novoHorario(&horaEntrada);
  veiculo -> horaEntrada = horaEntrada;
  printf("Horario Saida: \n");
  Horario horaSaida;  
  novoHorario(&horaSaida);
  veiculo -> horaSaida = horaSaida;
  printf("Digite o status do veiculo: ");
  scanf("%s", veiculo -> status);
}

int main() {
  printf("O que deseja fazer?\n");
  printf("1 - Adicionar novo registro.\n");
  int decisao;
  scanf("%d", &decisao);
  if(decisao == 1) {
    Veiculo novoVeiculo;
    inserirVeiculo(&novoVeiculo);
  }
}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct horario
{
    int ano;
    int mes;
    int dia;
    int hora;
    int min;
};
typedef struct horario Horario;

struct registro
{
    char placa[8];
    char modelo[10];
    char cor[10];
    Horario horaEntrada;
    Horario horaSaida;
    char status[2];
};
typedef struct registro Registro;

int entradaAno()
{
    int ano;
    printf("Ano: ");
    scanf("%d", &ano);
    return ano;
}

int entradaMes(int bissexto)
{
    int mes;
    while (1)
    {
        printf("Mes: ");
        scanf("%d", &mes);
        if (mes < 1 || mes > 12)
            printf("Entrada invalida: Informe um mes entre 1 e 12!\n");
        else
            return mes;
    }
}

int entradaDia(int tipoMes)
{
    int dia;
    while (1)
    {
        printf("Dia: ");
        scanf("%d", &dia);
        if (dia < 1 || dia > tipoMes)
        {
            printf("Entrada invalida: Informe um dia entre 1 e %d!\n", tipoMes);
        }
        else
            return dia;
    }
}

int entradaHora()
{
    int hora;
    while (1)
    {
        printf("Hora: ");
        scanf("%d", &hora);
        if (hora < 1 || hora > 24)
        {
            printf("Entrada invalida: Informe uma hora entre 1 e 24!\n");
        }
        else
            return hora;
    }
}

int entradaMin()
{
    int min;
    while (1)
    {
        printf("Minuto: ");
        scanf("%d", &min);
        if (min < 0 || min > 59)
        {
            printf("Entrada invalida: Informe um minuto entre 0 e 59!\n");
        }
        else
            return min;
    }
}

void novoHorario(Horario *horario)
{
    // Ano
    int bissexto = 0;
    horario->ano = entradaAno();
    if (((horario->ano) % 400 == 0) || (((horario->ano) % 4 == 0) && ((horario->ano) % 100 != 0)))
    {
        bissexto = 1;
    }

    // Mes
    horario->mes = entradaMes(bissexto);

    // Dia
    if (bissexto == 1 && (horario->mes) == 2)
    {
        horario->dia = entradaDia(29);
    }
    else if ((horario->mes) == 2)
    {
        horario->dia = entradaDia(28);
    }
    else if ((horario->mes) == 1 || (horario->mes) == 3 || (horario->mes) == 1 || (horario->mes) == 5 || (horario->mes) == 7 || (horario->mes) == 8 || (horario->mes) == 10 || (horario->mes) == 12)
    {
        horario->dia = entradaDia(31);
    }
    else
    {
        horario->dia = entradaDia(30);
    }

    // Hora e Min
    horario->hora = entradaHora();
    horario->min = entradaMin();
}

void inserir(FILE *f)
{
    Registro novoRegistro;

    printf("Placa: ");
    scanf("%s", novoRegistro.placa);

    printf("Modelo: ");
    scanf("%s", novoRegistro.modelo);

    printf("Cor: ");
    scanf("%s", novoRegistro.cor);

    printf("Horario entrada: \n");
    novoHorario(&novoRegistro.horaEntrada);

    printf("Horario saida: \n");
    novoHorario(&novoRegistro.horaSaida);

    novoRegistro.status[0] = 'P';

    fwrite(&novoRegistro, sizeof(Registro), 1, f);
}

void alterar(FILE *f)
{
    // completar
}

void remover(FILE *f)
{
    char placaBuscada[8];
    printf("Placa a ser removida: ");
    scanf("%s", placaBuscada);
    printf("\n");

    Registro reg;
    int contador = 1;
    int size = 1;
    int *regLocalizados = (int*) malloc(sizeof(int)*size);
    regLocalizados[0] = 0;
    

    rewind(f);
    while (fread(&reg, sizeof(reg), 1, f) > 0)
    {
        if (strcmp(reg.placa, placaBuscada) == 0 && reg.status[0] != 'R')
        {
            size++;
            regLocalizados = (int*) realloc(regLocalizados, sizeof(int)*size);
            regLocalizados[size-1] = contador;
            for(int i = 0; i < size; i++){
                printf("%d ", regLocalizados[i]);
            }
            printf("\n");
            fseek(f, regLocalizados[size-2]*sizeof(Registro), SEEK_SET);
            reg.status[0] = 'R';
            fwrite(&reg, sizeof(Registro), 1, f);
        }
        contador++;
    }

}

void buscar(FILE *f)
{
    char placaBuscada[8];
    printf("Placa a ser buscada: ");
    scanf("%s", placaBuscada);
    printf("\n");

    Registro reg;

    rewind(f);
    while (fread(&reg, sizeof(reg), 1, f) > 0)
    {
        if (strcmp(reg.placa, placaBuscada) == 0)
        {
            printf("Placa: %s \nModelo: %s \nCor: %s\n\n", reg.placa, reg.modelo, reg.cor);

            printf("Horario entrada: \n %d/%d/%d \n %d:%d\n\n", reg.horaEntrada.dia, reg.horaEntrada.mes, reg.horaEntrada.ano, reg.horaEntrada.hora, reg.horaEntrada.min);

            printf("Horario saida: \n %d/%d/%d \n %d:%d\n\n\n", reg.horaSaida.dia, reg.horaSaida.mes, reg.horaSaida.ano, reg.horaSaida.hora, reg.horaSaida.min);
        }
    }
}

void listar(FILE *f)
{
    Registro reg;

    rewind(f);
    while (fread(&reg, sizeof(reg), 1, f) > 0)
    {
        if (reg.status[0] == 'P'/*  || reg.status[0] == 'R' */)
        {
            printf("Placa: %s \nModelo: %s \nCor: %s\n", reg.placa, reg.modelo, reg.cor);

            printf("Horario entrada: \n %d/%d/%d \n %d:%d\n", reg.horaEntrada.dia, reg.horaEntrada.mes, reg.horaEntrada.ano, reg.horaEntrada.hora, reg.horaEntrada.min);

            printf("Horario saida: \n %d/%d/%d \n %d:%d\n", reg.horaSaida.dia, reg.horaSaida.mes, reg.horaSaida.ano, reg.horaSaida.hora, reg.horaSaida.min);
        }
    }
}

int main()
{
    FILE *f;
    f = fopen("registros.dat", "rb+");
    if (f == NULL)
    {
        printf("Erro na abertura do arquivo\n");
        system("pause");
        exit(1);
    }

    int opcao = -1;
    while (opcao != 0)
    {
        printf("\n\n 0-sair\n 1-insere\n 2-altera\n 3-remove\n 4-busca\n 5-lista\n");
        printf("\n Opcao: ");
        scanf(" %d", &opcao);
        switch (opcao)
        {
        case 1:
            inserir(f);
            break;
        case 2:
            alterar(f);
            break;
        case 3:
            remover(f);
            break;
        case 4:
            buscar(f);
            break;
        case 5:
            listar(f);
            break;
            printf("\n\n\n");
        }
    }

    fclose(f);
    return 0;
}


typedef struct data {
  int dia;
  int mes;
  int ano;
} tdata;


typedef struct pessoa {
  char* nome;
  tdata data;
  int cpf;
} tpessoa;

tpessoa* criaPessoa();

void getData(tpessoa *pessoa);

void printData(tpessoa *pessoa);

void LiberaMemoria(tpessoa *pessoa);
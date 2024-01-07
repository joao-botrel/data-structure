typedef struct data{
  int dia;
  int mes;
  int ano;
} tdata;

typedef struct candidato{
  int id;
  char* nome;
  char* grauDeEscolaridade;
  tdata data;
  char *profissao;
} tcandidato;

tcandidato* criaListaCandidato(int n);
void buscaCID (tcandidato* candidato, int n);
void buscaCE (tcandidato* candidato, int n);
void imprimeNomeProf (tcandidato* candidato, int n);
void liberaMemoria(tcandidato* candidato);
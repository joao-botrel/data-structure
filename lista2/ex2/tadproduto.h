typedef struct produto{
  int id;
  int estoque;
  float preco;
} tproduto;

tproduto *criarProduto(int n);

void getData(tproduto *produto, int n);

void imprimirProdutoMaisCaro(tproduto *produto, int n);

void aumentarPreco(tproduto *produto, int n);

int procuraProdutoComMaisEstoque(tproduto *produto, int n);

void liberaMemoria(tproduto *produto);
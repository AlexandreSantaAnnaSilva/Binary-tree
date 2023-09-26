# Binary-tree

Here , i wanna introduce some things about the Binary-tree , in C lenguage

A árvore é composta por nós, que são estruturas contendo um valor, um ponteiro para o nó filho à esquerda e um ponteiro para o nó filho à direita.

A função `InserirNo()` insere um novo nó na árvore. A função recebe o valor do novo nó, bem como os ponteiros para os nós filhos à esquerda e à direita. Se a árvore estiver vazia, o novo nó será a raiz. Caso contrário, a função irá percorrer a árvore recursivamente até encontrar o local apropriado para inserir o novo nó.

A função `imprimirPreOrdem()` imprime os valores dos nós da árvore na ordem pré-ordem. A função começa imprimindo o valor da raiz. Em seguida, ela chama a si mesma para imprimir os valores dos nós filhos à esquerda. Por fim, ela chama a si mesma para imprimir os valores dos nós filhos à direita.

O código abaixo ilustra a árvore binária criada pelo programa:

```
    15
   / \
  10  50
 / \
 20

```

A saída do programa é a seguinte:

`15 10 20 50`

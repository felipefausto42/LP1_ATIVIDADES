# Questão 03

## **Lista**

Como o próprio nome já diz, é uma lista que armazena valores ligados em ordem, podendo ter elementos inseridos ou removidos em qualquer posição, além de poder ser percorrida nos dois sentidos.

É utilizada em situações onde o objetivo principal é a adição e remoção de elementos dentro dessa organização. Um exemplo disso pode ser visto no mundo dos jogos, onde em uma situação com diversos inimigos, o programa deve removê-los e adicioná-los ao longo da jogatina.

## **Fila**

Funciona com a organização similar a uma fila, implementando a política de FIFO (first-in, first-out), onde o primeiro elemento adicionado é o primeiro a ser retirado.

É utilizada em situação análogas às filas do mundo real, como uma lista de pedidos em um restaurante.

## **Pilha**

Coleção que aplica uma política contrária a fila, a LIFO (last-in, first-out), onde o último elemento a ser adicionado é o primeiro a ser retirado.

Um bom exemplo de seu uso é em programas que aplicam o sistema de UNDO, onde a última modificação feita pode ser apagada, como nos editores de texto.

## **Deque**

Possui funcionamento parecido com a fila, mas há a possibilidade de adicionar elementos tanto em seu início quanto no seu final.

Comumente utilizada em processos de cache, onde se faz necessário um rápido acesso em ambas as pontas da coleção.

## **Vector** 

Apresenta uma quantidade de elementos que pode varia dinamicamente, podendo ser facilmente acessados por meio de índices (números inteiros).

É comumente utilizado em aplicações onde é necessário armazenar diversos valores de um mesmo tempo em uma única variável, com a quantidade de elementos sendo variável, como em uma representação em grid de valores, onde o número de elementos não é definido desde o início, mas ao longo do programa.

## **Set**

Esse container apresenta uma coleção de elementos únicos que não podem ser alterados (mas podem ser adicionados ou removidos), são identificados pelo seu valor e estão apresentados em uma determinada ordem.

Podem ser usado para a criação de um dicionário, onde o valor de um elemento não muda e deve ser acessado pelo seu nome.

## **Map**

Pode ser dito como um container que armazena dois tipos de valores: as chaves, que servem como identificadores de elementos, e os valores, que associados às chaves compõem o corpo desse container.

É bastante utilizado em programas onde há um cadastro de usuário, onde cada um deles está associado à informações distintas.
# BuscaGrafo

Trabalho sobre Grafos: Algoritmo de Busca

1. OBJETIVO
O objetivo deste trabalho de disciplina é projetar e desenvolver uma
biblioteca para manipular grafos. A biblioteca deverá ser capaz de
representar grafos assim como implementar um conjunto de algoritmos em
grafos. Para fins deste trabalho, a biblioteca pode ser um conjunto de
funções (em C). Você deve projetar e desenvolver sua biblioteca de forma
que ela possa ser facilmente utilizada.

2. DESENVOLVIMENTO
Segue abaixo as funcionalidades que precisam ser oferecidas pela biblioteca
nesta parte do trabalho. Sua biblioteca irá trabalhar apenas com grafos não direcionados.

2.1. Entrada. Sua biblioteca deve ser capaz de ler um grafo de um arquivo
texto. O formato do grafo no arquivo será o seguinte. A primeira linha
informa o número de vértices do grafo. Cada linha subsequente informa
as arestas. Um exemplo de um grafo e seu respectivo arquivo texto é
dado na figura 1.

2.2. Saída. Sua biblioteca deve ser capaz de gerar um arquivo texto com as
seguintes informações sobre o grafo: número de vértices, número de
arestas, grau mínimo, grau máximo e grau médio. Além disso, imprimir
informações sobre as componentes conexas (ver abaixo).

2.3. Representação de grafos. Sua biblioteca deve ser capaz de representar
grafos utilizando tanto uma matriz de adjacência, quanto uma lista. O
usuário da biblioteca poderá escolher a forma de representação a ser
utilizada.

2.4. Busca em grafos: largura e profundidade. Sua biblioteca deve ser capaz
de percorrer o grafo utilizando busca em largura e busca em
profundidade. O vértice inicial será dado pelo usuário da biblioteca. A
respectiva árvore de busca deve ser gerada, assim como, o nível de
cada vértice na árvore (nível da raiz é zero). Estas informações devem
ser impressas em um arquivo. Para descrever a árvore gerada, basta
informar o pai de cada vértice e seu nível no arquivo de saída.

3. ESTUDO DE CASO
3.1. Compare o desempenho em termos de quantidade de memória
utilizada pelas duas representações do grafo. Ou seja, determine a
quantidade de memória (em MB) utilizada pelo seu programa quando
você representa o grafo utilizando uma matriz de adjacência e lista de
adjacência. Dica: pause a execução do programa depois de carregar o
grafo e verifique a memória sendo utilizada pelo processo.

3.2. Compare o desempenho em termos de tempo de execução das duas
representações do grafo. Execute 1000 buscas em largura em cada um
dos casos (utilize diferentes vértices como ponto de partida da busca),
e obtenha o tempo médio de uma busca. Dica: obtenha o tempo do
relógio da máquina no seu código antes de iniciar e depois de terminar
as 1000 buscas.

3.3. Repita o item anterior para busca em profundidade (utilize os mesmos
1000 vértices iniciais). Faça uma tabela comparando os tempos de
busca nos diferentes grafos.

Você deve preparar uma tabela com os resultados obtidos onde as colunas
representam as características e as linhas representam os diferentes grafos
analisados.

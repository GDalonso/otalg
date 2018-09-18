## Insertion sort decrescente

#### Invariantes

a cada passagem pelo ponto A:
    1. v[0...j-1] consiste nos elementos que pertenciam a v[0...n-1]

    2. o vetor v[0...j-1] é decrescente!

#### Inicialização

Quando *j=1*, o vetor *v[0...j-1]* consiste apenas no elemento *v[0]*, um vetor com 1 elemento já é trivialmente ordenado, provando os invariantes verdadeiros antes da primeira iteração!

#### Manutenção

Seja *j* um valor qualquer dado por *1<j<n*, o laço procura a posição adequada de *v[j]* e o insere lá.
O vetor *v[0...j-1]* está ordenado de forma decrescente, o invariante se preserva para todo j.

#### Término

A condição que encerra o laço é *j=n*. Substituindo *j* por *n* nos invariantes de laço temos 
    
    - v[0...n-1] consiste nos elementos que pertenciam a v[0...n-1]

    - o vetor v[0...n-1] é decrescente!

Observando que v[0...n-1] é o vetor inteiro dado no início do problema, concluímos que o vetor está ordenado, portanto o algoritmo está correto.
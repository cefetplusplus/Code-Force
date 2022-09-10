#include <bits/stdc++.h>
using namespace std;

#define n 10

// Declaração de função para ser utilizada no metodo sort descrito abaixo
bool sortFunc(int v1, int v2){                  // Função que ordena de forma crescente
    return v1 < v2;
}

int main(){
    // Vector (Array dinâmico)
    vector<int> v(n);                           // Declara um vetor de tamanho n
    vector<int> v1(n,1);                        // Declara um vetor de tamanho n com o primeiro elemento sendo 1
    vector<vector<int>> mat(10,vector<int>(3)); // Declara uma matriz (10 positions) de vector, tal que o primeiro elemento é outro vector de tamanho 3
    v.push_back(3);                             // Adiciona 3 ao final do vector

    // Pair (Como se fosse uma struct que armazena dois valores)
    pair<int, string> p = {20, "Gabriel"};      // Declara um par de elementos de tipos diferentes ou iguais em um mesmo elemento
    p.first = 12;                               // Acessa o primeiro elemento do 'pair'
    p.second = "Gabriel S";                     // Acessa o segundo elemento do 'pair'

    // Min - Max O(log(n))
    int ma = max({2,9,3,4});                    // Descobre o valor máximo de um vetor
    int mi = min({2,9,3,4});                    // Descobre o valor mínimo de um vetor

    // Set (Semelhante a ideia de conjuntos -> ignora repetição de elementos) é uma estrutura sempre ordenada
    set<int> s;                                 // Declara um conjunto de inteiros
    s.insert(5);                                // Insere o elemento 5 ao conjunto s            O(log(n))
    s.erase(5);                                 // Apaga o elemento 5 do conjunto               O(log(n))
    s.count(5);                                 // Verifica se o elemento 5 esta no conjunto    (1 - true, 2 - false)
    s.size();                                   // Pega o tamanho do 

    // Map (principio de tabela hash) conjunto de chave valor (tal que a chave deve ser unica)
    map<string,int> mp;                         // Declarando uma variavel do tipo map
    mp["gabriel"] = 21;                         // Insere um elemento ao map O(log(n)) (OBS. quando o map é referenciado com uma chave, caso ela não exista ainda, o map a definirá com o valor padrão do segundo tipo (nesse caso 0 'int'))
    for(map<string,int>::iterator it = mp.begin(); it != mp.end(); it++){}  // Caminhando em um map

    // Sort (ordena um vector) O(nlog(n))
    sort(v.begin(), v.end());                   // Ordena o vetor do inicio ao fim
    sort(v.begin(), v.begin() + n);             // Ordena o vetor do inicio até o n-ezimo elemento
    sort(v.begin(), v.end(), greater<>());      // Ordena de forma decrescente (é possivel passar a função de comparação no terceiro parametro do sort) 
    sort(v.begin(), v.end(), sortFunc);  

    // Auto (permite declaração de variaveis de qualquer tipo 'é como se fosse uma variavel final')
    auto var = "casa";                          // Define a variavel var como string
    for(auto i : v) cout<<i<<" ";               // Faz um for pegando elemento por elemento (como o 'for in' do python)         (Gera um copia do valor em i)
    for(auto i : mp) cout<<i.first<<" ";        // Faz o mesmo da linha '37', caminha no map elemento por elemento (for in)     (Gera um copia do valor em i)
    for(auto& i : v) i++;                       // Incrementa no vector real devido auto ser um tipo de endereço (Ocorre a interação por caminhamento de ponteiros) (Pega a referência do valor em i)

    // Queue (similar a uma 'fila', o qual se insere no final e romove do inicio)
    queue<int> fila;                            // Declara uma fila
    fila.push(15);                              // Insere elemento no final
    fila.front();                               // visualiza o primeiro elemento da fila (o inserido a mais tempo)
    fila.pop();                                 // Remove o primeiro elemento da fila

    // Stack (similar a uma 'pilha', o qual se insere no inicio e remove no inicio)
    stack<int> pilha;                           // Declara uma pilha
    pilha.push(15);                             // Insere um elemento no inicio
    pilha.top();                                // Vê elemento adicionado recentemente
    pilha.pop();                                // Remove o ultimo elemento adicionado 
}

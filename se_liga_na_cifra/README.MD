## Knowledge Used
* loop interactions

## Problem
A cifra de transposição Rail Fence é um clássico algoritmo de criptografia. A ideia é cifrar uma mensagem escrevendo cada caractere diagonalmente para baixo e para cima em sucessivos trilhos de uma cerca imaginária. Um verdadeiro zig-zag! Depois, basta obter a sequência horizontal de caracteres, da esquerda para a direita, de cima para baixo, para formar a mensagem cifrada, sempre ignorando espaços e pontuação. Por exemplo, para criptografar a mensagem: "QUEM TE CONHECE NAO ESQUECE JAMAIS" em 3 trilhos, escreva o texto como:
<br>
Q  .  .  .  T  .  .  .  N  .  .  .  E  .  .  .  E  .  .  .  E  .  .  .  A  .  .  .  S

.  U  .  M  .  E  .  O  .  H  .  C  .  N  .  O  .  S  .  U  .  C  .  J  .  M  .  I  . 

.  .  E  .  .  .  C  .  .  .  E  .  .  .  A  .  .  .  Q  .  .  .  E  .  .  .  A  .  . 
Então, leia o texto horizontalmente, da esquerda para direita, de cima para baixo, ignorando espaços e pontuação. O resultado é o seguinte texto cifrado:
<br>
QTNEEEASUMEOHCNOSUCJMIECEAQEA
<br>
Sua missão é escrever uma solução para obter a mensagem original, ignorando espaços e pontuação, a partir da mensagem cifrada C e do número de trilhos N utilizados para codificá-la.

#### Input
A primeira linha da entrada contém uma única string, C, que representa a mensagem que deve ser decodificada. A segunda linha da entrada contém um único inteiro, N, que é o número de trilhos que devem ser usados para decodificar a mensagem.

#### Output
A saída deve conter uma única string M, representando a mensagem decodificada.
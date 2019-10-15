<h1 align="center"> Trabalho Pratico 2019</h1>
<p align="justify">
Joãozinho, apesar de estar no início do curso de computação, andou pesquisando e descobriu
que os processadores mais novos da Intel e AMD possuem suporte a instruções do tipo Single
Instruction Multiple Data (SIMD). Com este tipo de instrução é possível fazer uma operação
sobre múltiplos valores de uma única vez. Pode-se, por exemplo, somar quatro valores com
outros quatro em uma única instrução.
</p>
<p align="justify">
Para que as operações possam ser realizadas, o primeiro passo é colocar os primeiros 4 valores
em um único bloco de memória (xxma), e os outros 4 valores em um outro bloco (xxmb).
Depois, uma função especial deve ser chamada para receber ambos os blocos de 4 valores e
realizar a operação sobre todos eles. O resultado de uma operação SIMD pode ser visualizado
pelo exemplo a seguir:
</p>
<p align="center">
<img src = "https://github.com/ArthurOlive/Trabalho-Pratico-2019.2/blob/master/img/img01.PNG">
</p>
<p align="justify">
Joãozinho ainda está começando a programar e não conhece tudo que é necessário para usar as
instruções SIMD reais, mas ele já sabe o suficiente para simular o funcionamento delas usando o
que aprendeu sobre os <b>tipos de dados inteiros</b> e as <b>operações bit a bit</b> que a linguagem C++
oferece.
<p>
<p align="justify">
Ajude Joãozinho a construir um programa que simule o funcionamento das operações SIMD
criando uma biblioteca (simd.h e simd.cpp) que forneça as seguintes funções:
</p>
<ul>
  <li align="justify">
    <b>Armazena</b>: deve receber 4 valores na faixa de 0 a 255 (8 bits) e retornar um valor de 32
bits contendo os 4 valores
  </li>
  <li>
   <b>Primeiro</b>: deve receber um valor de 32 bits e retornar o valor armazenado no primeiro
bloco de 8 bits.
  </li>
  <li>
  <b>Segundo</b>: deve receber um valor de 32 bits e retornar o valor armazenado no segundo
bloco de 8 bits.
  </li>
  <li>
    <b>Terceiro</b>: deve receber um valor de 32 bits e retornar o valor armazenado no terceiro
bloco de 8 bits.
  </li>
  <li>
  <b>Quarto</b>: deve receber um valor de 32 bits e retornar o valor armazenado no quarto
bloco de 8 bits.
  </li>
  <li>
    <b>Soma</b>: deve receber dois valores de 32 bits e retornar um valor de 32 bits com o
resultado das somas individuais de cada valor de 8 bits.
  </li>
  <li>
  <b>Mult</b>: deve receber dois valores de 32 bits e retornar um valor de 32 bits com o
resultado da multiplicação individual de cada valor de 8 bits.
  </li>
 </ul>
  <p align="justify">
  Já que Joãozinho está manipulando bits em blocos de memória, ele achou que seria legal brincar
também com criptografia de dados, construindo uma função para transformar uma cadeia de 32
bits em outra, com alguns bits modificados, de forma que um observador externo não consiga
ver o número original.
  <p align="justify">
Ele poderia usar este sistema de criptografia, por exemplo, para enviar o resultado da soma e
multiplicação criptografados pela rede para que apenas o destinatário seja capaz de decodificar
os dados recebidos, sem que nenhum intruso ao canal de comunicação seja capaz de conhecer
os números enviados.
    </p>
    <p align="justify">
Para atingir esse objetivo construa as seguintes funções como parte de outra biblioteca (cripto.h
e cripto.cpp):
  </p>
  <ul>
  <li>
    <b>Codificar</b>: transforma um valor de 32 bits em outro, alterando 6 posições aleatórias da
cadeia original. Se o bit testado estiver ligado (igual a 1), ele deve ser desligado (para
zero), e vice-versa.
  <p align="center">
    <img src = "https://github.com/ArthurOlive/Trabalho-Pratico-2019.2/blob/master/img/img02.PNG"/> 
  </p>
    <p>
      Para poder decodificar a cadeia, será necessário guardar as posições modificadas. Isso
pode ser feito guardando cada posição em 5 bits (um valor de 0 a 31), como mostrado
na imagem acima. Como temos 6 valores de 5 bits para guardar, sobrarão 2 bits não
utilizados no segundo bloco de 32 bits. A função codificar deve retornar um valor de
64 bits contendo o valor codificado e as posições alteradas.
    </p>
  </li>
  <b>Decodificar</b>: recebe um valor de 64 bits, gerado pela função codificar, e retorna um
valor de 32 bits com o valor original, decodificado a partir do valor armazenado nos
primeiros 32 bits e das 6 posições indicadas nos 32 bits seguintes.
<p align="center">
  <img src="https://github.com/ArthurOlive/Trabalho-Pratico-2019.2/blob/master/img/img03.PNG">
  </p>
  <li>
    <b>LigarBit</b>: recebe um valor de 32 bits e a posição do bit a ser ligado e retorna o valor de
32 bits resultante da modificação do bit.
  </li>
  <li>
    <b>DesligarBit</b>: recebe um valor de 32 bits e a posição do bit a ser desligado e retorna o
valor de 32 bits resultante da modificação do bit.
  </li>
  <li>
    <b>TestarBit</b>: recebe um valor de 32 bits e a posição do bit a ser testado, retornando um
booleano (true ou false) para indicar se o bit está ou não ligado
  </li>
  </ul>
  <p align="justify">
  Utilize as funções das duas bibliotecas (SIMD e Cripto) em um programa que leia do usuário 8
valores inteiros e mostre os resultados como no exemplo abaixo. Observe que os valores foram
digitados e exibidos sempre com 3 dígitos. Tanto o usuário ao digitar, quanto o programa ao
exibir, completaram com zeros a esquerda os valores que possuíam menos de 3 dígitos
  </p>
  <p align="center">
  <img src ="https://github.com/ArthurOlive/Trabalho-Pratico-2019.2/blob/master/img/img04.PNG">
  </p>

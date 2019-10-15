# Trabalho Pratico 2019
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
<img src = "" align="center">
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

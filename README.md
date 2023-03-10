# Crypto-Enigma (Baseada na criptografia da maquina Enigma usada para criptografar e descriptografar mensagens na 2 guerra mundial)
 
Bem-vindo ao programa de decodificação de texto criptografado!
Este programa foi desenvolvido para decodificar texto criptografado usando uma chave específica. Ele é escrito em C++ e pode ser compilado e executado em qualquer sistema operacional
compatível com o compilador C++.

Antes de usar o programa, certifique-se de ter o compilador C++ instalado em seu sistema.

Para usar o programa, siga os seguintes passos:

1. Salve o código fonte do programa em um arquivo com a extensão .cpp (por exemplo, "decode.cpp").
2. Abra o prompt de comando ou o terminal e navegue até o diretório onde você salvou o arquivo.
3. Use o seguinte comando para compilar o código:

g++ enigma.cpp -o enigma       ou     g++ decode.cpp -o decode

4. O comando acima irá gerar um arquivo executável chamado "enigma".
5. Para executar o código, use o seguinte comando:

./enigma       ou   ./decode

6. O programa irá executar e pedir para você digitar a frase criptografada e a chave para decodificar.

Observação: Caso esteja utilizando o Windows, é necessário utilizar o compilador da Microsoft ou o MinGW (compilador GCC para Windows).

Esperamos que você encontre este programa útil e fácil de usar. Se você tiver alguma dúvida ou problema ao usá-lo, por favor, não hesite em entrar em contato.


--Nota extra--

Infelizmente, é impossível reproduzir fielmente o algoritmo de criptografia da Máquina Enigma,
pois as informações detalhadas sobre sua implementação e configuração foram classificadas durante 
a Segunda Guerra Mundial e nunca foram totalmente divulgadas.

Além disso, a Máquina Enigma era muito complexa e possuía vários componentes mecânicos e eletrônicos que não podem ser reproduzidos facilmente em um código de computador.
Reproduzir tal código seria ilegal, pois a Enigma é considerada uma ferramenta de espionagem e sua reprodução sem autorização é proibida.


O código acima é uma implementação simplificada do algoritmo de cifra de substituição, e é baseado na Máquina Enigma original.
Para decifrar o texto criptografado com esse código, você precisaria da chave usada para criptografar o texto. 
A chave é usada para desfazer as operações de criptografia realizadas no texto original. 
A chave é utilizada na função de decriptar (decrypt) para decifrar a mensagem.

Em resumo, para decifrar o texto criptografado usando esse código, você precisaria conhecer a chave usada para criptografar o texto.
Uma vez que você tenha a chave, você pode usá-la na função de decriptar (decrypt) para recuperar o texto original.

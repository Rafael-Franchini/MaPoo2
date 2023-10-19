# MaPoo2
##Desenvolvido sem auxilio 

Vocês, no auge das habilidades técnicas de Programação Orientada a Objetos em C++, foram escolhidos pelo Twitter e Meta para realizarem um desafio e desenvolverem um protótipo em C++ de uma rede social simples.

Vocês deverão identificar em um documento Word ou Google Docs os integrates da equipe (Nome e RA) e também quais foram as funções que demandaram o uso de polimorfismo. Para essa atividade, vocês deverão utilizar implementação em Ponteiros, pois somente assim, o polimorfismo é atingido.


Dessa forma atentem-se aos requisitos do protótipo:

1. Uma classe Usuário deverá ser programada, com os seguintes atributos:
Nome Completo;
Email;
Data de Criação;
Vector de SocialNetwork;
A data de criação deve ser tratada um vetor do tipo char e deve ser preenchida ao criar o objeto da classe. Pesquise sobre time_t e ctime para resgatar a data atual do computador.

Além disso, a classe Usuário terá como funcionalidades:
Cadastrar em uma SocialNetwork: adicionar um objeto no vector;
Descadastrar uma SocialNetwork através do nome: pesquisar o objeto no vector e remover usando o vector.erase(...);
Pesquisar uma SocialNetwork através do código e retornar o seu ponteiro (a função terá tipo de retorno SocialNetwork*);
Visualizar quais redes o usuário está cadastrado - exibir as informações na tela das redes;
Você deverá fazer o include do SocialNetwork.h apenas no arquivo Usuario.h.

2. Vocês deverão criar uma classe, denominada SocialNetwork, que deverá conter atributos  e funções get/set:

Atributos:
Nome da rede social;
Data de criação da rede;
Vector de Post;
Funcionalidades:
Visualizar o nome da rede - função get do atributo nome;
Visualizar quantos posts existem na rede - retornar a quantidade de elementos do vector post;
Realizar uma postagem - essa função deverá adicionar um objeto post ao vector e retornar a referência desse objeto para interação com o post;
3. Uma classe Post deverá ser programada, contendo:

Atributos:
Código;
Descrição;
Quantidade de Likes.
Funcionalidades:
Get/Set dos atributos;
Curtir o post - realizando o incremento do contador de likes;
Além disso, uma função, chamada compartilhar, deve existir, sendo essa função virtual e pura.
O construtor deve ser responsável por garantir que a quantidade de likes seja zero ao criar um objeto.

4. Vocês deverão programar outras duas classes, TwitterPost e InstagramPost, respectivamente. Essas classes herdarão da classe Post. Sendo que cada uma possui uma a sua própria forma de compartilhar postagens.

5. Por fim, vocês deverão construir um programa principal que permita o uso de objetos dessas classes. Parta do pressuposto que exista apenas um usuário tratado na aplicação, e que ele deve se cadastrar em duas redes sociais - Twitter e Instagram; Peça as informações via teclado, permita ao usuário escolher qual rede ele quer se cadastrar. A partir desses cadastrados, vocês deverão recuperar a rede escolhida e realizar posts e likes. Dê preferência na criação de um menu com cabeçalho que permita escolher as opções, assim como já fizemos nos exercícios anteriores.

Em anexo estão o diagrama UML do protótipo e um fragmento de código do programa principal para AUXILIAR em como se dará as funcionalidades do protótipo. Não irei aceitar o programa principal caso o mesmo seja ao anexado.

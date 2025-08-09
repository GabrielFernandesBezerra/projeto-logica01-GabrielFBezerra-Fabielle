# Projeto-Logica-Computacional

**Feito por**: Gabriel Fernandes Bezerra e Fabielle

**Tema:**  
4. Calculadora de Descontos e Impostos
Descrição: O software deve calcular o preço final de um produto após a aplicação de um desconto e, quando necessário, calcular o imposto sobre o valor final.
Especificação: O programa deve pedir ao usuário o preço do produto e o percentual de desconto. Se o valor após o desconto for superior a um limite, um imposto adicional será aplicado. O valor final com desconto e imposto deve ser mostrado.

**imagem:**
![alt text](<Captura de Tela (4).png>)

**Descrição do Problema & Solução**
Assim, não foi tão problematico esse projeto, o maior problema foi algumas confusões que a gente fazia, especialmente sobre tipo de dados e cálculos e também na parte criativa, mas de resto foi bem fácil.
Pra resolver foi mais tentaiva e erro e um pouquinho de lógica. Um exemplo de uma falha lógica meio engraçada foi que colocamos o dado do desconto e imposto como INT no inicio, algo que não faz nenhum sentido já que em uma das etapas do código esses valores se tornam decimais e eu só acho que INT não serve para números decimais, mas tipo **só acho**.

**COMO RODAR O PROJETO**
Teoricamente é só dar um CD Gabriel, depois um gcc algoritmo.c e depois um ./a.out
MAS eu duvido que seja sobre isso e sim como o script funciona e tals. Então vamos dividir em 3 etapas:

1 etapa - Tipos valores
aqui define que o preço vai ser double. O imposto e o desconto vai ser float

2 etapa - Valores armazenados
É a parte que o programa pergunta qual o número de cada um dos valores necessários e guarda ele no valor da variável. Importante dizer pra não colocar R$ antes do preço ou o valor de % no desconto e imposto e muito menos colocar em decimal, já que o programa faz isso na 3 etapa. Resumidamente coloque somente os valores inteiros que deseja porque eles serão armazenados

3 etapa - Valor Final 
Nessa etapa o desconto e o imposto são divididos por 100, ou seja, se tornam números decimais. Logo em seguida ocorre a multiplicação do valor decimal do desconto com o preço e depois o preço é subtraído pelo resultado dessa conta, fazendo surgir uma nova variável... **O PRECO_FINAL** que é uma variável double que essa é multiplicada pelo valor decimal do imposto, já que segundo as nossas pesquisas, o valor do imposto é adicionado após o preço base do produto ter o seu desconto, então o valor do ""preço final"" é subtraído pelo resultado da última conta e dessa maneira adquirimos realmente o **PREÇO FINAL**.
Após essa quantidade absurda de contas o programa "printa" a seguinte frase "O Preço Final é:" e após esses dois pontos é colocado o valor da variável preco_final e finaliza o programa. 

OBS: Foi meio proposital a quantidade absurda da palavra "valor" nos textos, eu me inspirei na trilogia do Homem Aranha do Tom Holland para fazer o titulo das etapas 

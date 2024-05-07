# Sistema Automatizado de Controle de Comporta

![alt text](<Circuito.png>)

Acesse o simulador do projeto no TinkerCad:
https://www.tinkercad.com/things/aFlR8DcoMPI-comporta-automatica-com-sensor-de-nivel-de-agua-0510.

## Descrição do Projeto

Este projeto apresenta um sistema automatizado que tem como objetivo prevenir problemas associados à ruptura de barragens. O sistema é projetado para fornecer um "escape" que permitirá a liberação controlada de água em uma vazão segura, auxiliando na gestão eficiente das barragens e garantindo sua operação segura.

## Componentes

O sistema é composto pelos seguintes componentes:

| Nome   | Quantidade | Componente                                 |
|--------|------------|--------------------------------------------|
| U1     | 1          | Arduino Uno R3                             |
| U2     | 1          | Display LCD 16 x 2                         |
| DIST1  | 1          | Sensor de distância ultrassônico (4 pinos) |
| SERVO1 | 1          | Micro servo                                |
| R1     | 1          | Resistor de 232 Ω                          |
| R2     | 1          | Resistor de 232 Ω                          |
| R3     | 1          | Resistor de 232 Ω                          |
| R4     | 1          | Resistor de 232 Ω                          |
| R5     | 1          | Resistor de 232 Ω                          |
| D4     | 1          | LED Vermelho                               |
| D3     | 1          | LED Laranja                                |
| D2     | 1          | LED Amarelo                                |
| D1     | 1          | LED Verde                                  |
| PIEZO1 | 1          | Buzzer                                     |

- **Sensor ultrassônico**: Este sensor é usado para medir a distância até a superfície da água. A distância medida é usada para calcular o nível da água na barragem.

- **Servo motor**: O servo motor é usado para controlar a comporta da barragem. Dependendo do nível da água, a comporta pode ser aberta ou fechada para manter o nível da água dentro de um intervalo seguro.

- **LEDs**: O sistema inclui vários LEDs que indicam o estado atual do sistema. Cada LED representa um estado específico, como seguro, espera ou perigo.

- **Buzzer**: O buzzer é usado para emitir um alerta sonoro quando o nível da água atinge um estado crítico.

- **Display LCD**: O display LCD é usado para exibir informações sobre o nível da água e o estado atual do sistema.

## Planta do Circuito

O sistema foi construído da seguinte forma: 

![alt text](<Planta.png>)
  
## Funcionamento

O sistema funciona da seguinte maneira:

1. O sensor ultrassônico mede continuamente a distância até a superfície da água.

2. Com base na leitura do sensor, o sistema calcula o nível da água.

3. Dependendo do nível da água, o sistema pode estar em um dos seguintes estados: Seguro, Espera 1, Espera 2 ou Perigo.

4. Cada estado é indicado por um LED específico. No caso do estado Perigo, um alerta sonoro é emitido pelo buzzer.

5. O servo motor controla a abertura da comporta com base no estado atual do sistema.

## Prototipagem

A prototipagem do sistema foi realizada utilizando a ferramenta de prototipagem Tinkercad. Esta é uma plataforma online que permite aos usuários projetar e simular circuitos eletrônicos de maneira fácil e intuitiva.

## Código

O código para o sistema está disponível neste repositório. Ele foi escrito em C++ e pode ser carregado em um Arduino para controlar o hardware do sistema.

## Contribuições

Contribuições para o projeto são bem-vindas. Se você tiver alguma sugestão ou melhoria para o projeto, sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este projeto está licenciado sob a licença Creative Commons Attribution-ShareAlike 3.0 Unported (CC BY-SA 3.0). Isso significa que você é livre para compartilhar (copiar, distribuir e transmitir a obra), e remixar (adaptar a obra), sob as seguintes condições:

- **Atribuição**: Você deve atribuir o trabalho da maneira especificada pelo autor ou licenciante (mas não de maneira que sugira que eles endossam você ou seu uso do trabalho).
- **Compartilhamento pela mesma licença**: Se você alterar, transformar ou criar com base neste trabalho, você poderá distribuir a obra resultante apenas sob a mesma licença, uma licença similar ou uma licença compatível com a Creative Commons.

Para mais detalhes, consulte o texto completo da licença aqui: https://creativecommons.org/licenses/by-sa/3.0/.

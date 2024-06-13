# RPG Medieval simplificado em C++ 🧙‍♂️🪄

## 📝 Planejamento e Preparação:
- Tema: RPG medieval
- Objetivos: Criar um jogo simples com elementos básicos de RPG
- Linguagem: C++

## 🏗️ Estrutura Básica do Jogo
- `una-rpg-cpp.cpp`: Ponto de entrada do jogo
- `Character.h` e `Character.cpp`: Definição e implementação da classe de personagem
- `Enemy.h` e `Enemy.cpp`: Definição e implementação da classe de inimigo
- `Item.h` e `Item.cpp`: Definição e implementação da classe de item
- `Combat.h` e `Combat.cpp`: Implementação do sistema de combate
- `Game.h` e `Game.cpp`: Controle do fluxo do jogo

## ⚙️ Implementação dos Componentes Principais

### Personagens, Classes e Poderes
- **Character Class**:
  - Atributos: nome, vida, mana, força, defesa, etc.
  - Métodos: atacar, defender, usar poder, etc.
- **Classes**: Guerreiro, Mago, Arqueiro e Tank
  - Cada classe com atributos e poderes específicos

### Inimigos (Comum e Boss)
- **Enemy Class**:
  - Atributos: tipo, saúde, força, defesa, etc.
  - Métodos: atacar, defender, usar poder, etc.
- **Tipos de Inimigos**:
  - Inimigos comuns: Orc, Goblin, etc.
  - Boss: Dragão, Demônio, etc.

### Sistema de Experiência
- **Sistema de Nível**:
  - Atributos: nível atual, experiência atual, experiência necessária para próximo nível
  - Métodos: ganhar experiência, subir de nível

### Itens e Inventário
- **Item Class**:
  - Atributos: nome, tipo, efeito, etc.
- **Inventário**:
  - Métodos: adicionar item, remover item, usar item

### Combate por Turnos
- **Combat System**:
  - Lógica de turnos: ordem de ataque, cálculo de dano, verificação de vitórias e derrotas

## 🧪 Integração e Testes

### Integração dos Componentes
- Integração do sistema de personagens com o sistema de combate

### Testes de Jogabilidade
- Testes para verificar a fluidez do jogo, balanceamento e ausência de bugs

## 🔥 Integrando Firebase ao Projeto

Este projeto utiliza requisições REST via curl para interagir com o Firebase, permitindo acesso aos dados armazenados no Firebase Realtime Database.

### Pré-requisitos

Antes de começar, verifique se você tem instalado:

- **Curl Library**: Você precisará da biblioteca Curl para fazer solicitações HTTP ao Firebase. Você pode baixar a versão pré-compilada do Curl em [https://curl.se/windows/](https://curl.se/windows/).

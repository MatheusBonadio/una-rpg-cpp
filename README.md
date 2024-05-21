# RPG Medieval simplificado em C++ 🧙‍♂️🪄

## 📝 Planejamento e Preparação
- Tema: RPG medieval
- Objetivos: Criar um jogo simples com elementos básicos de RPG
- Linguagem: C++

## 🏗️ Estrutura Básica do Jogo
- `main.cpp`: Ponto de entrada do jogo
- `Character.h` e `Character.cpp`: Definição e implementação da classe de personagem
- `Enemy.h` e `Enemy.cpp`: Definição e implementação da classe de inimigo
- `Item.h` e `Item.cpp`: Definição e implementação da classe de item
- `CombatSystem.h` e `CombatSystem.cpp`: Implementação do sistema de combate
- `Shop.h` e `Shop.cpp`: Implementação da loja e sistema financeiro
- `Game.h` e `Game.cpp`: Controle do fluxo do jogo

## ⚙️ Implementação dos Componentes Principais

### Personagens, Classes e Poderes
- **Character Class**:
  - Atributos: nome, saúde, mana, força, defesa, etc.
  - Métodos: atacar, defender, usar poder, etc.
- **Classes**: Guerreiro, Mago, Arqueiro
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

### Loja e Sistema Financeiro
- **Shop Class**:
  - Atributos: lista de itens à venda, preços
  - Métodos: comprar item, vender item, visualizar itens disponíveis

### Armadilhas
- **Trap Class**:
  - Atributos: tipo, dano, efeito
  - Métodos: ativar armadilha, desativar armadilha

## 🧪 Integração e Testes

### Integração dos Componentes
- Integração do sistema de personagens com o sistema de combate
- Integração do inventário com a loja
- Integração das armadilhas no fluxo do jogo

### Testes Unitários
- Testes para cada classe e sistema individualmente

### Testes de Jogabilidade
- Testes para verificar a fluidez do jogo, balanceamento e ausência de bugs

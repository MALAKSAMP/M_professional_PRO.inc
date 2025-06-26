
# M_professional_PRO.inc

**Autor:** MALAK (Marcos Aurélio Oliveira Silva)  
**Licença:** MIT (Proibido remover créditos ou alegar coautoria)  
**Última atualização:** 23/06/2025  
**Curso oficial:** https://pay.kiwify.com.br/msCeNOa  
**Discord:** https://discord.gg/VdFMF7rU9g  
**GitHub:** https://github.com/MALAKSAMP  

---

## Introdução

M_professional_PRO.inc é uma include profissional para SA-MP escrita em Pawn, que oferece uma abstração avançada para manipulação de dados do jogador, veículos, armas, mensagens e outras funcionalidades essenciais para gamemodes modernos.

Esta include facilita a organização, padronização e manutenção do código, utilizando macros com placeholders `%0`, `%1` para maior flexibilidade e desempenho.

> **AVISO IMPORTANTE:**  
> É proibido remover os créditos do autor, alegar coautoria ou modificar sem autorização.  
> Qualquer uso ilegal será considerado má-fé e passível de ações legais.

---

## Como usar

1. Coloque a include `M_professional_PRO.inc` em seu projeto SA-MP.  
2. Inclua no seu script principal:

```pawn
#include "M_professional_PRO.inc"
```

3. Utilize as funções/macros para manipular informações do jogador, veículos, armas, mensagens e muito mais.  
4. Consulte a documentação abaixo para entender cada função e macro.

---

## Mini Tutorial

### Definir nível de admin do jogador

```pawn
// Define nível de admin do jogador 0 como 5
DefinePlayerAdminLevelEnumPRO(0, 5);

// Adiciona 2 níveis ao admin do jogador 0
AddPlayerAdminLevelEnumPRO(0, 2);

// Pega o nível de admin do jogador 0
new adminLevel = GetPlayerAdminLevelEnumPRO(0);
```

### Definir e manipular dinheiro do jogador

```pawn
// Define o dinheiro do jogador 0 para 10.000
DefinePlayerGranaEnumPRO(0, 10000);

// Adiciona 500 ao dinheiro do jogador 0
AddPlayerGranaEnumPRO(0, 500);

// Remove 200 do dinheiro do jogador 0
RemovePlayerGranaEnumPRO(0, 200);

// Obtém o dinheiro atual do jogador 0
new dinheiro = GetPlayerGranaEnumPRO(0);
```

### Enviar mensagem para o jogador

```pawn
DefineSendPlayerMessagePRO(0, Definecor_verdePRO, "Bem-vindo ao servidor!");
```

---

## Documentação das Funções e Macros

### Admin

| Função / Macro                          | Descrição                                 |
|---------------------------------------|------------------------------------------|
| `DefinePlayerAdminLevelEnumPRO(playerid, valor)` | Define o nível de admin do jogador.       |
| `AddPlayerAdminLevelEnumPRO(playerid, valor)`    | Adiciona ao nível de admin.                |
| `GetPlayerAdminLevelEnumPRO(playerid)`           | Retorna o nível atual de admin.            |

---

### Cargo

| Função                                |     Descrição                            |
|---------------------------------------|------------------------------------------|
| `DefinePlayerCargoEnumPRO(playerid, valor)` | Define cargo do jogador.                  |
| `RemovePlayerCargoEnumPRO(playerid, valor)` | Remove do cargo do jogador.               |
| `GetPlayerCargoEnumPRO(playerid)`               | Retorna cargo atual.                      |

---

### Líder de Organização

| Função                                  | Descrição                                  |
|-----------------------------------------|--------------------------------------------|
| `DefinePlayerLiderOrgEnumPRO(playerid, idorg)` | Define ID da organização do líder.          |
| `RemovePlayerLiderOrgEnumPRO(playerid, valor)` | Remove valor do líder.                      |
| `GetPlayerLiderOrgEnumPRO(playerid)`               | Retorna ID do líder.                        |

---

### Skin

| Função                            | Descrição                                    |
|-----------------------------------|----------------------------------------------|
| `DefinePlayerSkinEnumPRO(playerid, skinid)` | Define skin original do jogador.               |
| `GetPlayerSkinEnumPRO(playerid)`           | Retorna skin original.                         |
| `DefinePlayerSkinPRO(playerid, skin_id)`   | Altera a skin atual (SetPlayerSkin).           |

---

### Level

| Função                            | Descrição                                    |
|-----------------------------------|----------------------------------------------|
| `DefinePlayerLevelEnumPRO(playerid, valor)` | Define o nível do jogador.                      |
| `AddPlayerLevelEnumPRO(playerid, valor)`    | Adiciona valor ao nível.                         |
| `RemovePlayerLevelEnumPRO(playerid, valor)` | Remove valor do nível.                           |
| `GetPlayerLevelEnumPRO(playerid)`           | Retorna nível atual.                             |

---

### Experiência (EXP)

| Função                            | Descrição                                    |
|-----------------------------------|----------------------------------------------|
| `DefinePlayerEXP_EnumPRO(playerid, valor)` | Define a experiência do jogador.                 |
| `AddPlayerEXP_EnumPRO(playerid, valor)`    | Adiciona experiência.                            |
| `RemovePlayerEXP_EnumPRO(playerid, valor)` | Remove experiência.                              |
| `GetPlayerEXP_EnumPRO(playerid)`           | Retorna experiência atual.                       |

---

### Dinheiro (Grana)

| Função                            | Descrição                                    |
|-----------------------------------|----------------------------------------------|
| `DefinePlayerGranaEnumPRO(playerid, valor)` | Define dinheiro do jogador.                      |
| `AddPlayerGranaEnumPRO(playerid, valor)`    | Adiciona dinheiro.                               |
| `RemovePlayerGranaEnumPRO(playerid, valor)` | Remove dinheiro.                                 |
| `GetPlayerGranaEnumPRO(playerid)`           | Retorna dinheiro atual.                          |

---

### Coins

| Função                            | Descrição                                    |
|-----------------------------------|----------------------------------------------|
| `DefinePlayerCoinsEnumPRO(playerid, valor)` | Define coins do jogador.                         |
| `AddPlayerCoinsEnumPRO(playerid, valor)`    | Adiciona coins.                                  |
| `RemovePlayerCoinsEnumPRO(playerid, valor)` | Remove coins.                                    |
| `GetPlayerCoinsEnumPRO(playerid)`           | Retorna coins atuais.                            |

---

### Saldo Banco e Caixa

| Função                            | Descrição                                    |
|---------------------------------------|----------------------------------------------|
| `DefinePlayerSaldoBancoEnumPRO(playerid, valor)` | Define saldo bancário.                          |
| `AddPlayerSaldoBancoEnumPRO(playerid, valor)`    | Adiciona saldo bancário.                        |
| `RemovePlayerSaldoBancoEnumPRO(playerid, valor)` | Remove saldo bancário.                          |
| `GetPlayerSaldoBancoEnumPRO(playerid)`           | Retorna saldo bancário atual.                   |
| `DefinePlayerSaldoCaixaEnumPRO(playerid, valor)` | Define saldo em caixa.                           |
| `AddPlayerSaldoCaixaEnumPRO(playerid, valor)`    | Adiciona saldo em caixa.                         |
| `RemovePlayerSaldoCaixaEnumPRO(playerid, valor)` | Remove saldo em caixa.                           |
| `GetPlayerSaldoCaixaEnumPRO(playerid)`           | Retorna saldo em caixa atual.                    |

---

### Vida e Colete

| Função                            | Descrição                                    |
|-----------------------------------|----------------------------------------------|
| `DefinePlayerVidaEnumPRO(playerid, valor)` | Define vida do jogador.                          |
| `AddPlayerVidaEnumPRO(playerid, valor)`    | Adiciona vida.                                   |
| `RemovePlayerVidaEnumPRO(playerid, valor)` | Remove vida.                                    |
| `GetPlayerVidaEnumPRO(playerid)`           | Retorna vida atual.                              |
| `DefinePlayerColeteEnumPRO(playerid, valor)` | Define colete do jogador.                        |
| `AddPlayerColetePROEnum(playerid, valor)`   | Adiciona colete.                                 |
| `RemovePlayerColeteEnumPRO(playerid, valor)`| Remove colete.                                  |
| `GetPlayerColeteEnumPRO(playerid)`           | Retorna colete atual.                            |

---

### Status de Login

| Função                            | Descrição                                    |
|-----------------------------------|----------------------------------------------|
| `DefinePlayerLogedEnumPRO(playerid, valor)` | Define status de login (logado/não).            |
| `RemovePlayerLogedEnumPRO(playerid, valor)` | Remove status de login.                          |
| `GetPlayerIsLogedEnumPRO(playerid)`          | Retorna status atual.                            |
| `DefinePlayerErrosLoginEnumPRO(playerid, valor)` | Define tentativas erradas de login.           |
| `AddPlayerErrosLoginEnumPRO(playerid, valor)`    | Adiciona tentativas erradas.                    |
| `RemovePlayerErrosLoginPRO(playerid, valor)`      | Remove tentativas erradas.                      |
| `GetPlayerErrosLoginEnumPRO(playerid)`            | Retorna tentativas atuais.                      |

---

### Posições 3D e Spawn

| Função                            | Descrição                                    |                                 |
|-------------------------------------------------------|----------------------------------------------|
| `DefinePlayerPos3DPRO(playerid, Float:x, Float:y, Float:z)` | Define posição do jogador.                       |
| `GetPlayerPos3DPRO(playerid, &Float:x, &Float:y, &Float:z)` | Obtém posição do jogador.                        |
| `DefinePlayerFindzPRO(playerid, Float:x, Float:y, Float:z)` | Define posição com cálculo automático do Z.    |
| `DefineSpawnPlayerPRO(playerid)`                         | Spawn do jogador.                              |
| `DefineSpawnInfoPRO(playerid, team, skin, x, y, z, rot, arma1, muni1, arma2, muni2, arma3, muni3)` | Define spawn completo.       |

---

### Manipulação de Dinheiro, Vida, Colete (funções SA-MP)

| Função                            | Descrição                                    |
|-----------------------------------|----------------------------------------------|
| `DefinePlayerMoneyPRO(playerid, valor)`        | Dá dinheiro (GivePlayerMoney).                 |
| `DefinePlayerHealthPRO(playerid, valor)`       | Define vida (SetPlayerHealth).                  |
| `DefinePlayerArmourPRO(playerid, valor)`       | Define colete (SetPlayerArmour).                |
| `DefinePlayerScorePRO(playerid, valor)`        | Define score (SetPlayerScore).                  |

---

### Bônus, Animações e Interiores

| Função                            | Descrição                                    |
|-----------------------------------|----------------------------------------------|
| `DesativeBonusForPlayerPRO(playerid, valor)`  | Ativa/desativa bônus para jogador.             |
| `DesativeBonusForAllPRO(valor)`                    | Ativa/desativa bônus para todos.              |
| `DesativeInteriosPRO()`                                | Desativa interiores e enter/exits.            |
| `UsePlayerAnimationsFixPRO()`                         | Corrige animações dos peds.                    |
| `DesativeTagLosFixPRO()`                               | Desativa LOS do nametag.                       |

---

### Skin, Armas e Spawn

| Função                            | Descrição                                    |
|-----------------------------------|----------------------------------------------|
| `DefinePlayerSkinPRO(playerid, skin_id)`          | Define skin do jogador.                         |
| `DefinePlayerWeaponPRO(playerid, arma_id, muni)`  | Dá arma com munição.                            |
| `RemovePlayerWeaponsPRO(playerid)`                 | Remove todas armas do jogador.                  |
| `DefineSpawnPlayerPRO(playerid)`                   | Spawn do jogador.                               |

---

### Veículos

| Função                            | Descrição                                    |
|-----------------------------------|----------------------------------------------|
| `DefinePlayerInVehiclePRO(playerid, veh_id, seat)` | Coloca jogador em veículo.                      |
| `DefineLinkInVehicleInteriorPRO(playerid, veh_id, seat)` | Linka veículo a interior.                  |
| `GetVehicleVirtualPos3DPRO(veh_id, &x, &y, &z)`   | Obtém posição do veículo.                      |
| `GetVehicleModelPRO(veh_id)`                        | Obtém modelo do veículo.                       |
| `GetVehicleVelocitePRO(veh_id)`                     | Obtém velocidade do veículo.                   |
| `DefineSelectVehiclePRO(veh_id)`                    | Seleciona veículo (função custom).             |
| `AddVehicleStaticPRO(veh_id, x, y, z, angle, c1, c2)` | Adiciona veículo estático.                  |
| `VehicleInvalidPRO(veh_id)`                          | Verifica veículo inválido.                      |
| `DestroyMyVehiclePRO(veh_id)`                        | Destroi veículo.                                |
| `ifPlayerInAnyVehiclePRO(playerid)`                  | Verifica se jogador está em qualquer veículo.  |
| `ifPlayerInVehiclePRO(playerid, veh_id)`             | Verifica se jogador está em veículo específico.|
| `ifPlayerInConnection(playerid)`                      | Verifica se jogador está conectado.             |

---

### Outras Utilidades

| Função                            | Descrição                                    |
|-----------------------------------|----------------------------------------------|
| `DefineSendRconCommandPRO(command)` | Envia comando RCON.                          |
| `InLoopRunInArrayPRO(i, array)`     | Loop com `for` para arrays (com `sizeof`).  |
| `DefineLoopPRO(i, start, end)`      | Loop simples `for` com intervalo definido.  |

---

### Cores padrão

```pawn
#define Definecor_vermelhoPRO 0xFF0000
#define Definecor_verdePRO   0xA1CB0B
#define Definecor_azulPRO    0x0048FF
#define Definecor_laranjaPRO 0xD16F00
#define Definecor_brancoPRO  0xFFFFFF
#define Definecor_roxoPRO    0x561C7D
```

---

## Exemplo completo de uso

```pawn
public OnPlayerConnect(playerid)
{
    DefinePlayerAdminLevelEnumPRO(playerid, 5);
    DefinePlayerGranaEnumPRO(playerid, 10000);
    DefineSendPlayerMessagePRO(playerid, Definecor_verdePRO, "Bem-vindo ao servidor!");
    DefinePlayerSkinPRO(playerid, 188); // Exemplo skin
    DefineSpawnPlayerPRO(playerid);
}
```

---

## Direitos Autorais e Licença

Esta include é de autoria exclusiva de **MALAK (Marcos Aurélio Oliveira Silva)** e licenciada sob a licença **MIT**.

É **proibido**:

- Remover créditos do autor.  
- Alegar coautoria ou autoria indevida.  
- Fazer modificações não autorizadas.  

Uso responsável e legal é obrigatório.

---

Para dúvidas, suporte e comunidade, acesse:  
- Curso oficial: https://pay.kiwify.com.br/msCeNOa  
- Discord oficial: https://discord.gg/VdFMF7rU9g  
- GitHub oficial: https://github.com/MALAKSAMP  

---

Obrigado por usar M_professional_PRO.inc!

---

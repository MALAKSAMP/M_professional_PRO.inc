
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

Esta include facilita a organização, padronização e manutenção do código, para maior flexibilidade e desempenho.

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

3. Utilize as funções para manipular informações do jogador, veículos, armas, mensagens e muito mais.  
4. Consulte a documentação abaixo para entender cada função

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
// Define o nível de admin do jogador 0 como 5
DefinePlayerAdminLevelEnumPRO(0, 5);

// Adiciona 1 nível de admin ao jogador 0
AddPlayerAdminLevelEnumPRO(0, 1);

// Obtém o nível de admin do jogador 0
new adminLevel = GetPlayerAdminLevelEnumPRO(0);

// Define o cargo do jogador 0 como 3
DefinePlayerCargoEnumPRO(0, 3);

// Remove 1 nível do cargo do jogador 0
RemovePlayerCargoEnumPRO(0, 1);

// Obtém o cargo atual do jogador 0
new cargo = GetPlayerCargoEnumPRO(0);

// Define o jogador 0 como líder da organização de ID 2
DefinePlayerLiderOrgEnumPRO(0, 2);

// Remove 1 valor do líder da organização do jogador 0
RemovePlayerLiderOrgEnumPRO(0, 1);

// Obtém o ID da organização que o jogador 0 lidera
new liderOrg = GetPlayerLiderOrgEnumPRO(0);

// Define a skin original do jogador 0 como 123
DefinePlayerSkinEnumPRO(0, 123);

// Obtém a skin original do jogador 0
new skinId = GetPlayerSkinEnumPRO(0);

// Define o level do jogador 0 como 10
DefinePlayerLevelEnumPRO(0, 10);

// Adiciona 2 levels ao jogador 0
AddPlayerLevelEnumPRO(0, 2);

// Remove 1 level do jogador 0
RemovePlayerLevelEnumPRO(0, 1);

// Obtém o level atual do jogador 0
new level = GetPlayerLevelEnumPRO(0);

// Define a EXP do jogador 0 como 500
DefinePlayerEXP_EnumPRO(0, 500);

// Adiciona 100 EXP ao jogador 0
AddPlayerEXP_EnumPRO(0, 100);

// Remove 50 EXP do jogador 0
RemovePlayerEXP_EnumPRO(0, 50);

// Obtém a EXP atual do jogador 0
new exp = GetPlayerEXP_EnumPRO(0);

// Define o dinheiro do jogador 0 para 10000
DefinePlayerGranaEnumPRO(0, 10000);

// Adiciona 500 ao dinheiro do jogador 0
AddPlayerGranaEnumPRO(0, 500);

// Remove 200 do dinheiro do jogador 0
RemovePlayerGranaEnumPRO(0, 200);

// Obtém o dinheiro atual do jogador 0
new dinheiro = GetPlayerGranaEnumPRO(0);

// Define coins do jogador 0 como 300
DefinePlayerCoinsEnumPRO(0, 300);

// Adiciona 50 coins ao jogador 0
AddPlayerCoinsEnumPRO(0, 50);

// Remove 20 coins do jogador 0
RemovePlayerCoinsEnumPRO(0, 20);

// Obtém coins atuais do jogador 0
new coins = GetPlayerCoinsEnumPRO(0);

// Define saldo do banco do jogador 0 como 15000
DefinePlayerSaldoBancoEnumPRO(0, 15000);

// Adiciona 1000 ao saldo do banco do jogador 0
AddPlayerSaldoBancoEnumPRO(0, 1000);

// Remove 500 do saldo do banco do jogador 0
RemovePlayerSaldoBancoEnumPRO(0, 500);

// Obtém saldo do banco atual do jogador 0
new saldoBanco = GetPlayerSaldoBancoEnumPRO(0);

// Define saldo do caixa do jogador 0 como 8000
DefinePlayerSaldoCaixaEnumPRO(0, 8000);

// Adiciona 300 ao saldo do caixa do jogador 0
AddPlayerSaldoCaixaEnumPRO(0, 300);

// Remove 100 do saldo do caixa do jogador 0
RemovePlayerSaldoCaixaEnumPRO(0, 100);

// Obtém saldo do caixa atual do jogador 0
new saldoCaixa = GetPlayerSaldoCaixaEnumPRO(0);

// Define a vida do jogador 0 como 100
DefinePlayerVidaEnumPRO(0, 100);

// Adiciona 20 de vida ao jogador 0
AddPlayerVidaEnumPRO(0, 20);

// Remove 10 de vida do jogador 0
RemovePlayerVidaEnumPRO(0, 10);

// Obtém a vida atual do jogador 0
new vida = GetPlayerVidaEnumPRO(0);

// Define o colete do jogador 0 como 50
DefinePlayerColeteEnumPRO(0, 50);

// Adiciona 10 ao colete do jogador 0
AddPlayerColetePROEnum(0, 10);

// Remove 5 do colete do jogador 0
RemovePlayerColeteEnumPRO(0, 5);

// Obtém o colete atual do jogador 0
new colete = GetPlayerColeteEnumPRO(0);

// Define o estado de login do jogador 0 para 1 (logado)
DefinePlayerLogedEnumPRO(0, 1);

// Remove o estado de login do jogador 0 (logoff)
RemovePlayerLogedEnumPRO(0, 1);

// Obtém o estado atual de login do jogador 0
new logado = GetPlayerIsLogedEnumPRO(0);

// Define tentativas de login do jogador 0 para 0
DefinePlayerErrosLoginEnumPRO(0, 0);

// Adiciona 1 tentativa de login errada para o jogador 0
AddPlayerErrosLoginEnumPRO(0, 1);

// Remove 1 tentativa de login errada para o jogador 0
RemovePlayerErrosLoginPRO(0, 1);

// Obtém o número de tentativas erradas do jogador 0
new errosLogin = GetPlayerErrosLoginEnumPRO(0);

// Define posição do jogador 0 (x, y, z)
DefinePlayerPos3DPRO(0, 1000.0, 2000.0, 30.0);

// Obtém posição do jogador 0
new Float:x, Float:y, Float:z;
GetPlayerPos3DPRO(0, x, y, z);

// Define dinheiro do jogador 0
DefinePlayerMoneyPRO(0, 5000);

// Define vida do jogador 0 (float)
DefinePlayerHealthPRO(0, 100.0);

// Define colete do jogador 0 (float)
DefinePlayerArmourPRO(0, 50.0);

// Define o score do jogador 0 como 10
DefinePlayerScorePRO(0, 10);

// Desativa bônus do tipo 1 para o jogador 0
DesativeBonusForPlayerPRO(0, 1);

// Desativa bônus do tipo 1 para todos
DesativeBonusForAllPRO(1);

// Desativa interiores
DesativeInteriosPRO();

// Corrige animações do jogador
UsePlayerAnimationsFixPRO();

// Obtém nome do jogador 0 (string)
new pName[MAX_PLAYER_NAME];
strcpy(pName, GetNamePro(0), sizeof(pName));

// Define skin do jogador 0 para 123
DefinePlayerSkinPRO(0, 123);

// Dá arma 24 com 100 balas para o jogador 0
DefinePlayerWeaponPRO(0, 24, 100);

// Remove todas as armas do jogador 0
RemovePlayerWeaponsPRO(0);

// Respawna jogador 0
DefineSpawnPlayerPRO(0);

// Define informações completas de spawn
DefineSpawnInfoPRO(0, 1, 123, 1000.0, 2000.0, 20.0, 0.0, 24, 100, 25, 200, 0, 0);

```

### Enviar mensagem para o jogador

```pawn
DefineSendPlayerMessagePRO(0, Definecor_verdePRO, "Bem-vindo ao servidor!");
```

---

## Documentação das Funções

### Admin

| Função                                | Descrição                                |
|---------------------------------------|------------------------------------------|
| `DefinePlayerAdminLevelEnumPRO(playerid, valor)` | Define o nível de admin do jogador.       |
| `AddPlayerAdminLevelEnumPRO(playerid, valor)`    | Adiciona ao nível de admin.                |
| `GetPlayerAdminLevelEnumPRO(playerid)`           | Retorna o nível atual de admin.            |

---

### Cargo

| Função                                | Descrição                                |
|---------------------------------------|------------------------------------------|
| `DefinePlayerCargoEnumPRO(playerid, valor)` | Define cargo do jogador.                  |
| `RemovePlayerCargoEnumPRO(playerid, valor)` | Remove do cargo do jogador.               |
| `GetPlayerCargoEnumPRO(playerid)`               | Retorna cargo atual.                      |

---

### Líder de Organização

| Função                                | Descrição                                    |
|-----------------------------------------|--------------------------------------------|
| `DefinePlayerLiderOrgEnumPRO(playerid, idorg)` | Define ID da organização do líder.          |
| `RemovePlayerLiderOrgEnumPRO(playerid, valor)` | Remove valor do líder.                      |
| `GetPlayerLiderOrgEnumPRO(playerid)`               | Retorna ID do líder.                        |

---

### Skin

| Função                                | Descrição                                |
|-----------------------------------|----------------------------------------------|
| `DefinePlayerSkinEnumPRO(playerid, skinid)` | Define skin original do jogador.               |
| `GetPlayerSkinEnumPRO(playerid)`           | Retorna skin original.                         |
| `DefinePlayerSkinPRO(playerid, skin_id)`   | Altera a skin atual (SetPlayerSkin).           |

---

### Level

| Função                                | Descrição                                |
|-----------------------------------|----------------------------------------------|
| `DefinePlayerLevelEnumPRO(playerid, valor)` | Define o nível do jogador.                      |
| `AddPlayerLevelEnumPRO(playerid, valor)`    | Adiciona valor ao nível.                         |
| `RemovePlayerLevelEnumPRO(playerid, valor)` | Remove valor do nível.                           |
| `GetPlayerLevelEnumPRO(playerid)`           | Retorna nível atual.                             |

---

### Experiência (EXP)

| Função                                | Descrição                                |
|-----------------------------------|----------------------------------------------|
| `DefinePlayerEXP_EnumPRO(playerid, valor)` | Define a experiência do jogador.                 |
| `AddPlayerEXP_EnumPRO(playerid, valor)`    | Adiciona experiência.                            |
| `RemovePlayerEXP_EnumPRO(playerid, valor)` | Remove experiência.                              |
| `GetPlayerEXP_EnumPRO(playerid)`           | Retorna experiência atual.                       |

---

### Dinheiro (Grana)

| Função                                | Descrição                                |
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

| Função                                | Descrição                                    |
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

| Função                                                | Descrição                                    |
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

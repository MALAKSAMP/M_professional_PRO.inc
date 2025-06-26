# Gerando o arquivo README.md com a documentação completa no formato markdown
conteudo_readme = """
# M_professional_PRO.inc

**Autor:** MALAK (Marcos Aurélio Oliveira Silva)  
**Licença:** MIT – Proibido remover os créditos ou alegar coautoria  
**Última atualização:** 23/06/2025  
**Curso oficial:** [https://pay.kiwify.com.br/msCeNOa](https://pay.kiwify.com.br/msCeNOa)  
**Discord:** [https://discord.gg/VdFMF7rU9g](https://discord.gg/VdFMF7rU9g)  
**GitHub:** [https://github.com/MALAKSAMP](https://github.com/MALAKSAMP)  

---

## Índice

- [Sobre](#sobre)  
- [Avisos Importantes](#avisos-importantes)  
- [Instalação](#instalação)  
- [Como Usar](#como-usar)  
  - [Admin Level](#admin-level)  
  - [Cargo](#cargo)  
  - [Líder de Organização](#líder-de-organização)  
  - [Skin](#skin)  
  - [Level, EXP, Grana e Coins](#level-exp-grana-e-coins)  
  - [Banco e Caixa](#banco-e-caixa)  
  - [Vida e Colete](#vida-e-colete)  
  - [Status de Login](#status-de-login)  
  - [Posição 3D](#posição-3d)  
  - [Player Money, Health e Armour](#player-money-health-e-armour)  
  - [Armas, Spawn, Veículos e Outras Funções](#armas-spawn-veículos-e-outras-funções)  
  - [Macros de Cores](#macros-de-cores)  
  - [Funções Auxiliares](#funções-auxiliares)  

---

## Sobre

Esta include contém um conjunto avançado de funções e macros para facilitar a manipulação de dados comuns de jogadores e veículos no SA-MP. Ela foi desenvolvida para uso profissional, visando organização e otimização do código em scripts Pawn.

---

## Avisos Importantes

- Este arquivo está protegido por direitos autorais sob a licença MIT.  
- É **PROIBIDO** remover os créditos do autor ou alegar coautoria.  
- O autor **NÃO ACEITA** colaborações externas para este projeto.  
- Qualquer modificação não autorizada será considerada de má-fé e ilegal.  
- Não altere o código se não compreender completamente seu funcionamento para evitar bugs.  
- Utilize de forma legal e respeitando a autoria.  

---

## Instalação

1. Baixe a include `M_professional_PRO.inc` do repositório oficial ou do curso.  
2. Coloque o arquivo na pasta de includes do seu projeto SA-MP.  
3. Inclua no seu script principal:  
```pawn
#include <M_professional_PRO.inc>
Como Usar
Admin Level
pawn
Sempre exibir os detalhes

Copiar
DefinePlayerAdminLevelEnumPRO(playerid, quantidade_de_levels_admin);
AddPlayerAdminLevelEnumPRO(playerid, quantidade_de_levels_admin);
GetPlayerAdminLevelEnumPRO(playerid);
Define, adiciona e obtém o nível admin do jogador.

Cargo
pawn
Sempre exibir os detalhes

Copiar
DefinePlayerCargoEnumPRO(playerid, quantidade_de_levels_cargo);
RemovePlayerCargoEnumPRO(playerid, quantidade_de_levels_cargo);
GetPlayerCargoEnumPRO(playerid);
Define, remove e obtém o cargo do jogador.

Líder de Organização
pawn
Sempre exibir os detalhes

Copiar
DefinePlayerLiderOrgEnumPRO(playerid, idorg);
RemovePlayerLiderOrgEnumPRO(playerid, remover_valor);
GetPlayerLiderOrgEnumPRO(playerid);
Define, remove e obtém o status de líder de organização do jogador.

Skin
pawn
Sempre exibir os detalhes

Copiar
DefinePlayerSkinEnumPRO(playerid, skinid);
GetPlayerSkinEnumPRO(playerid);
Define e obtém o skin original do jogador.

Level, EXP, Grana e Coins
pawn
Sempre exibir os detalhes

Copiar
// Level
DefinePlayerLevelEnumPRO(playerid, quantidade_de_levels);
AddPlayerLevelEnumPRO(playerid, quantidade_de_levels);
RemovePlayerLevelEnumPRO(playerid, quantidade);
GetPlayerLevelEnumPRO(playerid);

// EXP
DefinePlayerEXP_EnumPRO(playerid, quantidade_de_exp);
AddPlayerEXP_EnumPRO(playerid, quantidade_de_exp);
RemovePlayerEXP_EnumPRO(playerid, quantidade_de_exp);
GetPlayerEXP_EnumPRO(playerid);

// Grana
DefinePlayerGranaEnumPRO(playerid, quantidade_de_grana);
AddPlayerGranaEnumPRO(playerid, quantidade_de_grana);
RemovePlayerGranaEnumPRO(playerid, quantidade);
GetPlayerGranaEnumPRO(playerid);

// Coins
DefinePlayerCoinsEnumPRO(playerid, quantidade_de_coins);
AddPlayerCoinsEnumPRO(playerid, quantidade_de_coins);
RemovePlayerCoinsEnumPRO(playerid, quantidade);
GetPlayerCoinsEnumPRO(playerid);
Gerenciamento de níveis, experiência, dinheiro e moedas do jogador.

Banco e Caixa
pawn
Sempre exibir os detalhes

Copiar
// Saldo Banco
DefinePlayerSaldoBancoEnumPRO(playerid, quantidade);
AddPlayerSaldoBancoEnumPRO(playerid, quantidade);
RemovePlayerSaldoBancoEnumPRO(playerid, quantidade);
GetPlayerSaldoBancoEnumPRO(playerid);

// Saldo Caixa
DefinePlayerSaldoCaixaEnumPRO(playerid, quantidade);
AddPlayerSaldoCaixaEnumPRO(playerid, quantidade);
RemovePlayerSaldoCaixaEnumPRO(playerid, quantidade);
GetPlayerSaldoCaixaEnumPRO(playerid);
Controle financeiro no banco e no caixa para jogadores.

Vida e Colete
pawn
Sempre exibir os detalhes

Copiar
// Vida
DefinePlayerVidaEnumPRO(playerid, quantidade_de_vida);
AddPlayerVidaEnumPRO(playerid, quantidade_de_vida);
RemovePlayerVidaEnumPRO(playerid, quantidade);
GetPlayerVidaEnumPRO(playerid);

// Colete
DefinePlayerColeteEnumPRO(playerid, quantidade_de_colete);
AddPlayerColetePROEnum(playerid, quantidade_de_colete);
RemovePlayerColeteEnumPRO(playerid, quantidade);
GetPlayerColeteEnumPRO(playerid);
Manipulação da vida e do colete do jogador.

Status de Login
pawn
Sempre exibir os detalhes

Copiar
DefinePlayerLogedEnumPRO(playerid, valor);
RemovePlayerLogedEnumPRO(playerid, valor);
GetPlayerIsLogedEnumPRO(playerid);

DefinePlayerErrosLoginEnumPRO(playerid, valor);
AddPlayerErrosLoginEnumPRO(playerid, valor);
RemovePlayerErrosLoginPRO(playerid, valor);
GetPlayerErrosLoginEnumPRO(playerid);
Controle de status de login e tentativas de login do jogador.

Posição 3D
pawn
Sempre exibir os detalhes

Copiar
DefinePlayerPos3DPRO(playerid, Float:x, Float:y, Float:z);
GetPlayerPos3DPRO(playerid, &Float:x, &Float:y, &Float:z);
DefinePlayerFindzPRO(playerid, Float:x, Float:y, Float:z);
Define e obtém a posição 3D do jogador, incluindo ajuste FindZ.

Player Money, Health e Armour
pawn
Sempre exibir os detalhes

Copiar
DefinePlayerMoneyPRO(playerid, quantidade_de_money);
DefinePlayerHealthPRO(playerid, quantidade_de_vida_f);
DefinePlayerArmourPRO(playerid, quantidade_de_colete_value_f);
DefinePlayerScorePRO(playerid, quantidade_de_score);
Define dinheiro, vida, colete e score do jogador.

Armas, Spawn, Veículos e Outras Funções
pawn
Sempre exibir os detalhes

Copiar
DefinePlayerSkinPRO(playerid, skin_id);
DefinePlayerWeaponPRO(playerid, arma_id, municoes);
RemovePlayerWeaponsPRO(playerid);
DefineSpawnPlayerPRO(playerid);
DefineSpawnInfoPRO(playerid, team, skinid, x, y, z, rot, arma1, mun1, arma2, mun2, arma3, mun3);
DefineInitializeAntBugJumpPRO(playerid, &x, &y, &z);
DefineAntBugJumpPRO(playerid, &x, &y, &z);

DefineSendPlayerMessagePRO(playerid, color, string);
DefineSendMessageToAllPRO(color, string);

DefineTextGameForAllPRO(string, tempo, style);
DefineTextGameForPlayerPRO(playerid, string, tempo, style);

DefinePlayerInVehiclePRO(playerid, veh_id, seatid);
DefineLinkInVehicleInteriorPRO(playerid, veh_id, seatid);

GetVehicleVirtualPos3DPRO(veh_id, &x, &y, &z);
GetVehicleModelPRO(veh_id);
GetVehicleVelocitePRO(veh_id);

DefineSelectVehiclePRO(veh_id);
AddVehicleStaticPRO(veh_id, x, y, z, z_angle, color1, color2);

VehicleInvalidPRO(veh_id);
DestroyMyVehiclePRO(veh_id);

ifPlayerInAnyVehiclePRO(playerid);
ifPlayerInVehiclePRO(playerid, veh_id);
ifPlayerInConnection(playerid);

DefineSendRconCommandPRO(comando);
Diversas funções para manipulação avançada de armas, spawn, veículos, mensagens, e comandos RCON.

Macros de Cores
pawn
Sempre exibir os detalhes

Copiar
#define Definecor_vermelhoPRO 0xFF0000
#define Definecor_verdePRO 0xA1CB0B
#define Definecor_azulPRO 0x0048FF
#define Definecor_laranjaPRO 0xD16F00
#define Definecor_brancoPRO 0xFFFFFF
#define Definecor_roxoPRO 0x561C7D
Códigos de cores para uso em mensagens e interfaces.

Funções Auxiliares
pawn
Sempre exibir os detalhes

Copiar
stock GetNamePro(playerid) {   
    new pNamePro[MAX_PLAYER_NAME];
    GetPlayerName(playerid, pNamePro, sizeof(pNamePro));
    return pNamePro;
}
Função para obter o nome do jogador.

Exemplos de Uso
pawn
Sempre exibir os detalhes

Copiar
// Definir admin level do jogador 0 para 3
DefinePlayerAdminLevelEnumPRO(0, 3);

// Adicionar 100 coins para jogador 1
AddPlayerCoinsEnumPRO(1, 100);

// Enviar mensagem para todos
DefineSendMessageToAllPRO(Definecor_verdePRO, "Bem-vindo ao servidor!");

// Spawnar jogador 0 na equipe 1 com skin 45
DefineSpawnInfoPRO(0, 1, 45, 1000.0, 1000.0, 10.0, 0.0, 22, 50, 24, 100, 0, 0);
DefineSpawnPlayerPRO(0);
Contato e Suporte
Para dúvidas, suporte e comunidade, acesse:

Curso oficial: https://pay.kiwify.com.br/msCeNOa

Discord oficial: https://discord.gg/VdFMF7rU9g

GitHub oficial: https://github.com/MALAKSAMP

Contribuição
Não são aceitas contribuições externas.
Para evitar bugs e problemas, utilize o código como está, respeitando a licença e autoria.

"""

caminho_arquivo = "/mnt/data/README_M_professional_PRO.inc.md"

with open(caminho_arquivo, "w", encoding="utf-8") as f:
f.write(conteudo_readme)

caminho_arquivo

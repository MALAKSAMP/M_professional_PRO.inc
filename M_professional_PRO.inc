/*
===============================================================================
  M_professional_PRO.inc
===============================================================================

📌 Desenvolvido por: Marcos Aurélio Oliveira Silva (conhecido como MALAK)
📆 Data de Criação: Junho de 2025
📌 Discord Oficial da Comunidade: https://discord.gg/VdFMF7rU9g
📌 Curso Profissional de PAWN SA-MP: https://pay.kiwify.com.br/msCeNOa

🔒 Todos os direitos reservados. Proibido remover ou alterar os créditos.
Autor original e mantenedor oficial: MALAK (M de Marcos / MALAK)

===============================================================================
📘 SOBRE O NOME "M_professional_PRO"
===============================================================================

O nome desta include foi escolhido com significado:

  🔹 **M** = Marcos (meu nome real) e MALAK (meu nome na comunidade)
  🔹 **professional** = Representa o padrão profissional de codificação
  🔹 **PRO** = Sigla de "Profissional", enfatizando que esta include segue
               as práticas mais avançadas e organizadas disponíveis no PAWN

Assim, "M_professional_PRO" é um pacote oficial, criado por um desenvolvedor
experiente, com objetivo de elevar o nível de código dentro do SA-MP.

===============================================================================
📘 SOBRE O AUTOR - QUEM É MALAK
===============================================================================

Sou Marcos Aurélio Oliveira Silva, conhecido como **MALAK**.
Atuo com PAWN desde 2017, com experiência profunda em criação de GMs, sistemas
modulares, HUDs, bancos de dados, sistemas anti-hack e estruturação completa
de servidores RP e freeroam de alto nível.

Criei bibliotecas como "Traduza LGE", já trabalhei com GMs de grandes portes e
hoje ensino de forma acessível e didática através do meu curso oficial:

👉 https://pay.kiwify.com.br/msCeNOa

===============================================================================
🎓 SOBRE O CURSO MALAK PAWN PROFESSIONAL
===============================================================================

🔗 Curso Profissional de PAWN SA-MP
📆 Criado e mantido desde 2024
📚 +70 Aulas organizadas em módulos
🛠️ Conteúdo voltado ao mundo real de servidores e desenvolvimento profissional

✅ Ensina:
- Fundamentos da linguagem PAWN
- Sistemas completos (administração, inventário, banco, HUD, etc)
- GMs modulares e separadas em arquivos lógicos
- Game hacking e segurança avançada
- Otimização e performance
- Estratégias que te ajudam em qualquer linguagem (C, JS, Lua, Python...)

📘 Links fixos e oficiais:
🔗 Curso: https://pay.kiwify.com.br/msCeNOa
🔗 Comunidade Discord: https://discord.gg/VdFMF7rU9g

===============================================================================
📦 SOBRE A INCLUDE M_professional_PRO.inc
===============================================================================

Esta include é um pacote de macros reutilizáveis, que facilitam o acesso a dados,
controle de lógica, exibição de mensagens e validações. Tudo isso de forma clara,
segura e padronizada.

📌 Vantagens:
- Código limpo e reutilizável
- Maior produtividade
- Fácil manutenção
- Melhora a leitura e o entendimento do código

===============================================================================
🔍 COMPREENDENDO OS PARÂMETROS %0, %1, %2...
===============================================================================

Quando usamos `#define` em PAWN para criar uma macro com parâmetros, usamos `%0`, `%1`, `%2`, etc.
Eles funcionam como **variáveis temporárias** que o compilador substitui diretamente no texto do código.

🧠 Como funciona na prática:

    #define AddSaldoCaixa(%0,%1) infos_caixas[%0][SaldoCaixa] += %1

Quando você escreve:

    AddSaldoCaixa(playerid, 1000);

🔄 O compilador literalmente substitui a linha por:

    infos_caixas[playerid][SaldoCaixa] += 1000;

➡️ Isso acontece **antes da compilação real**.
Macros são substituídas em tempo de pré-processamento, ou seja, o compilador nem vê "AddSaldoCaixa" no final:
ele vê somente o código expandido, como se você tivesse escrito diretamente a lógica.

📌 %0 → primeiro argumento
📌 %1 → segundo argumento
📌 %2 → terceiro argumento (se houver), e assim por diante

💡 Não é possível nomear esses parâmetros. Eles **seguem a ordem** de passagem.

📌 Exemplo real:

    #define CompararSaldoCaixa(%0,%1) infos_caixas[%0][SaldoCaixa] != %1
    CompararSaldoCaixa(3, 5000); → vira: infos_caixas[3][SaldoCaixa] != 5000

🔒 Isso ajuda a evitar repetição, reduz erro humano e melhora legibilidade.

===============================================================================
🔧 LISTA DE MACROS E O QUE CADA UMA FAZ
===============================================================================

(continua com a lista completa de macros...)





===============================================================================
📘 EXPLICAÇÃO COMPLETA DOS PARÂMETROS %0, %1, %2... E ESTRUTURAS COMO player_infos
===============================================================================

🧩 O QUE SÃO %0, %1, %2 EM MACROS?

No PAWN, ao criar uma macro com `#define`, você pode usar parâmetros posicionais.

Exemplo:

    #define AddXP(%0, %1) player_infos[%0][pXP] += %1

- %0 → representa o primeiro valor passado na chamada (ex: o playerid)
- %1 → representa o segundo valor (ex: a quantidade de XP)

Essa macro **não é uma função real**. É apenas uma **substituição de texto** feita
pelo **pré-processador** do compilador PAWN antes da compilação real acontecer.

🧠 COMO FUNCIONA NO CÓDIGO?

Exemplo de uso:

    AddXP(playerid, 50);

O compilador PAWN **substitui literalmente** essa linha por:

    player_infos[playerid][pXP] += 50;

Ou seja, o compilador vê como se você tivesse escrito essa linha diretamente.

-------------------------------------------------------------------------------
📦 POR QUE USAMOS player_infos?

Em servidores organizados e profissionais, é comum **centralizar os dados** de cada jogador
em uma **estrutura de array baseada em enum**. Isso evita declarar 20 variáveis separadas
por jogador.

📌 Exemplo real:

    enum E_PLAYER
    {
        pID,
        pNome[24],
        pXP,
        pLevel,
        pSaldoBanco,
        pOrganizacao,
        pCargo,
        pSkinOrg,
        pLogado
        // etc...
    };

    new player_infos[MAX_PLAYERS][E_PLAYER];

Agora, player_infos[playerid][pXP] representa os pontos de XP de um jogador.
Você pode acessar qualquer informação do jogador apenas com:

    player_infos[playerid][pSaldoBanco]
    player_infos[playerid][pOrganizacao]
    player_infos[playerid][pLogado]

✅ Isso é muito melhor do que usar 50 variáveis separadas.

-------------------------------------------------------------------------------
🔧 COMO ISSO SE CONECTA COM AS MACROS?

As macros que usam %0 e %1 se tornam **atalhos** para acessar essa estrutura
de forma mais rápida e legível.

📌 Exemplo avançado:

    #define GetSaldoBanco(%0) player_infos[%0][pSaldoBanco]
    #define AddSaldoBanco(%0,%1) player_infos[%0][pSaldoBanco] += %1
    #define TemPermissao(%0,%1) player_infos[%0][pCargo] >= %1

Com isso, ao usar:

    AddSaldoBanco(playerid, 1000);

Você não precisa lembrar da estrutura inteira. Fica limpo, bonito e padronizado.

-------------------------------------------------------------------------------
⚙️ COMO O COMPILADOR INTERPRETA?

Passo a passo técnico:

1. Você escreve no código:
       AddSaldoBanco(playerid, 1000);

2. O **pré-processador** do compilador procura macros definidas com #define.

3. Ele encontra:
       #define AddSaldoBanco(%0,%1) player_infos[%0][pSaldoBanco] += %1

4. Ele substitui os valores:
       %0 = playerid
       %1 = 1000

5. O compilador enxerga:
       player_infos[playerid][pSaldoBanco] += 1000;

6. Agora sim ele compila o código como se tivesse sido escrito assim originalmente.

-------------------------------------------------------------------------------
🛡️ RESUMO DAS VANTAGENS:

✅ Padroniza o código do seu servidor  
✅ Facilita leitura, debug e manutenção  
✅ Evita erros como digitar [pSaldo] errado  
✅ Permite você alterar a estrutura inteira depois — mudando só o define  
✅ Usado em GMs profissionais e times grandes com vários devs

-------------------------------------------------------------------------------
📘 DICA PRO:

Você pode criar **grupos de defines** para:
- Banco
- Organização
- Inventário
- Vida / Colete
- Admin
- HUD
- e muito mais!

Sempre comece com Get, Set, Add, Sub, Tem, Is, Mostrar, Atualizar, etc.
Isso cria um padrão intuitivo e ajuda qualquer outro dev a entender sua GM rapidamente.

===============================================================================
FIM DA EXPLICAÇÃO
===============================================================================
*/


/*
===============================================================================
M_professional_PRO.inc
Include profissional para SA-MP - macros para servidores Roleplay COMPLETO
Autor: Marcos Aurélio Oliveira Silva (MALAK)
Discord: https://discord.gg/VdFMF7rU9g
Curso: https://pay.kiwify.com.br/msCeNOa
Data: Junho 2025
===============================================================================
*/



//-------------funçoes abaixo.----------------//




/* ========== JOGADOR / CONTA ========== */
#define GetPlayerID(%0) player_infos[%0][pID]
#define IsLogado(%0) player_infos[%0][pLogado] == true
#define GetNivel(%0) player_infos[%0][pNivel]
#define TemPermissao(%0,%1) (player_infos[%0][pPermissao] >= %1)
#define EstaPreso(%0) player_infos[%0][pPreso] == true
#define GetPlayerXP(%0) player_infos[%0][pXP]
#define AddPlayerXP(%0,%1) player_infos[%0][pXP] += %1
#define SetPlayerLevel(%0,%1) player_infos[%0][pNivel] = %1
#define GetPlayerGrana(%0) player_infos[%0][pGrana]
#define AddPlayerGrana(%0,%1) player_infos[%0][pGrana] += %1
#define RemovePlayerGrana(%0,%1) player_infos[%0][pGrana] -= %1

/* ========== ADMINISTRAÇÃO / STAFF ========== */
#define IsAdmin(%0) player_infos[%0][pAdmin] >= 1
#define IsHelper(%0) player_infos[%0][pHelper] >= 1
#define AdminLevel(%0) player_infos[%0][pAdmin]
#define PodeUsarComandoAdmin(%0,%1) (IsAdmin(%0) && AdminLevel(%0) >= %1)
#define IsMod(%0) player_infos[%0][pMod] >= 1
#define IsSuperAdmin(%0) (player_infos[%0][pAdmin] == 5)

/* ========== ORGANIZAÇÃO / FACÇÃO ========== */
#define GetOrg(%0) player_infos[%0][pOrganizacao]
#define IsMembroOrg(%0,%1) player_infos[%0][pOrganizacao] == %1
#define GetCargo(%0) player_infos[%0][pCargo]
#define IsLider(%0) (player_infos[%0][pCargo] == 10)
#define IsSubLider(%0) (player_infos[%0][pCargo] == 9)
#define GetSkinOrg(%0) player_infos[%0][pSkinOrg]
#define PodeRecrutar(%0) (IsLider(%0) || IsSubLider(%0))

/* ========== SISTEMA FINANCEIRO ========== */
#define GetSaldoBanco(%0) player_infos[%0][pSaldoBanco]
#define SetSaldoBanco(%0,%1) player_infos[%0][pSaldoBanco] = %1
#define AddSaldoBanco(%0,%1) player_infos[%0][pSaldoBanco] += %1
#define SubSaldoBanco(%0,%1) player_infos[%0][pSaldoBanco] -= %1
#define TemDinheiroBanco(%0,%1) (player_infos[%0][pSaldoBanco] >= %1)
#define GetSaldoCaixa(%0) infos_caixas[%0][SaldoCaixa]
#define AddSaldoCaixa(%0,%1) infos_caixas[%0][SaldoCaixa] += %1
#define SetSaldoCaixa(%0,%1) infos_caixas[%0][SaldoCaixa] = %1
#define RemoveSaldoCaixa(%0,%1) infos_caixas[%0][SaldoCaixa] -= %1
#define CompararSaldoCaixa(%0,%1) (infos_caixas[%0][SaldoCaixa] != %1)

/* ========== VEÍCULOS ========== */
#define GetVeiculoID(%0) veiculos[%0][vID]
#define GetVeiculoDono(%0) veiculos[%0][vDono]
#define IsVeiculoDePlayer(%0,%1) (veiculos[%0][vDono] == %1)
#define GetVeiculoOrg(%0) veiculos[%0][vOrganizacao]
#define IsVeiculoOrg(%0,%1) (veiculos[%0][vOrganizacao] == %1)
#define GetVeiculoModelo(%0) veiculos[%0][vModelo]
#define IsVeiculoLigado(%0) veiculos[%0][vLigado] == true

/* ========== INVENTÁRIO ========== */
#define TemItem(%0,%1) (inventario[%0][%1] >= 1)
#define AddItem(%0,%1,%2) (inventario[%0][%1] += %2)
#define RemoverItem(%0,%1,%2) (inventario[%0][%1] -= %2)
#define SetarItem(%0,%1,%2) (inventario[%0][%1] = %2)
#define ResetarItem(%0,%1) (inventario[%0][%1] = 0)
#define GetItem(%0,%1) inventario[%0][%1]
#define TemEspacoItem(%0,%1,%2) ((inventario[%0][%1] + %2) <= MAX_ITEM_STACK)

/* ========== HUD / TEXTDRAWS ========== */
#define MostrarHUD(%0) ShowPlayerTextDraw(%0, hud_player[%0])
#define EsconderHUD(%0) HidePlayerTextDraw(%0, hud_player[%0])
#define AtualizarHUD(%0) AtualizarTextoHUD(%0)
#define MostrarTextoHUD(%0,%1) ShowPlayerTextDraw(%0, %1)
#define EsconderTextoHUD(%0,%1) HidePlayerTextDraw(%0, %1)

/* ========== MENSAGENS ========== */
#define MostrarErro(%0,%1) SendClientMessage(%0, COR_ERRO, %1)
#define MostrarSucesso(%0,%1) SendClientMessage(%0, COR_SUCESSO, %1)
#define EnviarMsgEquipe(%0,%1) EnviarMensagemEquipe(%0, %1)
#define EnviarMsgOrg(%0,%1) EnviarMensagemOrganizacao(%0, %1)
#define EnviarMsgAdmin(%0,%1) EnviarMensagemAdmins(%0, %1)
#define EnviarMsgGlobal(%1) SendClientMessageToAll(COR_GLOBAL, %1)
#define EnviarMsgPrivada(%0,%1) SendClientMessage(%0, COR_PRIVADA, %1)

/* ========== SEGURANÇA / ANTI-CHEAT ========== */
#define IsVidaInvalida(%0) (GetPlayerHealthEx(%0) > 100.0 || GetPlayerHealthEx(%0) < 0.0)
#define IsArmaInvalida(%0) (GetPlayerWeapon(%0) > 46 || GetPlayerWeapon(%0) < 0)
#define IsVelocidadeSuspeita(%0,%1) (GetPlayerSpeed(%0) > %1)
#define IsTeleportHack(%0,%1,%2,%3) (!IsPlayerInRangeOfPoint(%0, 5.0, %1, %2, %3))
#define IsPlayerGodMode(%0) (GetPlayerHealthEx(%0) == 1000.0)
#define IsPlayerNoclip(%0) (player_infos[%0][pNoclip] == true)
#define EstaDigitandoSenha(%0) (player_infos[%0][pDigitandoSenha] == true)
#define EstaTeleportando(%0) (player_infos[%0][pTP] == true)
#define ComandoTravado(%0) (player_infos[%0][pTravado] == true)
#define TravarComando(%0) (player_infos[%0][pTravado] = true)
#define DestravarComando(%0) (player_infos[%0][pTravado] = false)

/* ========== SISTEMA DE COOLDOWNS / TIMERS ========== */
#define Agora() gettime()
#define PassouSegundos(%0,%1) (Agora() - %0 >= %1)
#define SetCooldown(%0,%1,%2) (player_infos[%0][%1] = Agora() + %2)
#define PodeUsar(%0,%1) (Agora() >= player_infos[%0][%1])

/* ========== ANIMAÇÕES ========== */
#define TocarAnim(%0,%1,%2,%3) ApplyAnimation(%0, %1, %2, 4.0, 0, 0, 0, 0, %3)
#define PararAnim(%0) ClearAnimations(%0)
#define EstaAnimando(%0) (player_infos[%0][pAnimando] == true)
#define SetAnimando(%0,%1) (player_infos[%0][pAnimando] = %1)

/* ========== SISTEMA MODULAR ========== */
#define SistemaAtivo(%0) (system_flags[%0] == true)
#define AtivarSistema(%0) (system_flags[%0] = true)
#define DesativarSistema(%0) (system_flags[%0] = false)

/* ========== ESTATÍSTICAS / RANKING ========== */
#define GetKills(%0) player_infos[%0][pMatou]
#define GetDeaths(%0) player_infos[%0][pMorreu]
#define GetKDRatio(%0) floatdiv(player_infos[%0][pMatou], player_infos[%0][pMorreu])

/* ========== UTILITÁRIOS GERAIS ========== */
#define IsInBounds(%0,%1,%2) ((%0) >= (%1) && (%0) <= (%2))
#define ValidPlayer(%0) ((%0) >= 0 && (%0) < MAX_PLAYERS && IsPlayerConnected(%0))
#define IsDigit(%0) ((%0) >= '0' && (%0) <= '9')
#define FormatMsg(%0,%1,%2) format(%0, sizeof(%0), %1, %2)
#define FormatMsg2(%0,%1,%2,%3) format(%0, sizeof(%0), %1, %2, %3)

/* ========== LOCALIZAÇÃO E MUNDO ========== */
#define GetInterior(%0) GetPlayerInterior(%0)
#define GetVirtualWorld(%0) GetPlayerVirtualWorld(%0)
#define SetVW(%0,%1) SetPlayerVirtualWorld(%0,%1)
#define IsNoMesmoMundo(%0,%1) (GetPlayerVirtualWorld(%0) == GetPlayerVirtualWorld(%1))
#define EstaNoInterior(%0,%1) (GetPlayerInterior(%0) == %1)
#define GetPosPlayer(%0,%1,%2,%3) GetPlayerPos(%0, %1, %2, %3)
#define GetPlayerPosX(%0) (Float:x; GetPlayerPos(%0, x, _, _); return x)
#define GetPlayerPosY(%0) (Float:y; GetPlayerPos(%0, _, y, _); return y)
#define GetPlayerPosZ(%0) (Float:z; GetPlayerPos(%0, _, _, z); return z)

/* ========== VEÍCULOS - CONTROLE AVANÇADO ========== */
#define GetVeiculoPlayer(%0) GetPlayerVehicleID(%0)
#define EstaNoVeiculo(%0) IsPlayerInAnyVehicle(%0)
#define EstaNoCarro(%0,%1) (GetPlayerVehicleID(%0) == %1)
#define EstaNoBancoMotorista(%0) (GetPlayerVehicleSeat(%0) == 0)

/* ========== SISTEMA DE CHAT PROFISSIONAL ========== */
#define EnviarMsgEquipe(%0,%1) EnviarMensagemEquipe(%0, %1)
#define EnviarMsgOrg(%0,%1) EnviarMensagemOrganizacao(%0, %1)
#define EnviarMsgAdmin(%0,%1) EnviarMensagemAdmins(%0, %1)
#define EnviarMsgGlobal(%1) SendClientMessageToAll(COR_GLOBAL, %1)

/* ========== DEBUG / MODO TESTE ========== */
#define ModoDebug(%0) (player_infos[%0][pDebug] == true)
#define AtivarDebug(%0) (player_infos[%0][pDebug] = true)
#define DesativarDebug(%0) (player_infos[%0][pDebug] = false)
#define PrintDebug(%0,%1) if(ModoDebug(%0)) printf("[DEBUG] %s", %1)

/* ========== VARIÁVEIS DINÂMICAS ========== */
#define GetVar(%0,%1) player_infos[%0][%1]
#define SetVar(%0,%1,%2) player_infos[%0][%1] = %2
#define AddVar(%0,%1,%2) player_infos[%0][%1] += %2
#define SubVar(%0,%1,%2) player_infos[%0][%1] -= %2

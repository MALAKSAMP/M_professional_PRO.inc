# M_professional_PRO.inc

**Autor:** MALAK (Marcos Aurélio Oliveira Silva)  
**Licença:** MIT (Proibido remover créditos ou alegar coautoria)  
**Última atualização:** 26/06/2025  
**Curso oficial:** https://pay.kiwify.com.br/msCeNOa  
**Discord:** https://discord.gg/VdFMF7rU9g  
**GitHub:** https://github.com/MALAKSAMP  

---

## Introdução

M_professional_PRO.inc é uma include profissional e moderna para SA-MP, feita para programadores que desejam otimizar o desenvolvimento de sistemas organizados, padronizados e com performance elevada.

Ela oferece diversas funções para manipulação de dados do jogador, veículos, status, dinheiro, vida, posições, mensagens, loops simplificados, entre outros.

> **AVISO IMPORTANTE:**  
> É **proibido** remover os créditos do autor, alegar coautoria ou modificar este arquivo sem autorização.  
> Qualquer uso indevido será considerado ilegal e de má-fé.  

---

## Como utilizar

1. Coloque o arquivo `M_professional_PRO.inc` dentro da pasta `pawno/includes/` do seu projeto SA-MP.
2. Inclua no topo do seu script principal:

```pawn
#include "M_professional_PRO.inc"
```

3. Utilize as funções disponíveis normalmente no seu gamemode.  
   Veja abaixo a documentação completa de todas as funções.

---

## Exemplos de uso rápido

```pawn
public OnPlayerConnect(playerid)
{
    DefinePlayerAdminLevelEnumPRO(playerid, 5);
    DefinePlayerGranaEnumPRO(playerid, 10000);
    DefineSendPlayerMessagePRO(playerid, Definecor_verdePRO, "Bem-vindo ao servidor!");
    DefinePlayerSkinPRO(playerid, 105);
    DefineSpawnPlayerPRO(playerid);
}
```

---

## Loops profissionais

- **DefineLoopPRO(i, 0, 10):** executa um loop simples de 0 até 9.
- **InLoopRunInArrayPRO(i, MinhaArray):** executa um loop `for` baseado no tamanho do array.

---

## Cores padrão

```pawn
#define Definecor_vermelhoPRO 0xFF0000
#define Definecor_verdePRO    0xA1CB0B
#define Definecor_azulPRO     0x0048FF
#define Definecor_laranjaPRO  0xD16F00
#define Definecor_brancoPRO   0xFFFFFF
#define Definecor_roxoPRO     0x561C7D
```

---

## 📄 Documentação completa das funções

A documentação completa, organizada por categoria, está em progresso na segunda parte do README (continuação).

---

## Direitos Autorais e Licença

Esta include é de autoria exclusiva de **MALAK (Marcos Aurélio Oliveira Silva)** e licenciada sob a licença **MIT**.

É **proibido**:

- Remover os créditos do autor.  
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


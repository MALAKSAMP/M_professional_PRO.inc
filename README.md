
# M_professional_PRO.inc

Include Pawn Profissional para SA-MP

---

## ✍️ Autor

**Marcos Aurélio Oliveira Silva (MALAK)**  
🎓 Curso oficial: https://pay.kiwify.com.br/msCeNOa  
💬 Comunidade Discord: https://discord.gg/VdFMF7rU9g  
🧠 GitHub: https://github.com/MALAKSAMP

---

## 📦 O que é a M_professional_PRO.inc?

A `M_professional_PRO.inc` é uma include profissional e moderna para SA-MP (San Andreas Multiplayer), criada para ajudar programadores a desenvolverem códigos organizados, rápidos e fáceis de manter.  
Ela oferece um conjunto robusto de macros, funções utilitárias, estruturação com enums e práticas modernas baseadas em experiências de grandes servidores como BMRP, BRP e Reduto Online.

---

## 🛠️ Instalação

1. Baixe o arquivo `M_professional_PRO.inc`.
2. Coloque-o na pasta `pawno/include/` do seu servidor.
3. No seu script principal (`.pwn`), adicione:
```pawn
#include <M_professional_PRO>
```
4. Compile seu projeto com o `pawno.exe` ou outro compilador e comece a usar.

---

## 📘 Tutorial Detalhado de Uso

Esta include foi feita para facilitar a leitura e manutenção do código. Ela utiliza **macros**, **enums** e **estruturas** que otimizam o uso da memória e a clareza da lógica.

### 🧠 Como o compilador lê os `%0`, `%1`?

Quando você usa:

```pawn
#define SetSaldoCaixa(%0,%1) ContaBancaria[%0][caixa_saldo] = %1
SetSaldoCaixa(playerid, 15000);
```

O compilador substitui isso antes de compilar, como se você tivesse escrito:

```pawn
ContaBancaria[playerid][caixa_saldo] = 15000;
```

Ou seja: **os `%0`, `%1`, etc., são substituídos antes da compilação**, no processo chamado de *pré-processamento*.

---

### 🧩 Exemplo com player_infos e enums

```pawn
enum E_PLAYER_INFO
{
    pDinheiro,
    pMatou,
    pMorreu,
    pLevel
};
new player_info[MAX_PLAYERS][E_PLAYER_INFO];
```

Agora, uma macro:

```pawn
#define SetLevel(%0,%1) player_info[%0][pLevel] = %1
SetLevel(playerid, 3); // vira player_info[playerid][pLevel] = 3;
```

Você pode criar quantas macros quiser para manipular facilmente os dados.

---

### ✅ Macros para melhorar o código

```pawn
#define AddDinheiro(%0,%1) player_info[%0][pDinheiro] += %1
#define GetDinheiro(%0) player_info[%0][pDinheiro]
```

Uso:

```pawn
AddDinheiro(playerid, 1000);
new saldo = GetDinheiro(playerid);
```

---

### 💬 Mensagens com cores

```pawn
SendErrorMessage(playerid, "Erro: Você não tem permissão.");
SendInfoMessage(playerid, "Bem-vindo ao servidor!");
```

Essas funções já vêm com estilo, cor e prefixo configurado.

---

## 📦 O que tem dentro da include?

- Validação de player (`IsValidPlayerID`)
- Macros organizadas por sistemas (ex: banco, inventário, empregos)
- Padronização de mensagens
- Facilita uso de enums com nomes simples
- Comentários explicando cada macro e função

---

## 📄 Licença

**MIT License + Termo Personalizado**

Você pode usar, modificar e redistribuir esta include **desde que os créditos ao autor sejam mantidos**, junto com os links oficiais:

- Curso: https://pay.kiwify.com.br/msCeNOa  
- Discord: https://discord.gg/VdFMF7rU9g  
- GitHub: https://github.com/MALAKSAMP

---

## 🧠 Créditos

Include criada por:  
**Marcos Aurélio Oliveira Silva (MALAK)** — Programador desde 2017, criador da Eagle Vision Team, Reduto Online Roleplay, e autor do curso mais completo de Pawn SA-MP até 2025.

---

## 🎓 Curso Completo

Quer dominar Pawn de verdade? Com mais de 70 aulas e suporte completo, você aprende desde a base até as técnicas mais avançadas:

🎓 https://pay.kiwify.com.br/msCeNOa

---

## 📢 Comunidade

Dúvidas? Sugestões? Venha para a comunidade oficial:

💬 https://discord.gg/VdFMF7rU9g


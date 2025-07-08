


#if !defined _M_PROFESSIONAL_PRO_
#define _M_PROFESSIONAL_PRO_
// =====================================================================
// M_professional_PRO.inc
// Autor: MALAK (Marcos Aurélio Oliveira Silva)
// Licença: MIT - É proibido remover os créditos ou alegar coautoria
// Última atualização: 23/06/2025
// Curso oficial: https://pay.kiwify.com.br/msCeNOa
// Discord: https://discord.gg/VdFMF7rU9g
// GitHub: https://github.com/MALAKSAMP
// =====================================================================
//
// AVISO IMPORTANTE:
//
// Este arquivo é protegido por direitos autorais e licenciado sob a licença MIT.
// É PROIBIDO remover os créditos do autor, alegar coautoria ou fazer qualquer modificação.
//
// O autor é exclusivo e NÃO ACEITA COLABORAÇÕES EXTERNAS para este projeto.
// Qualquer tentativa de modificação, remoção ou apropriação indevida dos créditos
// será considerada de má-fé e ilegal.
//
// Caso você não compreenda completamente o funcionamento deste arquivo ou suas 
// funções, NÃO ALTERE o código para evitar bugs e falhas.
//
// Este arquivo deve ser utilizado de forma legal e responsável,
// respeitando a autoria e a licença fornecida.
//
// =====================================================================


// stock DefinePlayerAdminLevelEnumPRO(playerid, quantidade_de_levels_admin);
// #define DefinePlayerAdminLevelEnumPRO(%0,%1) player_infos[%0][pAdmin] =%1

// stock AddPlayerAdminLevelEnumPRO(playerid, quantidade_de_levels_admin);
// #define AddPlayerAdminLevelEnumPRO(%0,%1) player_infos[%0][pAdmin] +=%1

// stock GetPlayerAdminLevelEnumPRO(playerid);
// #define GetPlayerAdminLevelEnumPRO(%0) player_infos[%0][pAdmin]


// stock DefinePlayerCargoEnumPRO(playerid, quantidade_de_levels_cargo);
// #define DefinePlayerCargoEnumPRO(%0,%1) player_infos[%0][pAdmin] =%1

// stock RemovePlayerCargoEnumPRO(playerid, r_quantidade_de_levels_cargo);
// #define RemovePlayerCargoEnumPRO(%0,%1) player_infos[%0][pAdmin] -=%1

// stock GetPlayerCargoEnumPRO(playerid);
// #define GetPlayerCargoEnumPRO(%0) player_infos[%0][pAdmin]


// stock DefinePlayerLiderOrgEnumPRO(playerid, idorg);
// #define DefinePlayerLiderOrgEnumPRO(%0,%1) player_infos[%0][pLiderOrg] =%1

// stock RemovePlayerLiderOrgEnumPRO(playerid, remover_valor);
// #define RemovePlayerLiderOrgEnumPRO(%0,%1) player_infos[%0][pLiderOrg] -=%1

//stock GetPlayerLiderOrgEnumPRO(playerid);
//#define GetPlayerLiderOrgEnumPRO(%0) player_infos[%0][pLiderOrg]


// stock DefinePlayerSkinEnumPRO(playerid, skinid);
// #define DefinePlayerSkinEnumPRO(%0, %1) player_infos[%0][pSkinOrg] =%1

// stock GetPlayerSkinEnumPRO(playerid);
// #define GetPlayerSkinEnumPRO(%0) player_infos[%0][pSkinOrg]


// stock DefinePlayerLevelEnumPRO(playerid, quantidade_de_levels);
// #define DefinePlayerLevelEnumPRO(%0,%1) player_infos[%0][pLevel] =%1

// stock AddPlayerLevelEnumPRO(playerid, quantidade_de_levels);
// #define AddPlayerLevelEnumPRO(%0,%1) player_infos[%0][pLevel] +=%1

// stock GetPlayerLevelEnumPRO(playerid);
// #define GetPlayerLevelEnumPRO(%0) player_infos[%0][pLevel]

// stock RemovePlayerLevelEnumPRO(playerid, remover_valor);
// #define RemovePlayerLevelEnumPRO(%0,%1) player_infos[%0][pLevel] -=%1


// stock DefinePlayerEXP_EnumPRO(playerid, quantidade_de_exp);
// #define DefinePlayerEXP_EnumPRO(%0,%1) player_infos[%0][pEXP] =%1

// stock AddPlayerEXP_EnumPRO(playerid, quantidade_de_exp);
// #define AddPlayerEXP_EnumPRO(%0,%1) player_infos[%0][pEXP] +=%1

// stock GetPlayerEXP_EnumPRO(playerid);
// #define GetPlayerEXP_EnumPRO(%0) player_infos[%0][pEXP]

// stock RemovePlayerEXP_EnumPRO(playerid, quantidade_de_exp);
// #define RemovePlayerEXP_EnumPRO(%0,%1) player_infos[%0][pEXP] -=%1


// stock DefinePlayerGranaEnumPRO(playerid, quantidade_de_grana);
// #define DefinePlayerGranaEnumPRO(%0,%1) player_infos[%0][pGrana] =%1

// stock AddPlayerGranaEnumPRO(playerid, quantidade_de_grana);
// #define AddPlayerGranaEnumPRO(%0,%1) player_infos[%0][pGrana] +=%1

// stock GetPlayerGranaEnumPRO(playerid);
// #define GetPlayerGranaEnumPRO(%0) player_infos[%0][pGrana]

// stock RemovePlayerGranaEnumPRO(playerid, remover_quantidade_de_grana);
// #define RemovePlayerGranaEnumPRO(%0,%1) player_infos[%0][pGrana] -=%1


// stock DefinePlayerCoinsEnumPRO(playerid, quantidade_de_coins);
// #define DefinePlayerCoinsEnumPRO(%0,%1) player_infos[%0][pCoins] =%1

// stock AddPlayerCoinsEnumPRO(playerid, quantidade_de_coins);
// #define AddPlayerCoinsEnumPRO(%0,%1) player_infos[%0][pCoins] +=%1

// stock RemovePlayerCoinsEnumPRO(playerid, remover_quantidade_de_coins);
// #define RemovePlayerCoinsEnumPRO(%0,%1) player_infos[%0][pCoins] -=%1

// stock GetPlayerCoinsEnumPRO(playerid);
// #define GetPlayerCoinsEnumPRO(%0) player_infos[%0][pCoins]


// stock DefinePlayerSaldoBancoEnumPRO(playerid, quantidade_saldo_do_banco);
// #define DefinePlayerSaldoBancoEnumPRO(%0,%1) infos_caixas_e_banco[%0][pSaldoBanco] =%1

// stock AddPlayerSaldoBancoEnumPRO(playerid, quantidade_de_saldo_do_banco);
// #define AddPlayerSaldoBancoEnumPRO(%0,%1) infos_caixas_e_banco[%0][pSaldoBanco] +=%1

// stock GetPlayerSaldoBancoEnumPRO(playerid);
// #define GetPlayerSaldoBancoEnumPRO(%0) infos_caixas_e_banco[%0][pSaldoBanco]

// stock RemovePlayerSaldoBancoEnumPRO(playerid, quantidade_de_saldo_do_banco);
// #define RemovePlayerSaldoBancoEnumPRO(%0,%1) infos_caixas_e_banco[%0][pSaldoBanco] -=%1


// stock DefinePlayerSaldoCaixaEnumPRO(playerid, quantidade_de_saldo_do_caixa);
// #define DefinePlayerSaldoCaixaEnumPRO(%0,%1) infos_caixas_e_banco[%0][SaldoCaixa] =%1

// stock AddPlayerSaldoCaixaEnumPRO(playerid, quantidade_de_saldo_do_caixa);
// #define AddPlayerSaldoCaixaEnumPRO(%0,%1) infos_caixas_e_banco[%0][SaldoCaixa] +=%1

// stock GetPlayerSaldoCaixaEnumPRO(playerid);
// #define GetPlayerSaldoCaixaEnumPRO(%0) infos_caixas_e_banco[%0][SaldoCaixa]

// stock RemovePlayerSaldoCaixaEnumPRO(playerid, r_quantidade_de_saldo_do_caixa);
// #define RemovePlayerSaldoCaixaEnumPRO(%0,%1) infos_caixas_e_banco[%0][SaldoCaixa] -=%1


// stock DefinePlayerVidaEnumPRO(playerid, quantidade_de_vida);
// #define DefinePlayerVidaEnumPRO(%0,%1) player_infos[%0][pVida] =%1

// stock AddPlayerVidaEnumPRO(playerid, quantidade_de_vida);
// #define AddPlayerVidaEnumPRO(%0,%1) player_infos[%0][pVida] +=%1

// stock RemovePlayerVidaEnumPRO(playerid, remover_quantidade_de_vida);
// #define RemovePlayerVidaEnumPRO(%0,%1) player_infos[%0][pVida] -=%1

// stock GetPlayerVidaEnumPRO(playerid);
// #define GetPlayerVidaEnumPRO(%0) player_infos[%0][pVida]


// stock DefinePlayerColeteEnumPRO(playerid, quantidade_de_colete);
// #define DefinePlayerColeteEnumPRO(%0,%1) player_infos[%0][pColete] =%1

// stock AddPlayerColeteEnumPRO(playerid, quantidade_de_colete);
// #define AddPlayerColetePROEnum(%0,%1) player_infos[%0][pColete] +=%1

// stock RemovePlayerColeteEnumPRO(playerid, remover_quantidade_de_colete);
// #define RemovePlayerColeteEnumPRO(%0,%1) player_infos[%0][pColete] -=%1

// stock GetPlayerColeteEnumPRO(playerid);
// #define GetPlayerColeteEnumPRO(%0) player_infos[%0][pColete]


// stock DefinePlayerLogedEnumPRO(playerid, valor);
// #define DefinePlayerLogedEnumPRO(%0,%1) player_infos[%0][pIsLoged] =%1

// stock RemovePlayerLogedEnumPRO(playerid, valor);
// #define RemovePlayerLogedEnumPRO(%0,%1) player_infos[%0][pIsLoged] -=%1

// stock GetPlayerIsLogedEnumPRO(playerid);
// #define GetPlayerIsLogedEnumPRO(%0) player_infos[%0][pIsLoged]


// stock DefinePlayerErrosLoginEnumPRO(playerid, valor);
// #define DefinePlayerErrosLoginEnumPRO(%0,%1) player_infos[%0][pTentativas_de_login] =%1

// stock AddPlayerErrosLoginEnumPRO(playerid, valor);
// #define AddPlayerErrosLoginEnumPRO(%0,%1) player_infos[%0][pTentativas_de_login] +=%1

// stock RemovePlayerErrosLoginPRO(playerid, valor);
// #define RemovePlayerErrosLoginPRO(%0,%1) player_infos[%0][pTentativas_de_login] -=%1

// stock GetPlayerErrosLoginEnumPRO(playerid);
// #define GetPlayerErrosLoginEnumPRO(%0) player_infos[%0][pTentativas_de_login]

stock DefinePlayerHealthPRO(playerid, quantidade_de_vida_f);
#define DefinePlayerHealthPRO(%0,%1) SetPlayerHealth(%0,%1)
stock DefinePlayerArmourPRO(playerid, quantidade_de_colete_value_f);
#define DefinePlayerArmourPRO(%0,%1) SetPlayerArmour(%0,%1)
stock DefinePlayerScorePRO(playerid, quantidade_de_score);
#define DefinePlayerScorePRO(%0,%1) SetPlayerScore(%0,%1)
stock DesativeBonusForPlayerPRO(playerid, valor_tipo_inteiro);
#define DesativeBonusForPlayerPRO(%0,%1) EnableStuntBonusForPlayer(%0,%1)
stock DesativeBonusForAllPRO(valor_tipo_inteiro);
#define DesativeBonusForAllPRO(%0) EnableStuntBonusForAll(%0)
stock DesativeInteriosPRO();
#define DesativeInteriosPRO() DisableInteriorEnterExits()
stock UsePlayerAnimationsFixPRO();
#define UsePlayerAnimationsFixPRO() UsePlayerPedAnims()
stock DesativeTagLosFixPRO(value_boolean);
#define DesativeTagLosFixPRO() DisableNameTagLOS()
#define DefinePlayerMoneyPRO(%0,%1) GivePlayerMoney(%0,%1)
stock DefinePlayerSkinPRO(playerid, skin_id);
#define DefinePlayerSkinPRO(%0,%1) SetPlayerSkin(%0,%1)
stock DefinePlayerWeaponPRO(playerid, arma_id, quantiade_de_municoes);
#define DefinePlayerWeaponPRO(%0,%1,%2) GivePlayerWeapon(%0,%1,%2)
stock RemovePlayerWeaponsPRO(playerid);
#define RemovePlayerWeaponsPRO(%0) ResetPlayerWeapons(%0)
stock DefineSpawnPlayerPRO(playerid);
#define DefineSpawnPlayerPRO(%0) SpawnPlayer(%0)
stock DefineSpawnInfoPRO(playerid, team_value_integer, skinid, Float:x, Float:y, Float:z, Float:rotationR, arma1, arma1_municao, arma2, arma2_municao, arma3, arma3_municao);
#define DefineSpawnInfoPRO(%0,%1,%2,%3,%4,%5,%6,%7,%8,%9,%10,%11,%12) SetSpawnInfo(%0,%1,%2,%3,%4,%5,%6,%7,%8,%9,%10,%11,%12)
stock DefineInitializeAntBugJumpPRO(playerid, &Float:x, &Float:y, &Float2:z);
#define DefineInitializeAntBugJumpPRO(%0,%1,%2,%3) GetPlayerPos(%0,%1,%2,%3)
stock DefineAntBugJumpPRO(playerid, &Float:x, &Float:y, &Float2:z);
#define DefineAntBugJumpPRO(%0,%1,%2,%3) SetPlayerPos(%0,%1,%2,%3)
#define Function(%0,%1,%2)forward %0(%1,%2);public %0(%1,%2)
stock DefineSendPlayerMessagePRO(playerid, color, string_const);
#define DefineSendPlayerMessagePRO(%0,%1,%2) SendClientMessage(%0,%1,%2)
stock DefineSendMessageToAllPRO(color, string_const);
#define DefineSendMessageToAllPRO(%0) SendClientMessageToAll(%0)
stock DefineTextGameForAllPRO(string_const, temp, thestyle);
#define DefineTextGameForAllPRO(%0,%1,%2) GameTextForAll(%0,%1,%2)
stock DefineTextGameForPlayerPRO(playerid, string_const, temp, thestyle);
#define DefineTextGameForPlayerPRO(%0,%1,%2,%3) GameTextForPlayer(%0,%1,%2,%3)
stock DefinePlayerInVehiclePRO(playerid, veh_id, aseatid);
#define DefinePlayerInVehiclePRO(%0,%1,%2) PutPlayerInVehicle(%0,%1,%2)
stock DefineLinkInVehicleInteriorPRO(playerid, veh_id, aseatid);
#define DefineLinkInVehicleInteriorPRO(%0,%1,%2) LinkVehicleToInterior(%0,%1)
stock GetVehicleVirtualPos3DPRO(veh_id, Float:x, Float:y, Float:z);
#define GetVehicleVirtualPos3DPRO(%0,%1,%2,%3)  GetVehiclePos(%0,%1,%2,%3) 
stock GetVehicleModelPRO(veh_id);
#define GetVehicleModelPRO(%0) GetVehicleModel(%0)
stock GetVehicleVelocitePRO(veh_id); 
#define GetVehicleVelocitePRO(%0) Vehicle_Speed(%0)
stock DefineSelectVehiclePRO(veh_id); 
#define DefineSelectVehiclePRO(%0) VehicleSelect(%0)
stock AddVehicleStaticPRO(veh_id, Float:spawn_x, Float:spawn_y, Float:spawn_z, Float:z_angle, color1, color2);
#define AddVehicleStaticPRO(%0,%1,%2,%3,%4,%5%,%6) AddStaticVehicle(%0,%1,%2,%3,%4,%5,%6)
stock VehicleInvalidPRO(veh_id);
#define VehicleInvalidPRO(%0) INVALID_VEHICLE_ID(%0)
stock DestroyMyVehiclePRO(veh_id);
#define DestroyMyVehiclePRO(%0) DestroyVehicle(%0)
stock ifPlayerInAnyVehiclePRO(playerid);
#define ifPlayerInAnyVehiclePRO(%0) IsPlayerInAnyVehicle(%0)
stock ifPlayerInVehiclePRO(playerid, veh_id);
#define ifPlayerInVehiclePRO(%0,%1) IsPlayerInVehicle(%0,%1)
stock DefineSendRconCommandPRO(commando_to_send);
#define DefineSendRconCommandPRO(%0) SendRconCommand(%0);
stock InLoopRuInArryPRO(for_new_i, VarTaged, sizeo_VarTaged, increment);
#define InLoopRunInArrayPRO(%0,%1) for (new %0 = 0; %0 < sizeof(%1); %0++)
stock DefineLoopPRO(for_new_i, VarTaged, sizeo_VarTaged, increment);
#define DefineLoopPRO(%0,%1,%2) for (new %0 = %1; %0 < %2; %0++)
stock DefineLoopInTextdraws(for_new_t, vartagedtextdraws, condition, increment);
#define DefineLoopInTextdraws(%0,%1,%2) for (new %0 = %1; %0 < %2; ++%0)
#define Definecor_vermelhoPRO  0xFF0000FF
#define Definecor_verdePRO  0xA2CA00FF
#define Definecor_azulPRO  0x6282FFFF
#define Definecor_laranjaPRO 0xF9821AFF
#define Definecor_brancoPRO  0xFFFFFFFF
#define Definecor_roxoPRO  0x7901BAFF
stock GetNamePRO(playerid) {   
    new pNamePro[MAX_PLAYER_NAME];
    GetPlayerName(playerid, pNamePro, sizeof(pNamePro));
    return pNamePro;
}
stock DefineMultiplyWeaponsPRO(playerid, arm1, ammo1, arm2, ammo2, arm3, ammo3, arm4, ammo4);
#define DefineMultiplyWeaponsPRO(%0,%1,%2,%3,%4,%5,%6,%7,%8) \
    GivePlayerWeapon(%0, %1, %2); \
    GivePlayerWeapon(%0, %3, %4); \
    GivePlayerWeapon(%0, %5, %6); \
    GivePlayerWeapon(%0, %7, %8)
stock GetMultiplyWeaponsPRO(playerid, arm1, ammo1, arm2, ammo2, arm3, ammo3, arm4, ammo4, arm5, ammo5);
#define GetMultiplyWeaponsPRO(%0,%1,%2,%3,%4,%5,%6,%7,%8) \
    GetPlayerWeapon(%0, %1, %2); \
    GetPlayerWeapon(%0, %3, %4); \
    GetPlayerWeapon(%0, %5, %6); \
    GetPlayerWeapon(%0, %7, %8); 
stock DefineMultiplyWeaponsMessagePRO(playerid, arm1, ammo1, arm2, ammo2, arm3, ammo3, color_message, string_const);
#define DefineMultiplyWeaponsMessagePRO(%0,%1,%2,%3,%4,%5,%6,%7,%8) \
    GivePlayerWeapon(%0,%1,%2); \
    GivePlayerWeapon(%0,%3,%4); \
    GivePlayerWeapon(%0,%5,%6); \
    SendClientMessage(%0,%7,%8)
stock DefinePlayerPos3DPRO(playerid, Float:x, Float:y, Float:z);
#define DefinePlayerPos3DPRO(%0,%1,%2,%3) SetPlayerPos(%0,%1,%2,%3)
stock GetPlayerPos3DPRO(playerid, &Float:x, &Float:y, &Float:z);
#define GetPlayerPos3DPRO(%0,%1,%2,%3) GetPlayerPos(%0,%1,%2,%3)
stock DefinePlayerFindzPRO(playerid, Float:x, Float:y, Float:z);
#define DefinePlayerFindzPRO(%0,%1,%2,%3) SetPlayerPosFindz(%0,%1,%2,%3)
stock DefinePlayerFindzPRO(playerid, Float:x, Float:y, Float:z);
#define DefinePlayerFindzPRO(%0,%1,%2,%3) SetPlayerPosFindz(%0,%1,%2,%3)
stock DefinePrintFPRO(string_const,arg1);
#define DefinePrintFPRO(%0,%1) printf(%0,%1)
stock DefineformatPRO(var_string, sizeo_var_string, string_const);
#define DefineformatPRO(%0,%1,%2) format(%0,sizeof(%0),%2)
stock DefineformatSimplePRO(var_string_const, sizefrom_string, string_const);
#define DefineformatSimplePRO(%0,%1) format(%0,sizeof(%0),%1)
stock DefinePrintPRO(string_const);
#define DefinePrintPRO(%0) print(%0)
stock DefinePlayerHealthMessagePRO(playerid, countHealt, color_message, string_const);
#define DefinePlayerHealthMessagePRO(%0,%1,%2,%3);\
    SetPlayerHealth(%0,%1);\
    SendClientMessage(%0,%2,%3);
stock   DefinePlayerMoneyMessagePRO(playerid, countMoney, color_message, string_const);
#define DefinePlayerMoneyMessagePRO(%0,%1,%2,%3) \
    GivePlayerMoney(%0,%1); \
    SendClientMessage(%0,%1,%3)
stock DefinePlayerScoreMessagePRO(playerid, count_score, color_message, string_const);
#define DefinePlayerScoreMessagePRO(%0,%1,%2,%3) \
    SetPlayerScore(%0,%1); \
    SendClientMessage(%0,%2,%3)
stock DefinePlayerArmourMessagePRO(playerid, count_armour, color_message, const_string);
#define DefinePlayerAmmourMessagePRO(%0,%1,%2,%3) \
    SetPlayerArmour(%0,%1);\
    SendClientMessage(%0,%2,%3)
stock DefinePlayerSkinMessagePRO(playerid, skin_id, color_message, string_const);
#define DefinePlayerSkinMessagePRO(%0,%1,%2,%3) \
    SetPlayerSkin(%0,%1); \
    SendClientMessage(%0,%2,%3)
stock DefineGetPlayerDisconnected(playerid);
#define DefineGetPlayerDisconnected(%0) !IsPlayerConnected(%0)
stock DefineGetPlayerConnected(playerid);
#define DefineGetPlayerConnected(%0) IsPlayerConnected(%0)
stock DefineNewVarPRO(var);
#define DefineNewVarPRO(%0) new %0

stock sizefrom(str, sizefromVar);
#define sizefrom(%0,%1) sizeof(%0,%1)

stock DefineInitializeFixFrameworkPRO() { UsePlayerAnimationsFixPRO(); DesativeTagLosFixPRO(); DesativeBonusForAllPRO(0); DesativeInteriosPRO();}
#endif // _M_PROFESSIONAL_PRO_

/*
 * Note: this file originally auto-generated by mib2c
 * using mib2c.old-api.conf
 */
#ifndef ISECURITYSWITCH_H
#define ISECURITYSWITCH_H

/* function declarations */
void init_iSecuritySwitch(void);
FindVarMethod var_iSecuritySwitch;
FindVarMethod var_iUserConfigTable;
FindVarMethod var_iPrivilegeLevelTable;
FindVarMethod var_iAuthenticationMethodTable;
FindVarMethod var_iAccessMgmtProtocolTable;
FindVarMethod var_iAccessMgmtStatisticsTable;
    WriteMethod write_iAddUser;
    WriteMethod write_iDeleteUser;
    WriteMethod write_iSshMode;
    WriteMethod write_iHttpsMode;
    WriteMethod write_iHttpsAutomaticRedirect;
    WriteMethod write_iAccessMgmtProtocolMode;
    WriteMethod write_iAddAccessMgmtProtocol;
    WriteMethod write_iDeleteAccessMgmtProtocol;
    WriteMethod write_iAccessMgmtStatisticsClear;
    WriteMethod write_iUserPassword;
    WriteMethod write_iUserPrivilegeLevel;
    WriteMethod write_iPrivilegeConfigReadOnlyLevel;
    WriteMethod write_iPrivilegeConfigReadWriteLevel;
    WriteMethod write_iPrivilegeStatusReadOnlyLevel;
    WriteMethod write_iPrivilegeStatusReadWriteLevel;
    WriteMethod write_iAuthenticationMethod1;
    WriteMethod write_iAuthenticationMethod2;
    WriteMethod write_iAuthenticationMethod3;
    WriteMethod write_iAccessMgmtVID;
    WriteMethod write_iAccessMgmtProtocolStartIP;
    WriteMethod write_iAccessMgmtProtocolEndIP;
    WriteMethod write_iAccessMgmtHttpHttpsEnable;
    WriteMethod write_iAccessMgmtSnmpEnable;
    WriteMethod write_iAccessMgmtTelnetSshEnable;

#endif /* ISECURITYSWITCH_H */

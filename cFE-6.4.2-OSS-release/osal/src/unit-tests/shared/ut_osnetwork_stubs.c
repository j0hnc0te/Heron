/*================================================================================*
** File:  ut_osnetwork_stubs.c
** Owner: Tam Ngo
** Date:  March 2013
**================================================================================*/

/*--------------------------------------------------------------------------------*
** Includes
**--------------------------------------------------------------------------------*/

#include "ut_os_stubs.h"

/*--------------------------------------------------------------------------------*
** Macros
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Data types
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** External global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Global variables
**--------------------------------------------------------------------------------*/

UT_OsReturnCode_t  g_networkGetId = {0,0};
UT_OsReturnCode_t  g_networkGetName = {0,0};

/*--------------------------------------------------------------------------------*
** Local function prototypes
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Function definitions
**--------------------------------------------------------------------------------*/

int32 OS_NetworkGetID()
{
    return (g_networkGetId.value);
}

/*--------------------------------------------------------------------------------*/

int32 OS_NetworkGetHostName(char* host_name, uint32 name_len)
{
    return (g_networkGetName.value);
}

/*================================================================================*
** End of File: ut_osnetwork_stubs.c
**================================================================================*/

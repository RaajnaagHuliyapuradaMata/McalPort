/******************************************************************************/
/* File   : Port.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infPort_EcuM.hpp"
#include "infPort_Dcm.hpp"
#include "infPort_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PORT_AR_RELEASE_MAJOR_VERSION                                          4
#define PORT_AR_RELEASE_MINOR_VERSION                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(PORT_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible PORT_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(PORT_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible PORT_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Port:
      public abstract_module
{
   public:
      module_Port(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, _CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, _CONFIG_DATA, _APPL_CONST) lptrCfgModule
      );
      FUNC(void, PORT_CODE) InitFunction   (void);
      FUNC(void, PORT_CODE) DeInitFunction (void);
      FUNC(void, PORT_CODE) MainFunction   (void);
};

extern VAR(module_Port, PORT_VAR) Port;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, PORT_VAR, PORT_CONST) gptrinfEcuMClient_Port = &Port;
CONSTP2VAR(infDcmClient,  PORT_VAR, PORT_CONST) gptrinfDcmClient_Port  = &Port;
CONSTP2VAR(infSchMClient, PORT_VAR, PORT_CONST) gptrinfSchMClient_Port = &Port;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgPort.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Port, PORT_VAR) Port(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, PORT_CODE) module_Port::InitFunction(
   CONSTP2CONST(CfgPort_Type, CFGPORT_CONFIG_DATA, CFGPORT_APPL_CONST) lptrCfgPort
){
   if(NULL_PTR == lptrCfgPort){
#if(STD_ON == Port_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
// check lptrCfgPort for memory faults
// use PBcfg_Port as back-up configuration
   }
   Port.IsInitDone = E_OK;
}

FUNC(void, PORT_CODE) module_Port::DeInitFunction(void){
   Port.IsInitDone = E_NOT_OK;
}

FUNC(void, PORT_CODE) module_Port::MainFunction(void){
}

class class_Port_Unused{
   public:
      FUNC(void, PORT_CODE) SetPinDirection      (void);
      FUNC(void, PORT_CODE) RefreshPortDirection (void);
      FUNC(void, PORT_CODE) SetPortMode          (void);
};

FUNC(void, PORT_CODE) class_Port_Unused::SetPinDirection(void){
}

FUNC(void, PORT_CODE) class_Port_Unused::RefreshPortDirection(void){
}

FUNC(void, PORT_CODE) class_Port_Unused::SetPortMode(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


/******************************************************************************/
/* File   : McalPort.cpp                                                          */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "McalPort.hpp"
#include "infMcalPort_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PORT_AR_RELEASE_VERSION_MAJOR                                          4
#define PORT_AR_RELEASE_VERSION_MINOR                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(PORT_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible PORT_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(PORT_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible PORT_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_McalPort, PORT_VAR) McalPort;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, PORT_CODE) module_McalPort::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, PORT_CONST,       PORT_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   PORT_CONFIG_DATA, PORT_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalPort_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalPort_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalPort_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalPort_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalPort_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PORT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, PORT_CODE) module_McalPort::DeInitFunction(
   void
){
#if(STD_ON == McalPort_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalPort_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalPort_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PORT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, PORT_CODE) module_McalPort::MainFunction(
   void
){
#if(STD_ON == McalPort_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalPort_InitCheck)
   }
   else{
#if(STD_ON == McalPort_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PORT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, PORT_CODE) module_McalPort::SetPinDirection(
   void
){
}

FUNC(void, PORT_CODE) module_McalPort::RefreshMcalPortDirection(
   void
){
}

FUNC(void, PORT_CODE) module_McalPort::SetMcalPortMode(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


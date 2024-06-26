/******************************************************************************/
/* File   : McalPort.cpp                                                      */
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
#define MCALPORT_AR_RELEASE_VERSION_MAJOR                                      4
#define MCALPORT_AR_RELEASE_VERSION_MINOR                                      3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCALPORT_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible MCALPORT_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(MCALPORT_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible MCALPORT_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_McalPort, MCALPORT_VAR) McalPort;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCALPORT_CODE) module_McalPort::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALPORT_CONST,       MCALPORT_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALPORT_CONFIG_DATA, MCALPORT_APPL_CONST) lptrCfgModule
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
         ,  MCALPORT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALPORT_CODE) module_McalPort::DeInitFunction(
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
         ,  MCALPORT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALPORT_CODE) module_McalPort::MainFunction(
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
         ,  MCALPORT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALPORT_CODE) module_McalPort::SetPinDirection(
   void
){
}

FUNC(void, MCALPORT_CODE) module_McalPort::RefreshMcalPortDirection(
   void
){
}

FUNC(void, MCALPORT_CODE) module_McalPort::SetMcalPortMode(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


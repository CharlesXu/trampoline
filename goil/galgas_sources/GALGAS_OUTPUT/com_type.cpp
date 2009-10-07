//---------------------------------------------------------------------------*
//                                                                           *
//                           File 'com_type.cpp'                             *
//                        Generated by version 1.9.2                         *
//                      october 7th, 2009, at 9h59'2"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

//---------------------------------------------------------------------------*

#include "version_libpm.h"
#if LIBPM_VERSION != 573
  #error "This file has been compiled with a version of GALGAS different than the version of libpm"
#endif

//---------------------------------------------------------------------------*

#include <typeinfo>
#include "utilities/MF_MemoryControl.h"
#include "files/C_TextFileWrite.h"
#include "galgas/C_galgas_CLI_Options.h"
#include "com_type.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "com_type.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                             class 'cPtr_com'                              *
//                                                                           *
//---------------------------------------------------------------------------*

cPtr_com::
cPtr_com (const GGS_lstring & argument_0,
                                const GGS_bool& argument_1,
                                const GGS_basic_type & argument_2,
                                const GGS_basic_type & argument_3,
                                const GGS_basic_type & argument_4,
                                const GGS_basic_type & argument_5,
                                const GGS_basic_type & argument_6,
                                const GGS_lstringlist & argument_7,
                                const GGS_lstring & argument_8,
                                const GGS_lstringlist & argument_9
                                COMMA_LOCATION_ARGS)
:cPtr_oil_obj (argument_0 COMMA_THERE),
usecom (argument_1),
timebase (argument_2),
errorhook (argument_3),
usegetserviceid (argument_4),
useparameteraccess (argument_5),
startcomextension (argument_6),
appmodes (argument_7),
status (argument_8),
uses (argument_9) {
}

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  cPtr_com * GGS_com::
  operator () (LOCATION_ARGS) const {
    macroValidPointerThere (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_com *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    return (cPtr_com *) mPointer ;
  }
#endif

//---------------------------------------------------------------------------*

bool cPtr_com::
isEqualToObject (const cPtr__AC_galgas_class * inOperand) const {
  bool equal = typeid (this) == typeid (inOperand) ;
  if (equal) {
    const cPtr_com * ptr = dynamic_cast <const cPtr_com *> (inOperand) ;
    macroValidPointer (ptr) ;
    equal = desc.operator_isEqual (ptr->desc).boolValue ()
         && usecom.operator_isEqual (ptr->usecom).boolValue ()
         && timebase.operator_isEqual (ptr->timebase).boolValue ()
         && errorhook.operator_isEqual (ptr->errorhook).boolValue ()
         && usegetserviceid.operator_isEqual (ptr->usegetserviceid).boolValue ()
         && useparameteraccess.operator_isEqual (ptr->useparameteraccess).boolValue ()
         && startcomextension.operator_isEqual (ptr->startcomextension).boolValue ()
         && appmodes.operator_isEqual (ptr->appmodes).boolValue ()
         && status.operator_isEqual (ptr->status).boolValue ()
         && uses.operator_isEqual (ptr->uses).boolValue () ;
  }
  return equal ;
}

//---------------------------------------------------------------------------*

void cPtr_com::
method_generate (C_Compiler & inLexique,
                                GGS_string& var_cas_h COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string var_cas_res ;
  var_cas_res = GGS_string ("") ;
  if ((usecom).isBuiltAndTrue ()) {
    var_cas_res = GGS_string ("#define WITH_COM\n") ;
  }
  { const GGS_basic_type _var_1312 = timebase ; // CAST instruction
    if (_var_1312.getPtr () != NULL) {
      macroValidPointer (_var_1312.getPtr ()) ;
      if (typeid (cPtr_void) == typeid (* (_var_1312.getPtr ()))) {
        var_cas_res.appendCString ("#define TPL_COMTIMEBASE 0.001\n") ;
      }else if (typeid (cPtr_float_class) == typeid (* (_var_1312.getPtr ()))) {
        const GGS_float_class var_cas_f (_var_1312.getPtr ()) ;
        GGS_string var_cas_val ;
        const GGS_float_class  temp_1167 = var_cas_f ;
        if (temp_1167.isBuilt ()) {
          temp_1167 (HERE)->method_string (inLexique, var_cas_val COMMA_SOURCE_FILE_AT_LINE (54)) ;
        }
        var_cas_res.appendCString ("#define TPL_COMTIMEBASE ") ;
        var_cas_res.dotAssign_operation (var_cas_val) ;
        var_cas_res.appendCString ("\n") ;
      }else{
        timebase.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (57)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("Internal error, wrong datatype") COMMA_SOURCE_FILE_AT_LINE (58)) ;
      }
    }
  }
  ::routine_bool_flag (inLexique,  var_cas_res,  errorhook,  GGS_string ("WITH_COM_ERROR_HOOK") COMMA_SOURCE_FILE_AT_LINE (60)) ;
  ::routine_bool_flag (inLexique,  var_cas_res,  usegetserviceid,  GGS_string ("WITH_COM_USEGETSERVICEID") COMMA_SOURCE_FILE_AT_LINE (61)) ;
  ::routine_bool_flag (inLexique,  var_cas_res,  useparameteraccess,  GGS_string ("WITH_COM_USEPARAMETERACCESS") COMMA_SOURCE_FILE_AT_LINE (62)) ;
  ::routine_bool_flag (inLexique,  var_cas_res,  startcomextension,  GGS_string ("WITH_COM_STARTCOMEXTENSION") COMMA_SOURCE_FILE_AT_LINE (63)) ;
  if (((status.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (65))).operator_isEqual (GGS_string ("extended"))).isBuiltAndTrue ()) {
    var_cas_res.appendCString ("#define COM_EXTENDED\n") ;
  }else{
    if ((((status.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (68))).operator_isEqual (GGS_string ("standard"))).operator_or ((status.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (68))).operator_isEqual (GGS_string ("")))).isBuiltAndTrue ()) {
    }else{
      status.reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("Internal error, wrong datatype") COMMA_SOURCE_FILE_AT_LINE (72)) ;
    }
  }
  ::routine_doReplace (inLexique,  var_cas_h,  GGS_string ("$COM_CONFIG_FLAGS$"),  var_cas_res COMMA_SOURCE_FILE_AT_LINE (75)) ;
}

//---------------------------------------------------------------------------*

void cPtr_com::
appendForDescription (C_Compiler & inLexique,
                      C_String & ioString,
                      const PMSInt32 inIndentation
                      COMMA_LOCATION_ARGS) const {
  ioString << "->@com:"
           << desc.reader_description  (inLexique COMMA_THERE, inIndentation + 1)
           << usecom.reader_description  (inLexique COMMA_THERE, inIndentation + 1)
           << timebase.reader_description  (inLexique COMMA_THERE, inIndentation + 1)
           << errorhook.reader_description  (inLexique COMMA_THERE, inIndentation + 1)
           << usegetserviceid.reader_description  (inLexique COMMA_THERE, inIndentation + 1)
           << useparameteraccess.reader_description  (inLexique COMMA_THERE, inIndentation + 1)
           << startcomextension.reader_description  (inLexique COMMA_THERE, inIndentation + 1)
           << appmodes.reader_description  (inLexique COMMA_THERE, inIndentation + 1)
           << status.reader_description  (inLexique COMMA_THERE, inIndentation + 1)
           << uses.reader_description  (inLexique COMMA_THERE, inIndentation + 1) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                              Class message                                *
//                                                                           *
//---------------------------------------------------------------------------*

const char * cPtr_com::
_message (void) const {
  return "" ;
}

//---------------------------------------------------------------------------*

const char * cPtr_com::
_static_message (void) {
  return "" ;
}

//---------------------------------------------------------------------------*

C_galgas_class_inspector _gInspectorFor_com (& typeid (cPtr_com), & typeid (cPtr_oil_obj), "") ;

//---------------------------------------------------------------------------*

AC_galgasClassRunTimeInformation * cPtr_com::galgasRTTI (void) const {
  return & gClassInfoFor__com ;
}

//---------------------------------------------------------------------------*

cPtr__AC_galgas_class * cPtr_com::makeClone (void) const {
  cPtr__AC_galgas_class * result = NULL ;
  macroMyNew (result, cPtr_com (desc, usecom, timebase, errorhook, usegetserviceid, useparameteraccess, startcomextension, appmodes, status, uses COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                          GALGAS class 'GGS_com'                           *
//                                                                           *
//---------------------------------------------------------------------------*

GGS_com::
GGS_com (const cPtr__AC_galgas_class * inPointer) {
  macroAssignPointer (mPointer, (cPtr__AC_galgas_class *) inPointer) ;
}

//---------------------------------------------------------------------------*

GGS_com::
GGS_com (cPtr__AC_galgas_class & inObject) {
  macroAssignPointer (mPointer, & inObject) ;
}

//---------------------------------------------------------------------------*

//--- castFrom class method (implements cast expression)
GGS_com GGS_com::
castFrom (C_Compiler & inLexique,
           cPtr__AC_galgas_class * inPointer,
           const bool inUseKindOfClass,
           const GGS_location & inErrorLocation
           COMMA_LOCATION_ARGS) {
  GGS_com result ;
  if (inPointer != NULL) {
    macroValidPointer (inPointer) ;
    const bool ok = inUseKindOfClass
      ? (dynamic_cast <cPtr_com *> (inPointer) != NULL)
      : (typeid (cPtr_com) == typeid (*inPointer)) ;
    if (ok) {
      result = GGS_com (inPointer) ;
    }else{
      inErrorLocation.signalCastError (inLexique,
                                       & typeid (cPtr_com),
                                       inUseKindOfClass,
                                       inPointer->_message ()
                                       COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_com GGS_com::
constructor_new (C_Compiler & /* inLexique */,
                 const GGS_lstring & argument_0,
                 const GGS_bool& argument_1,
                 const GGS_basic_type & argument_2,
                 const GGS_basic_type & argument_3,
                 const GGS_basic_type & argument_4,
                 const GGS_basic_type & argument_5,
                 const GGS_basic_type & argument_6,
                 const GGS_lstringlist & argument_7,
                 const GGS_lstring & argument_8,
                 const GGS_lstringlist & argument_9
                                COMMA_LOCATION_ARGS) {
  GGS_com result ;
  macroMyNew (result.mPointer, cPtr_com (argument_0,
                                argument_1,
                                argument_2,
                                argument_3,
                                argument_4,
                                argument_5,
                                argument_6,
                                argument_7,
                                argument_8,
                                argument_9 COMMA_THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------*

GGS_bool GGS_com::
reader_usecom (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool  result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_com *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_com *) mPointer)->usecom ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_basic_type  GGS_com::
reader_timebase (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_basic_type   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_com *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_com *) mPointer)->timebase ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_basic_type  GGS_com::
reader_errorhook (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_basic_type   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_com *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_com *) mPointer)->errorhook ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_basic_type  GGS_com::
reader_usegetserviceid (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_basic_type   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_com *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_com *) mPointer)->usegetserviceid ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_basic_type  GGS_com::
reader_useparameteraccess (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_basic_type   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_com *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_com *) mPointer)->useparameteraccess ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_basic_type  GGS_com::
reader_startcomextension (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_basic_type   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_com *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_com *) mPointer)->startcomextension ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_lstringlist  GGS_com::
reader_appmodes (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstringlist   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_com *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_com *) mPointer)->appmodes ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_lstring  GGS_com::
reader_status (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_com *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_com *) mPointer)->status ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

GGS_lstringlist  GGS_com::
reader_uses (C_Compiler & /* inLexique */ COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstringlist   result ;
  if (mPointer != NULL) {
    macroValidPointer (mPointer) ;
    MF_Assert (dynamic_cast <cPtr_com *> (mPointer) != NULL,
               "dynamic cast error", 0, 0) ;
    result = ((cPtr_com *) mPointer)->uses ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

const char * GGS_com::actualTypeName (void) const {
  return "com" ;
}

//---------------------------------------------------------------------------*

C_galgasClassRunTimeInformation gClassInfoFor__com ("com", gClassInfoFor__oil_obj) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                Implementation of function "void_com_obj"                  *
//                                                                           *
//---------------------------------------------------------------------------*

GGS_com  function_void_com_obj (C_Compiler & inLexique COMMA_UNUSED_LOCATION_ARGS) {
  #ifdef DEBUG_TRACE_ENABLED
    printf ("ENTER function_void_com_obj at %s:%d\n", __FILE__, __LINE__) ;
  #endif
  GGS_com  var_cas_com ;
  GGS_void  var_cas_void_obj ;
  var_cas_void_obj = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
  GGS_lstring  var_cas_emptyString ;
  var_cas_emptyString = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE) ;
  var_cas_com = GGS_com ::constructor_new (inLexique, var_cas_emptyString, GGS_bool (false), var_cas_void_obj, var_cas_void_obj, var_cas_void_obj, var_cas_void_obj, var_cas_void_obj, GGS_lstringlist ::constructor_emptyList (), var_cas_emptyString, GGS_lstringlist ::constructor_emptyList () COMMA_HERE) ;
  #ifdef DEBUG_TRACE_ENABLED
    printf ("LEAVE function_void_com_obj\n") ;
  #endif
  return var_cas_com ;
}

//---------------------------------------------------------------------------*


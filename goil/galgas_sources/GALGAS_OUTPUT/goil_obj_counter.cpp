//---------------------------------------------------------------------------*
//                                                                           *
//                       File 'goil_obj_counter.cpp'                         *
//                        Generated by version 1.9.2                         *
//                      october 7th, 2009, at 9h59'27"                       *
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
#include "goil_obj_counter.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_obj_counter.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//               Implementation of production rule 'counter'                 *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_counter::
pr_counter_goil_obj_counter_54_14_ (goil_lexique & inLexique,
                                GGS_counter_map  &var_cas_counters) {
  GGS_lstring  var_cas_counter_name ;
  GGS_counter_obj  var_cas_counter ;
  GGS_basic_type  var_cas_max_allowed_value ;
  GGS_basic_type  var_cas_ticks_per_base ;
  GGS_basic_type  var_cas_min_cycle ;
  GGS_lstring  var_cas_source ;
  GGS_lstringlist  var_cas_acc_apps ;
  GGS_counter_type  var_cas_type ;
  GGS_lstring  var_cas_unit ;
  GGS_lstring  var_cas_desc ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_COUNTER) COMMA_HERE) ;
  inLexique.assignFromAttribute_att_token (var_cas_counter_name) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
  if ((var_cas_counters.reader_hasKey (inLexique, var_cas_counter_name.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (71)) COMMA_SOURCE_FILE_AT_LINE (71))).isBuiltAndTrue ()) {
    var_cas_counters.modifier_del (inLexique, var_cas_counter_name, var_cas_counter COMMA_SOURCE_FILE_AT_LINE (72)) ;
    var_cas_max_allowed_value = var_cas_counter.reader_max_allowed_value (inLexique COMMA_SOURCE_FILE_AT_LINE (73)) ;
    var_cas_ticks_per_base = var_cas_counter.reader_ticks_per_base (inLexique COMMA_SOURCE_FILE_AT_LINE (74)) ;
    var_cas_min_cycle = var_cas_counter.reader_min_cycle (inLexique COMMA_SOURCE_FILE_AT_LINE (75)) ;
    var_cas_source = var_cas_counter.reader_source (inLexique COMMA_SOURCE_FILE_AT_LINE (76)) ;
    var_cas_acc_apps = var_cas_counter.reader_acc_apps (inLexique COMMA_SOURCE_FILE_AT_LINE (77)) ;
    var_cas_type = var_cas_counter.reader_type (inLexique COMMA_SOURCE_FILE_AT_LINE (78)) ;
    var_cas_unit = var_cas_counter.reader_unit (inLexique COMMA_SOURCE_FILE_AT_LINE (79)) ;
    var_cas_desc = var_cas_counter.reader_desc (inLexique COMMA_SOURCE_FILE_AT_LINE (80)) ;
  }else{
    var_cas_max_allowed_value = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
    var_cas_ticks_per_base = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
    var_cas_min_cycle = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
    var_cas_source = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE) ;
    var_cas_acc_apps = GGS_lstringlist ::constructor_emptyList () ;
    var_cas_type = GGS_void_counter ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
    var_cas_unit = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE) ;
    var_cas_desc = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE) ;
    var_cas_counter = GGS_counter_obj ::constructor_new (inLexique, var_cas_desc, var_cas_max_allowed_value, var_cas_ticks_per_base, var_cas_min_cycle, var_cas_source, var_cas_acc_apps, var_cas_type, var_cas_unit COMMA_HERE) ;
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
  nt_counter_parameters_ (inLexique, var_cas_max_allowed_value, var_cas_ticks_per_base, var_cas_min_cycle, var_cas_source, var_cas_acc_apps, var_cas_type, var_cas_unit) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
  nt_description_ (inLexique, var_cas_desc) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
  var_cas_counter = GGS_counter_obj ::constructor_new (inLexique, var_cas_desc, var_cas_max_allowed_value, var_cas_ticks_per_base, var_cas_min_cycle, var_cas_source, var_cas_acc_apps, var_cas_type, var_cas_unit COMMA_HERE) ;
  var_cas_counters.modifier_put (inLexique, var_cas_counter_name, var_cas_counter COMMA_SOURCE_FILE_AT_LINE (115)) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//          Implementation of production rule 'counter_parameters'           *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_counter::
pr_counter_parameters_goil_obj_counter_118_25_ (goil_lexique & inLexique,
                                GGS_basic_type  &var_cas_max_allowed_value,
                                GGS_basic_type  &var_cas_ticks_per_base,
                                GGS_basic_type  &var_cas_min_cycle,
                                GGS_lstring  &var_cas_source,
                                GGS_lstringlist  &var_cas_acc_apps,
                                GGS_counter_type  &var_cas_type,
                                GGS_lstring  &var_cas_unit) {
  { bool syntaxRepeat_0 = true ;
    while (syntaxRepeat_0) {
      switch (select_repeat_goil_obj_counter_0 (inLexique)) {
        case 2 : {
          GGS_luint64  var_cas_m ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_MAXALLOWEDVALUE) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_integerNumber (var_cas_m) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
          GGS_lstring  automatic_var_0 ;
          nt_description_ (inLexique, automatic_var_0) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          ::routine_set_uint32 (inLexique,  var_cas_max_allowed_value,  var_cas_m,  GGS_string ("MAXALLOWEDVALUE") COMMA_SOURCE_FILE_AT_LINE (131)) ;
          } break ;
        case 3 : {
          GGS_luint64  var_cas_t ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TICKSPERBASE) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_integerNumber (var_cas_t) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
          GGS_lstring  automatic_var_1 ;
          nt_description_ (inLexique, automatic_var_1) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          ::routine_set_uint32 (inLexique,  var_cas_ticks_per_base,  var_cas_t,  GGS_string ("TICKSPERBASE") COMMA_SOURCE_FILE_AT_LINE (135)) ;
          } break ;
        case 4 : {
          GGS_luint64  var_cas_c ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_MINCYCLE) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_integerNumber (var_cas_c) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
          GGS_lstring  automatic_var_2 ;
          nt_description_ (inLexique, automatic_var_2) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          ::routine_set_uint32 (inLexique,  var_cas_min_cycle,  var_cas_c,  GGS_string ("MINCYCLE") COMMA_SOURCE_FILE_AT_LINE (139)) ;
          } break ;
        case 5 : {
          if (((gOption_goil_5F_options_autosar_5F_on.value ()).operator_isEqual (GGS_bool (false))).isBuiltAndTrue ()) {
            GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("AUTOSAR flag is off, turn it on to use TYPE attribute in COUNTER object") COMMA_SOURCE_FILE_AT_LINE (143)) ;
          }
          GGS_counter_type  var_cas_cpt_type ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TYPE) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          nt_counter_type_attrs_ (inLexique, var_cas_cpt_type) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          { const GGS_counter_type _var_4007 = var_cas_type ; // CAST instruction
            if (_var_4007.getPtr () != NULL) {
              macroValidPointer (_var_4007.getPtr ()) ;
              if (typeid (cPtr_void_counter) == typeid (* (_var_4007.getPtr ()))) {
                var_cas_type = var_cas_cpt_type ;
              }else{
                GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("Redefinitiion of TYPE") COMMA_SOURCE_FILE_AT_LINE (151)) ;
                var_cas_type.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (151)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was defined here") COMMA_SOURCE_FILE_AT_LINE (152)) ;
              }
            }
          }
          } break ;
        case 6 : {
          if (((gOption_goil_5F_options_autosar_5F_on.value ()).operator_isEqual (GGS_bool (false))).isBuiltAndTrue ()) {
            GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("AUTOSAR flag is off, turn it on to use UNIT attribute in COUNTER object") COMMA_SOURCE_FILE_AT_LINE (156)) ;
          }
          GGS_lstring  var_cas_cpt_unit ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_UNIT) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          switch (select_goil_obj_counter_1 (inLexique)) {
            case 1 : {
              inLexique.assignFromAttribute_att_token (var_cas_cpt_unit) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TICKS) COMMA_HERE) ;
              } break ;
            case 2 : {
              inLexique.assignFromAttribute_att_token (var_cas_cpt_unit) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_NANOSECONDS) COMMA_HERE) ;
              } break ;
            default :
              break ;
          }
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          if (((var_cas_unit.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (165))).operator_isEqual (GGS_string (""))).isBuiltAndTrue ()) {
            var_cas_unit = var_cas_cpt_unit ;
          }else{
            GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("UNIT attribute already defined for this counter") COMMA_SOURCE_FILE_AT_LINE (169)) ;
            var_cas_unit.reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was defined here") COMMA_SOURCE_FILE_AT_LINE (170)) ;
          }
          } break ;
        case 7 : {
          GGS_lstring  var_cas_src ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_SOURCE) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_att_token (var_cas_src) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          GGS_lstring  automatic_var_3 ;
          nt_description_ (inLexique, automatic_var_3) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          ::routine_set_lstring_if_empty (inLexique,  var_cas_source,  var_cas_src,  GGS_string ("SOURCE") COMMA_SOURCE_FILE_AT_LINE (174)) ;
          } break ;
        case 8 : {
          GGS_lstring  var_cas_app ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_ACCESSING_5F_APPLICATION) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          inLexique.assignFromAttribute_att_token (var_cas_app) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          GGS_lstring  automatic_var_4 ;
          nt_description_ (inLexique, automatic_var_4) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          ::routine_add_lstring_unique (inLexique,  var_cas_acc_apps,  var_cas_app,  GGS_string ("ACCESSING_APPLICATION") COMMA_SOURCE_FILE_AT_LINE (178)) ;
          } break ;
        case 9 : {
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
          switch (select_goil_obj_counter_2 (inLexique)) {
            case 1 : {
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
              } break ;
            case 2 : {
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
              } break ;
            default :
              break ;
          }
          GGS_lstring  automatic_var_5 ;
          nt_description_ (inLexique, automatic_var_5) ;
          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
          } break ;
        default :
          syntaxRepeat_0 = false ;
          break ;
      }
    }
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//          Implementation of production rule 'counter_type_attrs'           *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_counter::
pr_counter_type_attrs_goil_obj_counter_184_25_ (goil_lexique & inLexique,
                                GGS_counter_type  &var_cas_type) {
  switch (select_goil_obj_counter_3 (inLexique)) {
    case 1 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_SOFTWARE) COMMA_HERE) ;
      var_cas_type = GGS_software_counter ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
      } break ;
    case 2 : {
      GGS_time_constants  var_cas_tc ;
      var_cas_tc = GGS_time_constants ::constructor_emptyList () ;
      GGS_counter_driver  var_cas_cd ;
      var_cas_cd = GGS_void_driver ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_HARDWARE) COMMA_HERE) ;
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
      { bool syntaxRepeat_4 = true ;
        while (syntaxRepeat_4) {
          switch (select_repeat_goil_obj_counter_4 (inLexique)) {
            case 2 : {
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_DRIVER) COMMA_HERE) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
              GGS_counter_driver  var_cas_cpt_cd ;
              switch (select_goil_obj_counter_5 (inLexique)) {
                case 1 : {
                  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_OSINTERNAL) COMMA_HERE) ;
                  var_cas_cpt_cd = GGS_os_internal_driver ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
                  } break ;
                case 2 : {
                  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_GPT) COMMA_HERE) ;
                  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
                  GGS_basic_type  var_cas_npht ;
                  var_cas_npht = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
                  GGS_lstring  var_cas_gcn ;
                  var_cas_gcn = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE) ;
                  { bool syntaxRepeat_6 = true ;
                    while (syntaxRepeat_6) {
                      switch (select_repeat_goil_obj_counter_6 (inLexique)) {
                        case 2 : {
                          GGS_luint64  var_cas_ui ;
                          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_NS_5F_PER_5F_HW_5F_TICK) COMMA_HERE) ;
                          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
                          inLexique.assignFromAttribute_integerNumber (var_cas_ui) ;
                          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
                          ::routine_set_uint64 (inLexique,  var_cas_npht,  var_cas_ui,  GGS_string ("NS_PER_HW_TICK") COMMA_SOURCE_FILE_AT_LINE (209)) ;
                          } break ;
                        case 3 : {
                          GGS_lstring  var_cas_cn ;
                          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_GPTCHANNELNAME) COMMA_HERE) ;
                          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
                          inLexique.assignFromAttribute_a_string (var_cas_cn) ;
                          inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_string) COMMA_HERE) ;
                          ::routine_set_lstring_if_empty (inLexique,  var_cas_gcn,  var_cas_cn,  GGS_string ("GPTCHANNELNAME") COMMA_SOURCE_FILE_AT_LINE (213)) ;
                          } break ;
                        default :
                          syntaxRepeat_6 = false ;
                          break ;
                      }
                    }
                  }
                  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
                  { const GGS_basic_type _var_5993 = var_cas_npht ; // CAST instruction
                    if (_var_5993.getPtr () != NULL) {
                      macroValidPointer (_var_5993.getPtr ()) ;
                      if (typeid (cPtr_void) == typeid (* (_var_5993.getPtr ()))) {
                        GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("NS_PER_HW_TICK subattribute not defined for this hardware counter GPT") COMMA_SOURCE_FILE_AT_LINE (219)) ;
                      }else{
                      }
                    }
                  }
                  if (((var_cas_gcn.reader_string (inLexique COMMA_SOURCE_FILE_AT_LINE (220))).operator_isEqual (GGS_string (""))).isBuiltAndTrue ()) {
                    GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("GPTCHANNELNAME subattribute not defined for this hardware counter GPT") COMMA_SOURCE_FILE_AT_LINE (222)) ;
                  }
                  var_cas_cpt_cd = GGS_gpt_driver ::constructor_new (inLexique, GGS_location (inLexique), var_cas_npht, var_cas_gcn COMMA_HERE) ;
                  } break ;
                default :
                  break ;
              }
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
              { const GGS_counter_driver _var_6463 = var_cas_cd ; // CAST instruction
                if (_var_6463.getPtr () != NULL) {
                  macroValidPointer (_var_6463.getPtr ()) ;
                  if (typeid (cPtr_void_driver) == typeid (* (_var_6463.getPtr ()))) {
                    var_cas_cd = var_cas_cpt_cd ;
                  }else{
                    GGS_location (inLexique).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("DRIVER subattribute already defined for this hardware counter") COMMA_SOURCE_FILE_AT_LINE (231)) ;
                    var_cas_cd.reader_location (inLexique COMMA_SOURCE_FILE_AT_LINE (231)).reader_location (inLexique COMMA_HERE).signalGGSSemanticError (inLexique, GGS_string ("was defined here") COMMA_SOURCE_FILE_AT_LINE (232)) ;
                  }
                }
              }
              } break ;
            case 3 : {
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TIMECONSTANTS) COMMA_HERE) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TIMECONSTANT) COMMA_HERE) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
              GGS_basic_type  var_cas_ns ;
              var_cas_ns = GGS_void ::constructor_new (inLexique, GGS_location (inLexique) COMMA_HERE) ;
              GGS_lstring  var_cas_cn ;
              var_cas_cn = GGS_lstring ::constructor_new (inLexique, GGS_string (""), GGS_location (inLexique) COMMA_HERE) ;
              { bool syntaxRepeat_7 = true ;
                while (syntaxRepeat_7) {
                  switch (select_repeat_goil_obj_counter_7 (inLexique)) {
                    case 2 : {
                      GGS_luint64  var_cas_ui ;
                      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_NS) COMMA_HERE) ;
                      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
                      inLexique.assignFromAttribute_integerNumber (var_cas_ui) ;
                      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
                      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
                      ::routine_set_uint64 (inLexique,  var_cas_ns,  var_cas_ui,  GGS_string ("NS") COMMA_SOURCE_FILE_AT_LINE (241)) ;
                      } break ;
                    case 3 : {
                      GGS_lstring  var_cas_c ;
                      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_CONSTNAME) COMMA_HERE) ;
                      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
                      inLexique.assignFromAttribute_a_string (var_cas_c) ;
                      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_string) COMMA_HERE) ;
                      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
                      ::routine_set_lstring_if_empty (inLexique,  var_cas_cn,  var_cas_c,  GGS_string ("CONSTNAME") COMMA_SOURCE_FILE_AT_LINE (245)) ;
                      } break ;
                    default :
                      syntaxRepeat_7 = false ;
                      break ;
                  }
                }
              }
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
              inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
              var_cas_tc._addAssign_operation (var_cas_ns, var_cas_cn) ;
              } break ;
            default :
              syntaxRepeat_4 = false ;
              break ;
          }
        }
      }
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
      var_cas_type = GGS_hardware_counter ::constructor_new (inLexique, GGS_location (inLexique), var_cas_cd, var_cas_tc COMMA_HERE) ;
      } break ;
    default :
      break ;
  }
}

//---------------------------------------------------------------------------*


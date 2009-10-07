//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'goil_obj_ipdu.cpp'                          *
//                        Generated by version 1.9.2                         *
//                      october 7th, 2009, at 10h0'41"                       *
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
#include "goil_obj_ipdu.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_obj_ipdu.ggs", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                 Implementation of production rule 'ipdu'                  *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_ipdu_goil_obj_ipdu_46_11_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_IPDU) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_idf) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
  { bool syntaxRepeat_0 = true ;
    while (syntaxRepeat_0) {
      switch (select_repeat_goil_obj_ipdu_0 (inLexique)) {
        case 2 : {
          GGS_luint64  automatic_var_0 ;
          nt_sizeinbits_ (inLexique, automatic_var_0) ;
          } break ;
        case 3 : {
          nt_ipduproperty_ (inLexique) ;
          } break ;
        case 4 : {
          nt_ipducallout_ (inLexique) ;
          } break ;
        case 5 : {
          nt_layerused_ (inLexique) ;
          } break ;
        default :
          syntaxRepeat_0 = false ;
          break ;
      }
    }
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
  GGS_lstring  automatic_var_1 ;
  nt_description_ (inLexique, automatic_var_1) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//             Implementation of production rule 'ipduproperty'              *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_ipduproperty_goil_obj_ipdu_60_19_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_IPDUPROPERTY) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
  switch (select_goil_obj_ipdu_1 (inLexique)) {
    case 1 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_SENT) COMMA_HERE) ;
      nt_sent_attributes_ (inLexique) ;
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_RECEIVED) COMMA_HERE) ;
      nt_received_attributes_ (inLexique) ;
      } break ;
    default :
      break ;
  }
  GGS_lstring  automatic_var_2 ;
  nt_description_ (inLexique, automatic_var_2) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//             Implementation of production rule 'ipducallout'               *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_ipducallout_goil_obj_ipdu_71_18_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_IPDUCALLOUT) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_string) COMMA_HERE) ;
  GGS_lstring  automatic_var_3 ;
  nt_description_ (inLexique, automatic_var_3) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//              Implementation of production rule 'layerused'                *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_layerused_goil_obj_ipdu_78_16_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_LAYERUSED) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_string) COMMA_HERE) ;
  GGS_lstring  automatic_var_4 ;
  nt_description_ (inLexique, automatic_var_4) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//           Implementation of production rule 'sent_attributes'             *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_sent_attributes_goil_obj_ipdu_85_22_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
  { bool syntaxRepeat_2 = true ;
    while (syntaxRepeat_2) {
      switch (select_repeat_goil_obj_ipdu_2 (inLexique)) {
        case 2 : {
          nt_transmissionmode_ (inLexique) ;
          } break ;
        case 3 : {
          nt_timeout_ (inLexique) ;
          } break ;
        default :
          syntaxRepeat_2 = false ;
          break ;
      }
    }
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//         Implementation of production rule 'received_attributes'           *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_received_attributes_goil_obj_ipdu_94_26_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
  { bool syntaxRepeat_3 = true ;
    while (syntaxRepeat_3) {
      switch (select_repeat_goil_obj_ipdu_3 (inLexique)) {
        case 2 : {
          nt_timeout_ (inLexique) ;
          } break ;
        case 3 : {
          nt_firsttimeout_ (inLexique) ;
          } break ;
        default :
          syntaxRepeat_3 = false ;
          break ;
      }
    }
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//           Implementation of production rule 'transmissionmode'            *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_transmissionmode_goil_obj_ipdu_103_23_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TRANSMISSIONMODE) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
  switch (select_goil_obj_ipdu_4 (inLexique)) {
    case 1 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_DIRECT) COMMA_HERE) ;
      nt_direct_attributes_ (inLexique) ;
      } break ;
    case 2 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_PERIODIC) COMMA_HERE) ;
      nt_periodic_attributes_ (inLexique) ;
      } break ;
    case 3 : {
      inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_MIXED) COMMA_HERE) ;
      nt_mixed_attributes_ (inLexique) ;
      } break ;
    default :
      break ;
  }
  GGS_lstring  automatic_var_5 ;
  nt_description_ (inLexique, automatic_var_5) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//               Implementation of production rule 'timeout'                 *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_timeout_goil_obj_ipdu_116_14_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TIMEOUT) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
  GGS_lstring  automatic_var_6 ;
  nt_description_ (inLexique, automatic_var_6) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//             Implementation of production rule 'firsttimeout'              *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_firsttimeout_goil_obj_ipdu_123_19_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_FIRTSTIMEOUT) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
  GGS_lstring  automatic_var_7 ;
  nt_description_ (inLexique, automatic_var_7) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//          Implementation of production rule 'direct_attributes'            *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_direct_attributes_goil_obj_ipdu_130_24_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
  { bool syntaxRepeat_5 = true ;
    while (syntaxRepeat_5) {
      switch (select_repeat_goil_obj_ipdu_5 (inLexique)) {
        case 2 : {
          nt_minimumdelaytime_ (inLexique) ;
          } break ;
        default :
          syntaxRepeat_5 = false ;
          break ;
      }
    }
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//         Implementation of production rule 'periodic_attributes'           *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_periodic_attributes_goil_obj_ipdu_138_26_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
  { bool syntaxRepeat_6 = true ;
    while (syntaxRepeat_6) {
      switch (select_repeat_goil_obj_ipdu_6 (inLexique)) {
        case 2 : {
          nt_timeperiod_ (inLexique) ;
          } break ;
        case 3 : {
          nt_timeoffset_ (inLexique) ;
          } break ;
        default :
          syntaxRepeat_6 = false ;
          break ;
      }
    }
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//           Implementation of production rule 'mixed_attributes'            *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_mixed_attributes_goil_obj_ipdu_147_23_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7B_) COMMA_HERE) ;
  { bool syntaxRepeat_7 = true ;
    while (syntaxRepeat_7) {
      switch (select_repeat_goil_obj_ipdu_7 (inLexique)) {
        case 2 : {
          nt_timeperiod_ (inLexique) ;
          } break ;
        case 3 : {
          nt_timeoffset_ (inLexique) ;
          } break ;
        case 4 : {
          nt_minimumdelaytime_ (inLexique) ;
          } break ;
        default :
          syntaxRepeat_7 = false ;
          break ;
      }
    }
  }
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__7D_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//           Implementation of production rule 'minimumdelaytime'            *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_minimumdelaytime_goil_obj_ipdu_157_23_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_MINIMUMDELAYTIME) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
  GGS_lstring  automatic_var_8 ;
  nt_description_ (inLexique, automatic_var_8) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//              Implementation of production rule 'timeperiod'               *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_timeperiod_goil_obj_ipdu_164_17_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TIMEPERIOD) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
  GGS_lstring  automatic_var_9 ;
  nt_description_ (inLexique, automatic_var_9) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//              Implementation of production rule 'timeoffset'               *
//                                                                           *
//---------------------------------------------------------------------------*

void goil_obj_ipdu::
pr_timeoffset_goil_obj_ipdu_171_17_ (goil_lexique & inLexique) {
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_TIMEOFFSET) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3D_) COMMA_HERE) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1_uint_5F_number) COMMA_HERE) ;
  GGS_lstring  automatic_var_10 ;
  nt_description_ (inLexique, automatic_var_10) ;
  inLexique.acceptTerminal (ACCEPT_TERMINAL (goil_lexique::goil_lexique_1__3B_) COMMA_HERE) ;
}

//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                     File 'goil_obj_networkmessage.h'                      *
//                        Generated by version 1.9.2                         *
//                      october 7th, 2009, at 10h0'25"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_obj_networkmessage_DEFINED
#define goil_obj_networkmessage_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/C_GGS_Object.h"
#include "galgas/GGS_location.h"
#include "galgas/GGS_data.h"
#include "galgas/GGS_lbool.h"
#include "galgas/GGS_lchar.h"
#include "galgas/GGS_lstring.h"
#include "galgas/GGS_ldouble.h"
#include "galgas/GGS_luint.h"
#include "galgas/GGS_lsint.h"
#include "galgas/GGS_luint64.h"
#include "galgas/GGS_lsint64.h"
#include "galgas/GGS_stringset.h"
#include "galgas/GGS_binaryset.h"
#include "galgas/GGS_filewrapper.h"
#include "galgas/predefined_types.h"
#include "galgas/AC_galgas_class.h"
#include "galgas/AC_galgas_domain.h"
#include "galgas/AC_galgas_mapindex.h"
#include "galgas/AC_galgas_map.h"
#include "galgas/AC_galgas_listmap.h"
#include "galgas/AC_galgas_list.h"
#include "galgas/AC_galgas_sortedlist.h"

//---------------------------------------------------------------------------*

#include "goil_lexique.h"

// Include imported semantics
#include "goil_options.h"
#include "goil_semantics.h"
#include "goil_types_networkmessage.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//             Parser class goil_obj_networkmessage declaration              *
//                                                                           *
//---------------------------------------------------------------------------*

class goil_obj_networkmessage {
  public : virtual ~goil_obj_networkmessage (void) {}

  protected : virtual void nt_networkmess_ (goil_lexique &,
                                GGS_netmess_map  &) = 0 ;

  protected : virtual void nt_ipdu_ref_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_net_messageproperty_ (goil_lexique &,
                                GGS_base_netprop  &) = 0 ;

  protected : virtual void nt_static_mp_ (goil_lexique &,
                                GGS_base_netprop  &) = 0 ;

  protected : virtual void nt_dynamic_mp_ (goil_lexique &,
                                GGS_base_netprop  &) = 0 ;

  protected : virtual void nt_sizeinbits_ (goil_lexique &,
                                GGS_luint64  &) = 0 ;

  protected : virtual void nt_maxsizeinbits_ (goil_lexique &,
                                GGS_luint64  &) = 0 ;

  protected : virtual void nt_bitordering_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_bitposition_ (goil_lexique &,
                                GGS_luint64  &) = 0 ;

  protected : virtual void nt_datainterpretation_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_initialvalue_ (goil_lexique &,
                                GGS_basic_type  &) = 0 ;

  protected : virtual void nt_direction_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_transferproperty_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_description_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : void pr_networkmess_goil_obj_networkmessage_55_18_ (goil_lexique &,
                                GGS_netmess_map  &) ;

  protected : virtual PMSInt16 select_repeat_goil_obj_networkmessage_0 (goil_lexique &) = 0 ;

  protected : void pr_ipdu_ref_goil_obj_networkmessage_92_15_ (goil_lexique &,
                                GGS_lstring  &) ;

  protected : void pr_net_messageproperty_goil_obj_networkmessage_106_26_ (goil_lexique &,
                                GGS_base_netprop  &) ;

  protected : virtual PMSInt16 select_goil_obj_networkmessage_1 (goil_lexique &) = 0 ;

  protected : void pr_static_mp_goil_obj_networkmessage_138_16_ (goil_lexique &,
                                GGS_base_netprop  &) ;

  protected : virtual PMSInt16 select_repeat_goil_obj_networkmessage_2 (goil_lexique &) = 0 ;

  protected : void pr_dynamic_mp_goil_obj_networkmessage_239_17_ (goil_lexique &,
                                GGS_base_netprop  &) ;

  protected : virtual PMSInt16 select_repeat_goil_obj_networkmessage_3 (goil_lexique &) = 0 ;

  protected : void pr_sizeinbits_goil_obj_networkmessage_255_17_ (goil_lexique &,
                                GGS_luint64  &) ;

  protected : void pr_maxsizeinbits_goil_obj_networkmessage_264_20_ (goil_lexique &,
                                GGS_luint64  &) ;

  protected : void pr_bitordering_goil_obj_networkmessage_273_18_ (goil_lexique &,
                                GGS_lstring  &) ;

  protected : virtual PMSInt16 select_goil_obj_networkmessage_4 (goil_lexique &) = 0 ;

  protected : void pr_bitposition_goil_obj_networkmessage_286_18_ (goil_lexique &,
                                GGS_luint64  &) ;

  protected : void pr_datainterpretation_goil_obj_networkmessage_295_25_ (goil_lexique &,
                                GGS_lstring  &) ;

  protected : virtual PMSInt16 select_goil_obj_networkmessage_5 (goil_lexique &) = 0 ;

  protected : void pr_direction_goil_obj_networkmessage_308_16_ (goil_lexique &,
                                GGS_lstring  &) ;

  protected : virtual PMSInt16 select_goil_obj_networkmessage_6 (goil_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_obj_networkmessage_7 (goil_lexique &) = 0 ;

} ;

//---------------------------------------------------------------------------*

#endif

//---------------------------------------------------------------------------*
//                                                                           *
//                           File 'goil_obj_os.h'                            *
//                        Generated by version 1.9.2                         *
//                      october 7th, 2009, at 9h59'10"                       *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_obj_os_DEFINED
#define goil_obj_os_DEFINED

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
#include "goil_types_os.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                   Parser class goil_obj_os declaration                    *
//                                                                           *
//---------------------------------------------------------------------------*

class goil_obj_os {
  public : virtual ~goil_obj_os (void) {}

  protected : virtual void nt_os_ (goil_lexique &,
                                GGS_os_obj  &) = 0 ;

  protected : virtual void nt_description_ (goil_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_free_field_ (goil_lexique &,
                                GGS_ident_map  &) = 0 ;

  protected : virtual void nt_boolean_ (goil_lexique &,
                                GGS_lbool  &) = 0 ;

  protected : void pr_os_goil_obj_os_48_9_ (goil_lexique &,
                                GGS_os_obj  &) ;

  protected : virtual PMSInt16 select_repeat_goil_obj_os_0 (goil_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_obj_os_1 (goil_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_obj_os_2 (goil_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_obj_os_3 (goil_lexique &) = 0 ;

  protected : virtual PMSInt16 select_repeat_goil_obj_os_4 (goil_lexique &) = 0 ;

} ;

//---------------------------------------------------------------------------*

#endif

/*---------------------------------------------------------------------\
|                          ____ _   __ __ ___                          |
|                         |__  / \ / / . \ . \                         |
|                           / / \ V /|  _/  _/                         |
|                          / /__ | | | | | |                           |
|                         /_____||_| |_| |_|                           |
|                                                                      |
\---------------------------------------------------------------------*/
/** \file zypp/detail/LanguageImpl.h
 *
*/
#ifndef ZYPP_DETAIL_LANGUAGEIMPL_H
#define ZYPP_DETAIL_LANGUAGEIMPL_H

#include "zypp/Locale.h"
#include "zypp/detail/LanguageImplIf.h"

///////////////////////////////////////////////////////////////////
namespace zypp
{ /////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////
  namespace detail
  { /////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////
    //
    //	CLASS NAME : LanguageImpl
    //
    /** Class representing a locale (== name of resolvable) */
    class LanguageImpl : public LanguageImplIf
    {
    public:
      /** Default ctor */
      LanguageImpl( Locale loc );
      /** Dtor */
      virtual ~LanguageImpl();

    };
    ///////////////////////////////////////////////////////////////////

    /////////////////////////////////////////////////////////////////
  } // namespace detail
  ///////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////
} // namespace zypp
///////////////////////////////////////////////////////////////////
#endif // ZYPP_DETAIL_LANGUAGEIMPL_H

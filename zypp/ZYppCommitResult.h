/*---------------------------------------------------------------------\
|                          ____ _   __ __ ___                          |
|                         |__  / \ / / . \ . \                         |
|                           / / \ V /|  _/  _/                         |
|                          / /__ | | | | | |                           |
|                         /_____||_| |_| |_|                           |
|                                                                      |
\---------------------------------------------------------------------*/
/** \file	zypp/ZYppCommitResult.h
 *
*/
#ifndef ZYPP_ZYPPCOMMITRESULT_H
#define ZYPP_ZYPPCOMMITRESULT_H

#include <iosfwd>
#include <list>

#include "zypp/PoolItem.h"

///////////////////////////////////////////////////////////////////
namespace zypp
{ /////////////////////////////////////////////////////////////////

  ///////////////////////////////////////////////////////////////////
  //
  //	CLASS NAME : ZYppCommitResult
  //
  /** Result returned from ZYpp::commit.
   * \see \ref ZYpp::commit
   * \todo document fields.
  */
  struct ZYppCommitResult
  {
    ZYppCommitResult()
    : _result(0)
    {}

    typedef std::list<PoolItem_Ref> PoolItemList;

    int          _result;
    PoolItemList _errors;
    PoolItemList _remaining;
    PoolItemList _srcremaining;
  };
  ///////////////////////////////////////////////////////////////////

  /** \relates ZYppCommitResult Stream output. */
  std::ostream & operator<<( std::ostream & str, const ZYppCommitResult & obj );

  /////////////////////////////////////////////////////////////////
} // namespace zypp
///////////////////////////////////////////////////////////////////
#endif // ZYPP_ZYPPCOMMITRESULT_H

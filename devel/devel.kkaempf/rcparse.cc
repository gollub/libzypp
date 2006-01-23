// test for HelixSourceImpl
//

#include <iostream>
#include <fstream>
#include <map>
#include "zypp/base/Logger.h"
#include "zypp/SourceFactory.h"
#include "zypp/Source.h"
#include "zypp/source/SourceImpl.h"
#include "zypp/media/MediaAccess.h"

#include "HelixSourceImpl.h"

using namespace std;
using namespace zypp;

/******************************************************************
**
**
**	FUNCTION NAME : main
**	FUNCTION TYPE : int
**
**	DESCRIPTION :
*/
int main( int argc, char * argv[] )
{
    if (argc < 2) {
	cerr << "Usage: rcparse <helixname>" << endl;
	exit (1);
    }

    INT << "===[START]==========================================" << endl;

    Pathname p = argv[1];

    media::MediaAccess::Ptr media = new media::MediaAccess();
    Source::Impl_Ptr impl = new HelixSourceImpl (media, p);
    SourceFactory _f;
    Source s = _f.createFrom( impl );
    ResStore store = s.resolvables();
    for (ResStore::const_iterator it = store.begin();
	it != store.end(); it++)
    {
	ERR << **it << endl;
    }
    ERR << store << endl;
    INT << "===[END]============================================" << endl;
    return 0;
}

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class DtmfProviderInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool CanInsertDtmf() = 0;

    virtual bool InsertDtmf(int code, int duration) = 0;

    virtual ~DtmfProviderInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveSimpleBase.h"

namespace SharedTypes::v1_20_80 {

struct ParticleCurveLinear : public ::SharedTypes::v1_20_80::ParticleCurveSimpleBase {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ParticleCurveLinear();
#else // @header-generator platform
    virtual uint64 _getMinCurveNodesAllowed() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong _getMinCurveNodesAllowed();

    virtual ulong _getMaxCurveNodesAllowed();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual uint64 _getMaxCurveNodesAllowed() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $_getMinCurveNodesAllowed();
#else // @header-generator platform
    MCFOLD uint64 $_getMinCurveNodesAllowed();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $_getMaxCurveNodesAllowed();
#else // @header-generator platform
    MCFOLD uint64 $_getMaxCurveNodesAllowed();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80

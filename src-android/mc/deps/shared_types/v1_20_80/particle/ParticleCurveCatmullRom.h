#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurveSimpleBase.h"

namespace SharedTypes::v1_20_80 {

struct ParticleCurveCatmullRom : public ::SharedTypes::v1_20_80::ParticleCurveSimpleBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleCurveCatmullRom();

    virtual ulong _getMinCurveNodesAllowed();

    virtual ulong _getMaxCurveNodesAllowed();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ulong $_getMinCurveNodesAllowed();

    MCNAPI ulong $_getMaxCurveNodesAllowed();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80

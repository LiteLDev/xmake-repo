#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/lighting/gradient/LightGradientStorage.h"
#include "mc/client/renderer/lighting/light_propagation/StaticLightPropagator.h"

namespace LightPropagation::Detail {

struct PropagationResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::LightGradientStorage>                       mGradientStorage;
    ::ll::TypedStorage<8, 13976, ::LightPropagation::StaticLightPropagator> mPropagator;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PropagationResources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace LightPropagation::Detail

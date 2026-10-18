#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/lighting/gradient/LightGradientStorage.h"
#include "mc/client/renderer/lighting/light_propagation/StaticLightPropagator.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace LightPropagation::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct PropagationResources {};
#endif // @header-generator platform

} // namespace LightPropagation::Detail

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/RenderFeature.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class FeatureSupportNull {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 20, std::array<bool, 20>> mRenderFeatures;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeatureSupportNull();

    MCNAPI bool checkFeatureSupport(::mce::RenderFeature const) const;

    MCNAPI uint getMaxVertexCount() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
class FeatureSupportNull {};
#endif // @header-generator platform

} // namespace mce

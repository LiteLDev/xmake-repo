#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/RenderFeature.h"

namespace mce {

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

} // namespace mce

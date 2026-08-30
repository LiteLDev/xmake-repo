#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/renderer/hal/base/RenderDeviceBase.h"
#include "mc/deps/renderer/hal/enums/RenderFeature.h"
#include "mc/deps/renderer/hal/null/FeatureSupportNull.h"

// auto generated forward declare list
// clang-format off
namespace mce { class SampleDescription; }
// clang-format on

namespace mce {

class RenderDeviceNull : public ::mce::RenderDeviceBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 23> mFeatureSupportNull;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDeviceNull& operator=(RenderDeviceNull const&);
    RenderDeviceNull(RenderDeviceNull const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderDeviceNull();

    MCNAPI bool checkFeatureSupport(::mce::RenderFeature const) const;

    MCNAPI uint getMaxVertexCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace mce

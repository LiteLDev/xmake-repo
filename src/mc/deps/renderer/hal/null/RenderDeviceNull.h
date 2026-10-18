#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/renderer/hal/base/RenderDeviceBase.h"
#include "mc/deps/renderer/hal/enums/RenderFeature.h"
#include "mc/deps/renderer/hal/null/FeatureSupportNull.h"

// auto generated forward declare list
// clang-format off
namespace mce { class SampleDescription; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/base/RenderDeviceBase.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RenderDeviceNull : public ::mce::RenderDeviceBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 20> mUnk8f4888;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDeviceNull& operator=(RenderDeviceNull const&);
    RenderDeviceNull(RenderDeviceNull const&);
    RenderDeviceNull();
};
#else // @header-generator platform
class RenderDeviceNull {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce

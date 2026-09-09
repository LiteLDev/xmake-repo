#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Singleton.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/renderer/hal/enums/RenderFeature.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Attribute; }
namespace mce { class RenderContext; }
namespace mce { class SampleDescription; }
#ifndef LL_GENERATED_ANDROID_BASE_STUB_RENDERDEVICERESOURCEBASE
#define LL_GENERATED_ANDROID_BASE_STUB_RENDERDEVICERESOURCEBASE
class RenderDeviceResourceBase {};
#endif
// clang-format on

namespace mce {

class RenderDevice : public ::RenderDeviceResourceBase, public ::mce::Singleton<mce::RenderDevice> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::RenderContext>> mImmediateContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderDevice();

    MCNAPI bool checkFeatureSupport(::mce::RenderFeature const) const;

    MCNAPI ::mce::SampleDescription
    getClosestSupportedSampleDescription(::mce::TextureFormat const, ::mce::SampleDescription const&) const;

    MCNAPI uint getMaxVertexCount();

    MCNAPI ~RenderDevice();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce

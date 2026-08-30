#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/FancyFrameRendererResources.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
namespace dragon::rendering { class RayTracingFeatureConfiguration; }
namespace dragon::rendering { class RayTracingResources; }
// clang-format on

namespace mce::framebuilder::bgfxbridge {

struct RTXMinecraftFrameRendererResources : public ::mce::framebuilder::bgfxbridge::FancyFrameRendererResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                          mMissingTexture;
    ::ll::TypedStorage<8, 8, ::dragon::rendering::RayTracingFeatureConfiguration const&> mRayTracingConfig;
    ::ll::TypedStorage<8, 8, ::dragon::rendering::RayTracingResources const&>            mRayTracingResources;
    // NOLINTEND

public:
    // prevent constructor by default
    RTXMinecraftFrameRendererResources& operator=(RTXMinecraftFrameRendererResources const&);
    RTXMinecraftFrameRendererResources();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RTXMinecraftFrameRendererResources();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge

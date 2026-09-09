#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core_graphics/ImageDescription.h"
#include "mc/deps/minecraft_renderer/renderer/TextureLoadState.h"

namespace mce {

struct TextureGroupDebugInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                  mResourceLocation;
    ::ll::TypedStorage<4, 24, std::optional<cg::ImageDescription>> mImageDescription;
    ::ll::TypedStorage<8, 8, ulong>                                mUseCount;
    ::ll::TypedStorage<1, 1, ::TextureLoadState>                   mLoadState;
    // NOLINTEND
};

} // namespace mce

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core_graphics/ImageDescription.h"
#include "mc/deps/minecraft_renderer/renderer/TextureLoadState.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TextureGroupDebugInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk447b5f;
    ::ll::UntypedStorage<4, 24> mUnk1b9924;
    ::ll::UntypedStorage<8, 8>  mUnk9b9936;
    ::ll::UntypedStorage<1, 1>  mUnka79cde;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureGroupDebugInfo& operator=(TextureGroupDebugInfo const&);
    TextureGroupDebugInfo(TextureGroupDebugInfo const&);
    TextureGroupDebugInfo();
};
#else // @header-generator platform
struct TextureGroupDebugInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/external/render_dragon/texture_streaming/MipStatus.h"
#include "mc/external/render_dragon/texture_streaming/TextureHeuristics.h"
#include "mc/external/render_dragon/texture_streaming/TextureUploadState.h"
#include "mc/external/render_dragon/texture_streaming/texture_cache/CacheFetchResult.h"
#include "mc/platform/brstd/shared_future.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::dragon::texturestreaming::TextureHeuristics>    mHeuristics;
    ::ll::UntypedStorage<8, 16>                                                 mCacheLoadFuture;
    ::ll::TypedStorage<8, 24, std::vector<dragon::texturestreaming::MipStatus>> mMipChainStatus;
    ::ll::TypedStorage<8, 8, ulong>                                             mImageKey;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, uint, (glm::qualifier)0>>            mDimensions;
    ::ll::TypedStorage<4, 4, uint>                                              mStorage;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat>                              mTextureFormat;
    ::ll::TypedStorage<1, 1, ::dragon::texturestreaming::TextureUploadState>    mTextureUploadState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TextureData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct TextureData {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming

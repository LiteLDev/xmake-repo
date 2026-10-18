#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/texture_streaming/texture_cache/TextureCacheConfiguration.h"

// auto generated forward declare list
// clang-format off
namespace dragon::texturestreaming { struct TextureStreamingPerformanceTelemetryData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureStreamingConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::dragon::texturestreaming::TextureCacheConfiguration> mTextureCacheConfig;
    ::ll::TypedStorage<8, 8, ulong>                                                  mStreamedTexturesMemoryBudget;
    ::ll::TypedStorage<8, 8, ulong>                                                  mUploadByteBudgetPerFrame;
    ::ll::TypedStorage<4, 4, uint>                                                   mMaxOffScreenMipSize;
    ::ll::TypedStorage<8, 8, ulong>                                                  mAllTexturesMemoryBudget;
    ::ll::UntypedStorage<8, 16>                                                      mSingleMipDefaultMemoryBudget;
    ::ll::UntypedStorage<8, 48>                                                      mPerformanceTelemetryCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureStreamingConfiguration& operator=(TextureStreamingConfiguration const&);
    TextureStreamingConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TextureStreamingConfiguration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct TextureStreamingConfiguration {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/texture_streaming/texture_cache/TextureCacheConfiguration.h"

// auto generated forward declare list
// clang-format off
namespace dragon::texturestreaming { struct TextureStreamingPerformanceTelemetryData; }
// clang-format on

namespace dragon::texturestreaming {

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

} // namespace dragon::texturestreaming

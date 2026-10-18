#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct DenseMipChainStagingState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::dragon::ResolvedTextureResource>  mStagingHandle;
    ::ll::TypedStorage<8, 64, ::dragon::TextureDescription>        mStagingDescription;
    ::ll::TypedStorage<8, 24, std::vector<const cg::ImageBuffer*>> mPendingMips;
    ::ll::TypedStorage<8, 8, ulong>                                mNextMipIndex;
    ::ll::TypedStorage<8, 8, ulong>                                mCurrentByteOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    DenseMipChainStagingState& operator=(DenseMipChainStagingState const&);
    DenseMipChainStagingState(DenseMipChainStagingState const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DenseMipChainStagingState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct DenseMipChainStagingState {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming

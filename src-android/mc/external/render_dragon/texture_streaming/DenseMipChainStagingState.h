#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

namespace dragon::texturestreaming {

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

} // namespace dragon::texturestreaming

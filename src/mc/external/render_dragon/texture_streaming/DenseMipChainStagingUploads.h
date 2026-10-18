#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/texture_streaming/DenseMipChainStagingState.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct DenseMipChainStagingUploads {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<dragon::ResolvedTextureResource*, dragon::texturestreaming::DenseMipChainStagingState>> mUploads;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct DenseMipChainStagingUploads {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming

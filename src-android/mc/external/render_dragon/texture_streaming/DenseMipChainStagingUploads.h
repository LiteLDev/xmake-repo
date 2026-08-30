#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/texture_streaming/DenseMipChainStagingState.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace dragon::texturestreaming {

struct DenseMipChainStagingUploads {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<dragon::ResolvedTextureResource*, dragon::texturestreaming::DenseMipChainStagingState>> mUploads;
    // clang-format on
    // NOLINTEND
};

} // namespace dragon::texturestreaming

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasState.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { struct TextureRequest; }
// clang-format on

namespace dragon::atlas {

struct Data {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<const void*, dragon::atlas::AtlasState>>  mAtlases;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<dragon::atlas::TextureRequest>>> mTextureRequests;
    ::ll::TypedStorage<8, 8, ulong>                                                        mNextAtlasId;
    // NOLINTEND
};

} // namespace dragon::atlas

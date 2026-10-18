#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/atlas/AtlasState.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { struct TextureRequest; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::atlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct Data {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<const void*, dragon::atlas::AtlasState>>  mAtlases;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<dragon::atlas::TextureRequest>>> mTextureRequests;
    ::ll::TypedStorage<8, 8, ulong>                                                        mNextAtlasId;
    // NOLINTEND
};
#else // @header-generator platform
struct Data {};
#endif // @header-generator platform

} // namespace dragon::atlas

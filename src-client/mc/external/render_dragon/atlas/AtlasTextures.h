#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/external/render_dragon/atlas/AttachmentConfig.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"

namespace dragon::atlas {

struct AtlasTextures {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                             mTextures;
    ::ll::TypedStorage<8, 24, std::vector<dragon::atlas::AttachmentConfig>> mAttachments;
    ::ll::TypedStorage<4, 4, uint>                                          mAtlasWidth;
    ::ll::TypedStorage<4, 4, uint>                                          mAtlasHeight;
    // NOLINTEND
};

} // namespace dragon::atlas
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

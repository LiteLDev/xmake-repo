#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::res {

#if defined(LL_PLAT_A) // @header-generator platform
class DragonFrameResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 616>                                 mTextures;
    ::ll::TypedStorage<8, 8, ::dragon::ResolvedTextureResource*> mMissingTextureResource;
    // NOLINTEND
};
#else // @header-generator platform
class DragonFrameResources {};
#endif // @header-generator platform

} // namespace dragon::res

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::res {

#if defined(LL_PLAT_A) // @header-generator platform
class CreateCubemapFromPackedTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>    mTexture;
    ::ll::TypedStorage<4, 4, uint> mNumMips;
    // NOLINTEND
};
#else // @header-generator platform
class CreateCubemapFromPackedTransaction {};
#endif // @header-generator platform

} // namespace dragon::res

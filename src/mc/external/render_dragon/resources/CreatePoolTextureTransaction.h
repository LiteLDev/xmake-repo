#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/TextureDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::res {

#if defined(LL_PLAT_A) // @header-generator platform
class CreatePoolTextureTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::dragon::TextureDescription> mTextureDescription;
    // NOLINTEND
};
#else // @header-generator platform
class CreatePoolTextureTransaction {};
#endif // @header-generator platform

} // namespace dragon::res

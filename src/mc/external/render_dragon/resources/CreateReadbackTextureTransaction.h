#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/TextureDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::res {

#if defined(LL_PLAT_A) // @header-generator platform
class CreateReadbackTextureTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::cg::TextureDescription> mDescription;
    ::ll::TypedStorage<8, 24, std::string>              mName;
    // NOLINTEND
};
#else // @header-generator platform
class CreateReadbackTextureTransaction {};
#endif // @header-generator platform

} // namespace dragon::res

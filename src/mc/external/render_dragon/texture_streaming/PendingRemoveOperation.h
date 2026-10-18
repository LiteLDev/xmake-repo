#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::texturestreaming {

#if defined(LL_PLAT_A) // @header-generator platform
struct PendingRemoveOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::ResolvedTextureResource*> mHandle;
    // NOLINTEND
};
#else // @header-generator platform
struct PendingRemoveOperation {};
#endif // @header-generator platform

} // namespace dragon::texturestreaming

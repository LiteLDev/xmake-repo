#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/MaterialDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::details {

#if defined(LL_PLAT_A) // @header-generator platform
struct CreateMaterialBaseTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::dragon::MaterialDescription> mMaterialDescription;
    ::ll::TypedStorage<1, 1, bool>                           mForceBlobReload;
    // NOLINTEND
};
#else // @header-generator platform
struct CreateMaterialBaseTransaction {};
#endif // @header-generator platform

} // namespace dragon::details

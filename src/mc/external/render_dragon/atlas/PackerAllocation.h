#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/atlas/PackerAllocId.h"
#include "mc/external/render_dragon/atlas/PackerRect.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::atlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct PackerAllocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::dragon::atlas::PackerAllocId> mId;
    ::ll::TypedStorage<4, 16, ::dragon::atlas::PackerRect>   mRect;
    ::ll::TypedStorage<4, 4, uint>                           mData;
    // NOLINTEND
};
#else // @header-generator platform
struct PackerAllocation {};
#endif // @header-generator platform

} // namespace dragon::atlas

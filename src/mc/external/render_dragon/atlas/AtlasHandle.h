#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/atlas/IAtlasHandle.h"
#include "mc/platform/brstd/move_only_function.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::atlas {

#if defined(LL_PLAT_A) // @header-generator platform
class AtlasHandle : public ::dragon::atlas::IAtlasHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mFinally;
    // NOLINTEND
};
#else // @header-generator platform
class AtlasHandle {};
#endif // @header-generator platform

} // namespace dragon::atlas

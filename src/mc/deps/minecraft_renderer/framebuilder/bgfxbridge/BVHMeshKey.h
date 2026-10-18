#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class Mesh; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder::bgfxbridge {

#if defined(LL_PLAT_A) // @header-generator platform
struct BVHMeshKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long const>               mMeshGroupId;
    ::ll::TypedStorage<2, 2, ushort const>             mSubSpanId;
    ::ll::TypedStorage<8, 8, ::mce::Mesh const* const> mMeshPtr;
    // NOLINTEND
};
#else // @header-generator platform
struct BVHMeshKey {};
#endif // @header-generator platform

} // namespace mce::framebuilder::bgfxbridge

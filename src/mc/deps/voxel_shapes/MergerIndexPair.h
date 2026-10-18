#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

struct MergerIndexPair {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, schar> first;
    ::ll::TypedStorage<1, 1, schar> second;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk34726a;
    ::ll::UntypedStorage<1, 1> mUnk8f52e0;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    MergerIndexPair& operator=(MergerIndexPair const&);
    MergerIndexPair(MergerIndexPair const&);
    MergerIndexPair();
#endif // @header-generator platform
};

} // namespace VoxelShapes

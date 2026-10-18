#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/dynamic_bitset.h"
#else // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#endif // @header-generator platform

namespace VoxelShapes {

class Cells {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // Cells inner types define
    using size_type = uint;

    using BitsetContainer = ::Bedrock::small_vector<uchar, 48>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, schar> mXSize;
    ::ll::TypedStorage<1, 1, schar> mYSize;
    ::ll::TypedStorage<1, 1, schar> mZSize;
    ::ll::UntypedStorage<8, 72>     mStorage;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnkbc4301;
    ::ll::UntypedStorage<1, 1>  mUnk753a0d;
    ::ll::UntypedStorage<1, 1>  mUnke06a37;
    ::ll::UntypedStorage<8, 72> mUnk3ea7f6;
    // NOLINTEND

public:
    // prevent constructor by default
    Cells& operator=(Cells const&);
    Cells(Cells const&);
    Cells();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void forEachBox(
        ::brstd::function_ref<
            void(schar, schar, schar, schar, schar, schar) const,
            void(schar, schar, schar, schar, schar, schar)> consumer,
        bool                                                mergeNeighbors
    ) const;

    MCNAPI ::VoxelShapes::Cells reverseAxes(bool reverseX, bool reverseY, bool reverseZ) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VoxelShapes

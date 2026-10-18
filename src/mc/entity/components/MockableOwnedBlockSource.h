#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class IBlockSource;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class MockableOwnedBlockSource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<DimensionType>> mDimensionType;
    ::ll::TypedStorage<8, 280, std::optional<BlockSource>> mBlockSource;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>   mUnkc6081e;
    ::ll::UntypedStorage<8, 272> mUnk261323;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ::IBlockSource const& get() const;

    MCNAPI ::IBlockSource& get();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    MockableOwnedBlockSource& operator=(MockableOwnedBlockSource const&);
    MockableOwnedBlockSource(MockableOwnedBlockSource const&);
    MockableOwnedBlockSource();
#endif // @header-generator platform
};

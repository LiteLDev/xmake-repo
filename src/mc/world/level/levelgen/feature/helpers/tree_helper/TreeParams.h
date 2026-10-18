#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace TreeHelper {

struct TreeParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                           mNumBaseClusters;
    ::ll::TypedStorage<4, 4, int>                           mClusterRadius;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mValidBaseBlocks;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mBaseMayReplace;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mMayGrowOn;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mMayReplace;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mMayGrowThrough;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                               mNumBaseClusters;
    ::ll::TypedStorage<4, 4, int>                               mClusterRadius;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mValidBaseBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mBaseMayReplace;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayGrowOn;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayReplace;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayGrowThrough;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _replaceBaseBlockAt(::IBlockWorldGenAPI&, ::BlockPos const&) const;

    MCNAPI ~TreeParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void _replaceBaseBlockAt(::IBlockWorldGenAPI& target, ::BlockPos const& pos) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace TreeHelper

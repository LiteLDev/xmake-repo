#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ChanceInformation.h"
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/block/states/CommonDirection.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
// clang-format on

namespace TreeHelper {

struct AttachableDecoration {
public:
    // AttachableDecoration inner types declare
    // clang-format off
    struct DecorationBlockDescriptor;
    struct DirectionMask;
    // clang-format on

    // AttachableDecoration inner types define
    enum class GrowthDirection : int {
        Down = 0,
        Up   = 1,
        Out  = 2,
    };

    struct DecorationBlockDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 168, ::BlockDescriptor> blockDescriptor;
#else // @header-generator platform
        ::ll::TypedStorage<8, 176, ::BlockDescriptor> blockDescriptor;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 8, ::IntRange>          count;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        DecorationBlockDescriptor& operator=(DecorationBlockDescriptor const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct DirectionMask {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mWest;
        ::ll::TypedStorage<1, 1, bool> mEast;
        ::ll::TypedStorage<1, 1, bool> mNorth;
        ::ll::TypedStorage<1, 1, bool> mSouth;
        ::ll::TypedStorage<1, 1, bool> mUp;
        ::ll::TypedStorage<1, 1, bool> mDown;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::TreeHelper::AttachableDecoration::GrowthDirection> mDirection;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mNumSteps;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mDecorationBlock;
    ::ll::TypedStorage<4, 12, ::ChanceInformation> mDecorationChance;
    ::ll::TypedStorage<8, 24, std::vector<TreeHelper::AttachableDecoration::DecorationBlockDescriptor>> mDecorationSequence;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                 mNumSteps;
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>                                 mDecorationBlock;
    ::ll::TypedStorage<4, 12, ::ChanceInformation>                                mDecorationChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::TreeHelper::AttachableDecoration::DecorationBlockDescriptor>>
        mDecorationSequence;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _placeMultiDecoration(
        ::IBlockWorldGenAPI&,
        ::Random&,
        ::BlockPos const&,
        ::CommonDirection const,
        ::BlockPos const&
#else // @header-generator platform
    MCAPI void _placeMultiDecoration(
        ::IBlockWorldGenAPI&    target,
        ::Random&               random,
        ::BlockPos const&       pos,
        ::CommonDirection const dir,
        ::BlockPos const&       origin
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void placeDecoration(
        ::IBlockWorldGenAPI&,
        ::BlockPos const&,
        ::Random&,
        ::TreeHelper::AttachableDecoration::DirectionMask const&
#else // @header-generator platform
    MCAPI void placeDecoration(
        ::IBlockWorldGenAPI&                                     target,
        ::BlockPos const&                                        pos,
        ::Random&                                                random,
        ::TreeHelper::AttachableDecoration::DirectionMask const& mask
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~AttachableDecoration();
#else // @header-generator platform
    MCAPI ~AttachableDecoration();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace TreeHelper

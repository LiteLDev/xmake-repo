#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class RandomSpreadTreeCanopy : public ::ITreeCanopy {
public:
    // RandomSpreadTreeCanopy inner types declare
    // clang-format off
    struct WeightedBlockReference;
    // clang-format on

    // RandomSpreadTreeCanopy inner types define
    struct WeightedBlockReference {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 168, ::BlockDescriptor> mBlockDescriptor;
#else // @header-generator platform
        ::ll::TypedStorage<8, 176, ::BlockDescriptor> mBlockDescriptor;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, float>               mWeight;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        WeightedBlockReference& operator=(WeightedBlockReference const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::IntRange>                                                   mCanopyHeight;
    ::ll::TypedStorage<4, 8, ::IntRange>                                                   mCanopyRadius;
    ::ll::TypedStorage<4, 4, int>                                                          mLeafPlacementAttempts;
    ::ll::TypedStorage<8, 24, std::vector<RandomSpreadTreeCanopy::WeightedBlockReference>> mLeavesBlockDescriptors;
#else // @header-generator platform
    ::ll::TypedStorage<4, 8, ::IntRange>                                                       mCanopyHeight;
    ::ll::TypedStorage<4, 8, ::IntRange>                                                       mCanopyRadius;
    ::ll::TypedStorage<4, 4, int>                                                              mLeafPlacementAttempts;
    ::ll::TypedStorage<8, 24, ::std::vector<::RandomSpreadTreeCanopy::WeightedBlockReference>> mLeavesBlockDescriptors;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~RandomSpreadTreeCanopy();
#else // @header-generator platform
    virtual ~RandomSpreadTreeCanopy() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> placeCanopy(::IBlockWorldGenAPI&, ::BlockPos const&, ::ITreeCanopy::BranchSize const&, ::Random&, ::RenderParams&, ::TreeHelper::TreeParams const&, std::vector<BlockPos> const&, std::vector<ITreeCanopy::BranchSize> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RandomSpreadTreeCanopy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> placeCanopy(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&,
        ::ITreeCanopy::BranchSize const&,
        ::Random& random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&  treeParams,
        ::std::vector<::BlockPos> const& attachmentPositions,
        ::std::vector<::ITreeCanopy::BranchSize> const&
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI&,
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI& target,
#endif // @header-generator platform
        ::BlockPos const&,
        ::ITreeCanopy::BranchSize const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::Random&,
#else // @header-generator platform
        ::Random& random,
#endif // @header-generator platform
        ::RenderParams&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::TreeHelper::TreeParams const&,
        std::vector<BlockPos> const&,
        std::vector<ITreeCanopy::BranchSize> const&
#else // @header-generator platform
        ::TreeHelper::TreeParams const&  treeParams,
        ::std::vector<::BlockPos> const& attachmentPositions,
        ::std::vector<::ITreeCanopy::BranchSize> const&
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

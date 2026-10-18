#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ChanceInformation.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"
#include "mc/world/level/levelgen/feature/helpers/tree_helper/AttachableDecoration.h"

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

class SimpleTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mMinOffset;
    ::ll::TypedStorage<4, 4, int>                                  mMaxOffset;
    ::ll::TypedStorage<4, 4, int>                                  mMinWidth;
    ::ll::TypedStorage<4, 4, float>                                mRiseInv;
    ::ll::TypedStorage<4, 4, int>                                  mRun;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>                  mLeafBlockDescriptor;
    ::ll::TypedStorage<8, 216, ::TreeHelper::AttachableDecoration> mDecoration;
    ::ll::TypedStorage<8, 24, std::vector<ChanceInformation>>      mVariationChancePerLayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::BlockDescriptor>                  mLeafBlockDescriptor;
    ::ll::TypedStorage<8, 224, ::TreeHelper::AttachableDecoration> mDecoration;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChanceInformation>>  mVariationChancePerLayer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~SimpleTreeCanopy();
#else // @header-generator platform
    virtual ~SimpleTreeCanopy() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> placeCanopy(::IBlockWorldGenAPI&, ::BlockPos const&, ::ITreeCanopy::BranchSize const&, ::Random&, ::RenderParams&, ::TreeHelper::TreeParams const&, std::vector<BlockPos> const&, std::vector<ITreeCanopy::BranchSize> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> placeCanopy(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
        ::ITreeCanopy::BranchSize const&,
        ::Random& random,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&,
        ::std::vector<::BlockPos> const&,
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
        ::BlockPos const&,
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI& target,
        ::BlockPos const&    pos,
#endif // @header-generator platform
        ::ITreeCanopy::BranchSize const&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::Random&,
#else // @header-generator platform
        ::Random& random,
#endif // @header-generator platform
        ::RenderParams&,
        ::TreeHelper::TreeParams const&,
#if defined(LL_PLAT_A) // @header-generator platform
        std::vector<BlockPos> const&,
        std::vector<ITreeCanopy::BranchSize> const&
#else // @header-generator platform
        ::std::vector<::BlockPos> const&,
        ::std::vector<::ITreeCanopy::BranchSize> const&
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

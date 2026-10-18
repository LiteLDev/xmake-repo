#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class RoofedTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mHeight;
    ::ll::TypedStorage<4, 4, int>                 mCoreWidth;
    ::ll::TypedStorage<1, 1, bool>                mUseParsedCoreWidth;
    ::ll::TypedStorage<4, 4, int>                 mOuterRadius;
    ::ll::TypedStorage<4, 4, int>                 mInnerRadius;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mLeavesBlockDescriptor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::BlockDescriptor> mLeavesBlockDescriptor;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~RoofedTreeCanopy();
#else // @header-generator platform
    virtual ~RoofedTreeCanopy() /*override*/ = default;
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
        ::IBlockWorldGenAPI&             target,
        ::BlockPos const&                pos,
        ::ITreeCanopy::BranchSize const& trunkSize,
        ::Random&                        random,
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
        ::ITreeCanopy::BranchSize const&,
        ::Random&,
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI&             target,
        ::BlockPos const&                pos,
        ::ITreeCanopy::BranchSize const& trunkSize,
        ::Random&                        random,
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

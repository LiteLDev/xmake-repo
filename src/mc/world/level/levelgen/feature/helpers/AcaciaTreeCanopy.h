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

class AcaciaTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mCanopySize;
    ::ll::TypedStorage<1, 1, bool>                mSimplePattern;
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
    virtual ~AcaciaTreeCanopy();
#else // @header-generator platform
    virtual ~AcaciaTreeCanopy() /*override*/ = default;
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
        ::Random&,
        ::RenderParams&,
        ::TreeHelper::TreeParams const& treeParams,
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
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI&             target,
        ::BlockPos const&                pos,
        ::ITreeCanopy::BranchSize const& trunkSize,
#endif // @header-generator platform
        ::Random&,
        ::RenderParams&,
#if defined(LL_PLAT_A) // @header-generator platform
        ::TreeHelper::TreeParams const&,
        std::vector<BlockPos> const&,
        std::vector<ITreeCanopy::BranchSize> const&
#else // @header-generator platform
        ::TreeHelper::TreeParams const& treeParams,
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/helpers/ITreeCanopy.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
namespace TreeHelper { struct TreeParams; }
// clang-format on

class PineTreeCanopy : public ::ITreeCanopy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::IntRange>          mHeight;
    ::ll::TypedStorage<4, 4, int>                 mRadius;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mLeavesBlockDescriptor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PineTreeCanopy();

    virtual std::optional<BlockPos> placeCanopy(::IBlockWorldGenAPI&, ::BlockPos const&, ::ITreeCanopy::BranchSize const&, ::Random&, ::RenderParams&, ::TreeHelper::TreeParams const&, std::vector<BlockPos> const&, std::vector<ITreeCanopy::BranchSize> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<BlockPos> $placeCanopy(
        ::IBlockWorldGenAPI&,
        ::BlockPos const&,
        ::ITreeCanopy::BranchSize const&,
        ::Random&,
        ::RenderParams&,
        ::TreeHelper::TreeParams const&,
        std::vector<BlockPos> const&,
        std::vector<ITreeCanopy::BranchSize> const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class IBlockWorldGenAPI;
class Random;
namespace SpeleothemUtils { class WindOffsetter; }
namespace ValueProviders { struct UniformFloat; }
// clang-format on

class LargeDripstoneFeature : public ::IFeature {
public:
    // LargeDripstoneFeature inner types declare
    // clang-format off
    class LargeDripstone;
    // clang-format on

    // LargeDripstoneFeature inner types define
    class LargeDripstone {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> mRoot;
        ::ll::TypedStorage<1, 1, bool const>  mPointingUp;
        ::ll::TypedStorage<4, 4, int>         mRadius;
        ::ll::TypedStorage<4, 4, float const> mBluntness;
        ::ll::TypedStorage<4, 4, float const> mScale;
        // NOLINTEND

    public:
        // prevent constructor by default
        LargeDripstone();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool moveBackUntilBaseIsInsideStoneAndShrinkRadiusIfNecessary(
            ::IBlockWorldGenAPI&,
            ::SpeleothemUtils::WindOffsetter const&
        );

        MCNAPI void placeBlocks(::IBlockWorldGenAPI&, ::Random&, ::SpeleothemUtils::WindOffsetter const&) const;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LargeDripstoneFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

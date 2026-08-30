#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class CompoundTag;
class Item;
class ItemStack;
class Vec3;
namespace Json { class Value; }
// clang-format on

class SeedItemComponentLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Item&>                       mOwner;
    ::ll::TypedStorage<8, 8, ::Block const*>                mResult;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mTargetLandBlocks;
    ::ll::TypedStorage<1, 1, bool>                          mPlantAtAnyVisibleSolidSurface;
    ::ll::TypedStorage<1, 1, bool>                          mIsPlanting;
    ::ll::TypedStorage<1, 1, uchar>                         mFaceToPlantAt;
    // NOLINTEND

public:
    // prevent constructor by default
    SeedItemComponentLegacy& operator=(SeedItemComponentLegacy const&);
    SeedItemComponentLegacy(SeedItemComponentLegacy const&);
    SeedItemComponentLegacy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SeedItemComponentLegacy(::Item&);

    MCNAPI std::unique_ptr<CompoundTag> buildNetworkTag() const;

    MCNAPI bool canUseOn(::Actor&, ::BlockPos const&, uchar) const;

    MCNAPI bool init(::Json::Value const&, ::MolangVersion);

    MCNAPI bool isPlanting() const;

    MCNAPI void setPlanting(bool);

    MCNAPI bool useOn(::ItemStack&, ::Actor&, ::BlockPos const&, uchar, ::Vec3 const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Json::Value initializeFromNetwork(::CompoundTag const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Item&);
    // NOLINTEND
};

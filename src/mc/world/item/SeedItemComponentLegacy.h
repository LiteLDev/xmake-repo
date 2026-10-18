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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Item&>                       mOwner;
    ::ll::TypedStorage<8, 8, ::Block const*>                mResult;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mTargetLandBlocks;
    ::ll::TypedStorage<1, 1, bool>                          mPlantAtAnyVisibleSolidSurface;
    ::ll::TypedStorage<1, 1, bool>                          mIsPlanting;
    ::ll::TypedStorage<1, 1, uchar>                         mFaceToPlantAt;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Item&>                           mOwner;
    ::ll::TypedStorage<8, 8, ::Block const*>                    mResult;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mTargetLandBlocks;
    ::ll::TypedStorage<1, 1, bool>                              mPlantAtAnyVisibleSolidSurface;
    ::ll::TypedStorage<1, 1, bool>                              mIsPlanting;
    ::ll::TypedStorage<1, 1, uchar>                             mFaceToPlantAt;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SeedItemComponentLegacy& operator=(SeedItemComponentLegacy const&);
    SeedItemComponentLegacy(SeedItemComponentLegacy const&);
    SeedItemComponentLegacy();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SeedItemComponentLegacy(::Item&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> buildNetworkTag() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool canUseOn(::Actor& entity, ::BlockPos const& blockPos, uchar face) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canUseOn(::Actor&, ::BlockPos const&, uchar) const;
#else // @header-generator platform
    MCAPI bool init(::Json::Value const& data, ::MolangVersion molangVersion);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool init(::Json::Value const&, ::MolangVersion);

    MCNAPI bool isPlanting() const;

    MCNAPI void setPlanting(bool);

    MCNAPI bool useOn(::ItemStack&, ::Actor&, ::BlockPos const&, uchar, ::Vec3 const&);
#else // @header-generator platform
    MCAPI bool
    useOn(::ItemStack& instance, ::Actor& actor, ::BlockPos const& blockPos, uchar face, ::Vec3 const& clickPos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Json::Value initializeFromNetwork(::CompoundTag const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Item&);
#else // @header-generator platform
    MCAPI static ::Json::Value initializeFromNetwork(::CompoundTag const& tag);
#endif // @header-generator platform
    // NOLINTEND
};

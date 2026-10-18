#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/entity/components_json_legacy/RestrictionType.h"
#include "mc/world/level/BlockPos.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/BlockType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BlockType;
#endif // @header-generator platform
class CompoundTag;
class DataLoadHelper;
// clang-format on

class HomeComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::RestrictionType> mRestrictionType;
    ::ll::TypedStorage<4, 4, int>               mRestrictionRadius;
    ::ll::TypedStorage<4, 4, int>               mRestrictionRadiusSqr;
    ::ll::TypedStorage<4, 4, int>               mCooldownTicksMax;
    ::ll::TypedStorage<4, 4, int>               mCooldownTicks;
    ::ll::UntypedStorage<8, 24>                 mHomeBlocks;
    ::ll::TypedStorage<4, 12, ::BlockPos>       mHomePos;
    ::ll::TypedStorage<4, 4, ::DimensionType>   mDimensionId;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::RestrictionType>                            mRestrictionType;
    ::ll::TypedStorage<4, 4, int>                                          mRestrictionRadius;
    ::ll::TypedStorage<4, 4, int>                                          mRestrictionRadiusSqr;
    ::ll::TypedStorage<4, 4, int>                                          mCooldownTicksMax;
    ::ll::TypedStorage<4, 4, int>                                          mCooldownTicks;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakPtr<::BlockType const>>> mHomeBlocks;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                  mHomePos;
    ::ll::TypedStorage<4, 4, ::DimensionType>                              mDimensionId;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    HomeComponent& operator=(HomeComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI HomeComponent();
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI bool hasValidBlockAtHomePos(::BlockSource const& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos getHomePos() const;
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getRestrictionRadius() const;

    MCNAPI int getRestrictionRadiusSqr() const;

    MCNAPI bool hasAnyRestriction() const;

    MCNAPI bool hasSpecificRestriction(::RestrictionType) const;

    MCNAPI bool hasValidBlockAtHomePos(::BlockSource const&) const;

    MCNAPI bool hasValidHomePos() const;

    MCNAPI bool isInHomeDimension(::Actor const&) const;

    MCNAPI bool isWithinRestriction(::BlockPos const&) const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void setHome(::BlockPos const&, ::DimensionType const&);

    MCNAPI void tick(::Actor&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void tick(::Actor& owner);
#endif // @header-generator platform
    // NOLINTEND
};

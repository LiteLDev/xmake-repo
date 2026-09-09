#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/entity/components_json_legacy/RestrictionType.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class HomeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RestrictionType> mRestrictionType;
    ::ll::TypedStorage<4, 4, int>               mRestrictionRadius;
    ::ll::TypedStorage<4, 4, int>               mRestrictionRadiusSqr;
    ::ll::TypedStorage<4, 4, int>               mCooldownTicksMax;
    ::ll::TypedStorage<4, 4, int>               mCooldownTicks;
    ::ll::UntypedStorage<8, 24>                 mHomeBlocks;
    ::ll::TypedStorage<4, 12, ::BlockPos>       mHomePos;
    ::ll::TypedStorage<4, 4, ::DimensionType>   mDimensionId;
    // NOLINTEND

public:
    // prevent constructor by default
    HomeComponent& operator=(HomeComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HomeComponent();

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI ::BlockPos getHomePos() const;

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
    // NOLINTEND
};

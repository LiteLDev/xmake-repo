#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class BreathableComponent {
public:
    // BreathableComponent inner types define
    enum class BreathableState : int {
        InAir                        = 0,
        InWater                      = 1,
        InLava                       = 2,
        InSolids                     = 3,
        InBreathableOverrideBlock    = 4,
        InNonBreathableOverrideBlock = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mSuffocateTime;
    ::ll::TypedStorage<4, 4, float>                                  mInhaleTime;
    ::ll::TypedStorage<4, 4, int>                                    mAirRegenPerTick;
    ::ll::TypedStorage<1, 1, bool>                                   mBreathesAir;
    ::ll::TypedStorage<1, 1, bool>                                   mBreathesWater;
    ::ll::TypedStorage<1, 1, bool>                                   mBreathesLava;
    ::ll::TypedStorage<1, 1, bool>                                   mBreathesSolids;
    ::ll::TypedStorage<1, 1, bool>                                   mGeneratesBubbles;
    ::ll::TypedStorage<2, 2, short>                                  mAirSupply;
    ::ll::TypedStorage<2, 2, short>                                  mAirSupplyMax;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>          mBreathableBlocks;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>>          mNonBreathableBlocks;
    ::ll::TypedStorage<4, 4, ::BreathableComponent::BreathableState> mBreathableState;
    // NOLINTEND

public:
    // prevent constructor by default
    BreathableComponent& operator=(BreathableComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BreathableComponent();

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI bool canBreathe(::Actor const&) const;

    MCNAPI bool canBreatheWater() const;

    MCNAPI bool generatesBubbles() const;

    MCNAPI int getAirRegenPerTick() const;

    MCNAPI short getAirSupply() const;

    MCNAPI ::BreathableComponent::BreathableState const& getBreathableState() const;

    MCNAPI float getInhaleTime() const;

    MCNAPI short getMaxAirSupply() const;

    MCNAPI int getSuffocateTime() const;

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void setAirSupply(short);

    MCNAPI void updateBreathableState(::Actor&);

    MCNAPI ~BreathableComponent();
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
    // NOLINTEND
};

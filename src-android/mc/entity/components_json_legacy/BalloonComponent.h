#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class DistanceConstraint;
class Vec3;
// clang-format on

class BalloonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mAttachedID;
    ::ll::TypedStorage<4, 4, float>           mMaxHeight;
    ::ll::TypedStorage<1, 1, bool>            mShouldDropAttached;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BalloonComponent();

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void computeMaxHeight(::Actor&);

    MCNAPI void detach(::Actor&);

    MCNAPI ::Actor* getAttachedActor(::Actor&);

    MCNAPI float getMaxHeight() const;

    MCNAPI void integrate(::Actor&);

    MCNAPI void onRemoved(::Actor&, bool);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void setAttachedActor(::Actor&, ::Actor&);

    MCNAPI bool shouldPop(::Actor&, bool&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Actor* getBalloonForActor(::Actor const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& ATTACHED_TAG();

    MCNAPI static float const& FENCE_BALLOON_RANGE();

    MCNAPI static float const& MAX_BALLOON_RANGE();

    MCNAPI static std::string const& MAX_HEIGHT_TAG();

    MCNAPI static std::string const& SHOULD_DROP_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

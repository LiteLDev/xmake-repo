#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
#if defined(LL_PLAT_A) // @header-generator platform
class DistanceConstraint;
class Vec3;
#else // @header-generator platform
struct ActorUniqueID;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BalloonComponent();
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void detach(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void computeMaxHeight(::Actor&);
#else // @header-generator platform
    MCAPI void integrate(::Actor& owner);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void detach(::Actor&);
#else // @header-generator platform
    MCAPI void onRemoved(::Actor& owner, bool shouldPop);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* getAttachedActor(::Actor&);
#else // @header-generator platform
    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getMaxHeight() const;
#else // @header-generator platform
    MCAPI void setAttachedActor(::Actor& owner, ::Actor& toAttach);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void integrate(::Actor&);

    MCNAPI void onRemoved(::Actor&, bool);

    MCNAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void setAttachedActor(::Actor&, ::Actor&);

    MCNAPI bool shouldPop(::Actor&, bool&);
#else // @header-generator platform
    MCAPI bool shouldPop(::Actor& owner, bool& removeAttached);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Actor* getBalloonForActor(::Actor const&);
#else // @header-generator platform
    MCAPI static ::Actor* getBalloonForActor(::Actor const& actor);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& ATTACHED_TAG();
#else // @header-generator platform
    MCAPI static ::std::string const& ATTACHED_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& FENCE_BALLOON_RANGE();
#else // @header-generator platform
    MCAPI static ::std::string const& MAX_HEIGHT_TAG();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& MAX_BALLOON_RANGE();

    MCNAPI static std::string const& MAX_HEIGHT_TAG();

    MCNAPI static std::string const& SHOULD_DROP_TAG();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static ::std::string const& SHOULD_DROP_TAG();
#endif // @header-generator platform
    // NOLINTEND
};

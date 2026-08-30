#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"
#include "mc/world/actor/ai/village/POIType.h"

// auto generated forward declare list
// clang-format off
class Mob;
class POIInstance;
struct GoalId;
// clang-format on

class HideGoal : public ::MoveToPOIGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mHideAttempts;
    // NOLINTEND

public:
    // prevent constructor by default
    HideGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HideGoal();

    virtual bool canUse();

    virtual bool canContinueToUse();

    virtual void start();

    virtual void stop();

    virtual void appendDebugInfo(std::string&) const;

    virtual ulong _getRepathTime() const;

    virtual std::weak_ptr<POIInstance> _getOwnedPOI(::POIType) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit HideGoal(::Mob&);

    MCNAPI void _sendSoundTheAlarmAchievement() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI ulong $_getRepathTime() const;

    MCNAPI std::weak_ptr<POIInstance> $_getOwnedPOI(::POIType) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

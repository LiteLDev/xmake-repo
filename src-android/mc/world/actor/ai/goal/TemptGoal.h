#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ai/goal/TemptBaseGoal.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class ItemDescriptor;
class Mob;
struct FloatRange;
// clang-format on

class TemptGoal : public ::TemptBaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPathfinderWaitTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    TemptGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TemptGoal();

    virtual bool canUse();

    virtual void start();

    virtual void stop();

    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;

    virtual void updateMovement();

    virtual void stopMovement();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TemptGoal(
        ::Mob&,
        float,
        std::vector<ItemDescriptor> const&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::FloatRange,
        bool,
        float,
        float,
        bool,
        bool,
        ::ActorDefinitionTrigger const&,
        ::ActorDefinitionTrigger const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Mob&,
        float,
        std::vector<ItemDescriptor> const&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::FloatRange,
        bool,
        float,
        float,
        bool,
        bool,
        ::ActorDefinitionTrigger const&,
        ::ActorDefinitionTrigger const&
    );
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

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI void $updateMovement();

    MCNAPI void $stopMovement();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

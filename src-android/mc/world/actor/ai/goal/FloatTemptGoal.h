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
struct GoalId;
// clang-format on

class FloatTemptGoal : public ::TemptBaseGoal {
public:
    // prevent constructor by default
    FloatTemptGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FloatTemptGoal();

    virtual void appendDebugInfo(std::string&) const;

    virtual void updateMovement();

    virtual void stopMovement();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FloatTemptGoal(
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

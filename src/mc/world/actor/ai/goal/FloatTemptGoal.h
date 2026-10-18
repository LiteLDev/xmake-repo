#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ai/goal/TemptBaseGoal.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class ItemDescriptor;
class Mob;
struct FloatRange;
struct GoalId;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class FloatTemptGoal : public ::TemptBaseGoal {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    FloatTemptGoal();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FloatTemptGoal();
#else // @header-generator platform
    virtual void updateMovement() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual void stopMovement() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void $updateMovement();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateMovement();
#else // @header-generator platform
    MCFOLD void $stopMovement();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stopMovement();
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

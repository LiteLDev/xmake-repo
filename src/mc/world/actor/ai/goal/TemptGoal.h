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
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class TemptGoal : public ::TemptBaseGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mPathfinderWaitTicks;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    TemptGoal();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TemptGoal();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();
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
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUse();
#else // @header-generator platform
    MCAPI bool $canUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $tick();
#endif // @header-generator platform

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

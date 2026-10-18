#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ai/goal/target/NearestAttackableTargetGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct ActorUniqueID;
#if defined(LL_PLAT_A) // @header-generator platform
struct GoalId;
#else // @header-generator platform
#endif // @header-generator platform
struct TrustComponent;
// clang-format on

class DefendTrustedTargetGoal : public ::NearestAttackableTargetGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mAggroSound;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>              mOnStartEvent;
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mOnStartEvent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    DefendTrustedTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DefendTrustedTargetGoal();
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

    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DefendTrustedTargetGoal(::Mob&);
#else // @header-generator platform
    MCAPI explicit DefendTrustedTargetGoal(::Mob& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID _findTrustedTarget(::TrustComponent const&);
#else // @header-generator platform
    MCAPI ::ActorUniqueID _findTrustedTarget(::TrustComponent const& trust);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Mob& mob);
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
    MCNAPI void $appendDebugInfo(std::string&) const;
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

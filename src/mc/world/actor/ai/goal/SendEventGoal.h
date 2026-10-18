#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/BaseGoal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ai/goal/SendEventData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SendEventData;
#endif // @header-generator platform
// clang-format on

class SendEventGoal : public ::BaseGoal {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                      mCaster;
    ::ll::UntypedStorage<8, 40>                           mTarget;
    ::ll::TypedStorage<8, 24, std::vector<SendEventData>> mSpells;
    ::ll::TypedStorage<4, 4, int>                         mCurrentTick;
    ::ll::TypedStorage<4, 4, int>                         mCastTicksRemaining;
    ::ll::TypedStorage<4, 4, int>                         mCurrentSpellIndex;
    ::ll::TypedStorage<4, 4, int>                         mCurrentSpellStage;
    ::ll::TypedStorage<8, 8, ulong>                       mCooldownStopTick;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Mob&>                          mCaster;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>            mTarget;
    ::ll::TypedStorage<8, 24, ::std::vector<::SendEventData>> mSpells;
    ::ll::TypedStorage<4, 4, int>                             mCurrentTick;
    ::ll::TypedStorage<4, 4, int>                             mCastTicksRemaining;
    ::ll::TypedStorage<4, 4, int>                             mCurrentSpellIndex;
    ::ll::TypedStorage<4, 4, int>                             mCurrentSpellStage;
    ::ll::TypedStorage<8, 8, uint64>                          mCooldownStopTick;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SendEventGoal& operator=(SendEventGoal const&);
    SendEventGoal(SendEventGoal const&);
    SendEventGoal();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SendEventGoal();
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUse();
#else // @header-generator platform
    virtual bool canUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canContinueToUse();
#else // @header-generator platform
    virtual bool canContinueToUse() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void start();
#else // @header-generator platform
    virtual void start() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void stop();
#else // @header-generator platform
    virtual void stop() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick();

    virtual void appendDebugInfo(std::string&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SendEventGoal(::Mob&, std::vector<SendEventData> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&, std::vector<SendEventData> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void tick() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUse();
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canContinueToUse();
#else // @header-generator platform
    MCAPI bool $canUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $start();
#else // @header-generator platform
    MCAPI bool $canContinueToUse();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $stop();
#else // @header-generator platform
    MCAPI void $start();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $tick();
#else // @header-generator platform
    MCAPI void $stop();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void $tick();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

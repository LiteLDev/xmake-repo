#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class CombatRegenerationDefinition;
#else // @header-generator platform
#endif // @header-generator platform
class CombatRegenerationListener;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class CombatRegenerationComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mTargetID;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CombatRegenerationListener>> mCombatRegenerationListener;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                 mTargetID;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CombatRegenerationListener>> mCombatRegenerationListener;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CombatRegenerationComponent& operator=(CombatRegenerationComponent const&);
    CombatRegenerationComponent(CombatRegenerationComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _applyCombatBuffsToMob(::Actor&, ::Actor&);
#else // @header-generator platform
    MCAPI void _applyCombatBuffsToMob(::Actor& owner, ::Actor& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _shouldApplyCombatBuffs(::Actor&, ::Actor&);
#else // @header-generator platform
    MCAPI bool _shouldApplyCombatBuffs(::Actor& owner, ::Actor& mob);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tick(::Actor&);
#else // @header-generator platform
    MCAPI void tick(::Actor& owner);
#endif // @header-generator platform
    // NOLINTEND
};

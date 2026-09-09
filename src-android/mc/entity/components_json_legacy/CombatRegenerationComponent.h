#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CombatRegenerationDefinition;
class CombatRegenerationListener;
class Player;
// clang-format on

class CombatRegenerationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mTargetID;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CombatRegenerationListener>> mCombatRegenerationListener;
    // NOLINTEND

public:
    // prevent constructor by default
    CombatRegenerationComponent& operator=(CombatRegenerationComponent const&);
    CombatRegenerationComponent(CombatRegenerationComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _applyCombatBuffsToMob(::Actor&, ::Actor&);

    MCNAPI bool _shouldApplyCombatBuffs(::Actor&, ::Actor&);

    MCNAPI void tick(::Actor&);
    // NOLINTEND
};

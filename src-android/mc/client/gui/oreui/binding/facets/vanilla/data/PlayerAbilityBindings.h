#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

namespace OreUI {

struct PlayerAbilityBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AbilitiesIndex> mAbilitiesIndex;
    ::ll::TypedStorage<1, 1, bool>             mIsEnabled;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerAbilityBindings(::AbilitiesIndex, bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<std::pair<AbilitiesIndex, bool>>
    toPlayerAbilitiesPairsVector(std::vector<OreUI::PlayerAbilityBindings> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AbilitiesIndex, bool);
    // NOLINTEND
};

} // namespace OreUI

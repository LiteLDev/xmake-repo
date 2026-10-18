#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/player/AbilitiesIndex.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PlayerAbilityBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::AbilitiesIndex> mAbilitiesIndex;
    ::ll::TypedStorage<1, 1, bool>             mIsEnabled;
    // NOLINTEND
};
#else // @header-generator platform
struct PlayerAbilityBindings {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

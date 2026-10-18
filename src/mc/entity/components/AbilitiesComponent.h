#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/LayeredAbilities.h"

struct AbilitiesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1464, ::LayeredAbilities> mAbilities;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    AbilitiesComponent& operator=(AbilitiesComponent const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~AbilitiesComponent();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ~AbilitiesComponent();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

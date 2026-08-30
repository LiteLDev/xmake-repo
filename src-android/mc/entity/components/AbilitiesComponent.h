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
    // prevent constructor by default
    AbilitiesComponent& operator=(AbilitiesComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AbilitiesComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

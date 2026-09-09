#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PersonaAppearance;
// clang-format on

struct MultiplayerAppearanceCreationRelay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                         mPlayFabId;
    ::ll::TypedStorage<8, 48, std::function<void(PersonaAppearance&&)>> mCreateAppearance;
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/PersonaCharacterHandle.h"
#include "mc/world/actor/player/persona/ProfileType.h"

namespace persona {

class PersonaCharacterHandleArray {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, std::array<persona::PersonaCharacterHandle, 6>> mHandles;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaCharacterHandleArray();

    MCNAPI ::persona::PersonaCharacterHandle const& at(::persona::ProfileType) const;

    MCNAPI void invalidate(::persona::ProfileType);

    MCNAPI void set(::persona::ProfileType, ::persona::PersonaCharacterHandle const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace persona

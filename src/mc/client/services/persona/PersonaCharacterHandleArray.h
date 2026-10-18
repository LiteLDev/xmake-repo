#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/player/persona/PersonaCharacterHandle.h"
#include "mc/world/actor/player/persona/ProfileType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class PersonaCharacterHandleArray {};
#endif // @header-generator platform

} // namespace persona

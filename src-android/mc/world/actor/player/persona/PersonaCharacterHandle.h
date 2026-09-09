#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/ProfileType.h"

namespace persona {

struct PersonaCharacterHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>           mSkinName;
    ::ll::TypedStorage<1, 1, ::persona::ProfileType> mType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaCharacterHandle(std::string const&, ::persona::ProfileType);

    MCNAPI ::persona::ProfileType getType() const;

    MCNAPI void invalidate();

    MCNAPI bool isValid() const;

    MCNAPI bool operator!=(::persona::PersonaCharacterHandle const&) const;

    MCNAPI bool operator==(::persona::PersonaCharacterHandle const&) const;

    MCNAPI ~PersonaCharacterHandle();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::persona::PersonaCharacterHandle const& INVALID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, ::persona::ProfileType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace persona

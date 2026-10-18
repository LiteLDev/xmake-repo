#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/ProfileType.h"

namespace persona {

struct PersonaCharacterHandle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>           mSkinName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>         mSkinName;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::persona::ProfileType> mType;
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    PersonaCharacterHandle();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PersonaCharacterHandle(std::string const&, ::persona::ProfileType);

    MCNAPI ::persona::ProfileType getType() const;

    MCNAPI void invalidate();

    MCNAPI bool isValid() const;

    MCNAPI bool operator!=(::persona::PersonaCharacterHandle const&) const;

    MCNAPI bool operator==(::persona::PersonaCharacterHandle const&) const;

    MCNAPI ~PersonaCharacterHandle();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI PersonaCharacterHandle(::std::string const& skinName, ::persona::ProfileType type);

    MCAPI ~PersonaCharacterHandle();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::persona::PersonaCharacterHandle const& INVALID();
#else // @header-generator platform
    MCAPI static ::persona::PersonaCharacterHandle const& INVALID();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, ::persona::ProfileType);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void* $ctor(::std::string const& skinName, ::persona::ProfileType type);
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

} // namespace persona

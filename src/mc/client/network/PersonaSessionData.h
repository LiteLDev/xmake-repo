#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/actor/player/persona/PersonaCharacterHandle.h"

// auto generated forward declare list
// clang-format off
class PersonaSessionUnloader;
// clang-format on

class PersonaSessionData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<PersonaSessionUnloader>> mWeakUnloader;
    ::ll::TypedStorage<8, 24, std::string>                           mSkinName;
    ::ll::TypedStorage<8, 24, std::string>                           mCharacterSkinName;
    ::ll::TypedStorage<8, 32, ::persona::PersonaCharacterHandle>     mCharacterHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaSessionData& operator=(PersonaSessionData const&);
    PersonaSessionData(PersonaSessionData const&);
    PersonaSessionData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaSessionData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _unloadCharacter();

    MCNAPI void _unloadClientSkin();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PersonaSessionData {};
#endif // @header-generator platform

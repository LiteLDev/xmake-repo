#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/PersonaSessionData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class PersonaSessionUnloader;
// clang-format on

class PersonaSessionManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<PersonaSessionUnloader>>> mSessionUnloader;
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::UUID, PersonaSessionData>>        mPersonaSessions;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaSessionManager& operator=(PersonaSessionManager const&);
    PersonaSessionManager(PersonaSessionManager const&);
    PersonaSessionManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PersonaSessionManager(::gsl::not_null<std::shared_ptr<PersonaSessionUnloader>>);

    MCNAPI ::PersonaSessionData& getOrCreateSession(::mce::UUID const&);

    MCNAPI ::Bedrock::NonOwnerPointer<const PersonaSessionData> tryGetSession(::mce::UUID const&) const;

    MCNAPI ~PersonaSessionManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<PersonaSessionUnloader>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class PersonaSessionManager {};
#endif // @header-generator platform

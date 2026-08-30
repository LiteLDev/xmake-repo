#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IPersonaRepository;
// clang-format on

class PersonaSessionUnloader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mClient;
    ::ll::UntypedStorage<8, 24> mPersonaRepo;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaSessionUnloader& operator=(PersonaSessionUnloader const&);
    PersonaSessionUnloader(PersonaSessionUnloader const&);
    PersonaSessionUnloader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaSessionUnloader(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IPersonaRepository>>
    );

    MCNAPI void unloadClientSkin(std::string const&);

    MCNAPI ~PersonaSessionUnloader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IPersonaRepository>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

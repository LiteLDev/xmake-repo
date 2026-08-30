#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/persona/PersonaServiceRequestHandler.h"
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace persona {

class PersonaServiceGetActiveAppearanceRequestHandler : public ::persona::PersonaServiceRequestHandler {
public:
    // PersonaServiceGetActiveAppearanceRequestHandler inner types declare
    // clang-format off
    struct ProfileData;
    // clang-format on

    // PersonaServiceGetActiveAppearanceRequestHandler inner types define
    struct ProfileData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>           mPlayFabId;
        ::ll::UntypedStorage<8, 16>                      mPersonaData;
        ::ll::TypedStorage<1, 1, ::persona::ProfileType> mProfileType;
        // NOLINTEND

    public:
        // prevent constructor by default
        ProfileData& operator=(ProfileData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ProfileData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using CompletedCallback =
        std::function<void(bool, std::vector<persona::PersonaServiceGetActiveAppearanceRequestHandler::ProfileData>)>;

public:
    // prevent constructor by default
    PersonaServiceGetActiveAppearanceRequestHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaServiceGetActiveAppearanceRequestHandler();
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

} // namespace persona

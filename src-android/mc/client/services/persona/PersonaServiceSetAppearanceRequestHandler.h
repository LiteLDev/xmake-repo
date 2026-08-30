#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/persona/PersonaServiceRequestHandler.h"
#include "mc/deps/core/http/RequestPriority.h"
#include "mc/deps/core/http/StatusCode.h"
#include "mc/world/actor/player/persona/ProfileType.h"

// auto generated forward declare list
// clang-format off
namespace Social { class PlayFabIdentity; }
namespace persona { class Profile; }
// clang-format on

namespace persona {

class PersonaServiceSetAppearanceRequestHandler : public ::persona::PersonaServiceRequestHandler {
public:
    // PersonaServiceSetAppearanceRequestHandler inner types define
    using CompletedCallback = std::function<
        void(Bedrock::Http::StatusCode, const std::unordered_map<persona::ProfileType, std::string>&, uint)>;

public:
    // prevent constructor by default
    PersonaServiceSetAppearanceRequestHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaServiceSetAppearanceRequestHandler();
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

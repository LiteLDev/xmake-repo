#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class PersonaServiceSetAppearanceRequestHandler {};
#endif // @header-generator platform

} // namespace persona

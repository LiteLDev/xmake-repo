#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/PresenceTickable.h"

// auto generated forward declare list
// clang-format off
class HttpRequestHandler;
class ServiceClient;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class ClubsTickable : public ::Social::PresenceTickable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mCurrentClubIdCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ClubsTickable(ClubsTickable const&);
    ClubsTickable();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClubsTickable();

    virtual std::shared_ptr<HttpRequestHandler> getPresenceRequest(::ServiceClient const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<HttpRequestHandler> $getPresenceRequest(::ServiceClient const&, std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ClubsTickable {};
#endif // @header-generator platform

} // namespace Social

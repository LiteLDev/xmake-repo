#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/PresenceTickable.h"

// auto generated forward declare list
// clang-format off
class HttpRequestHandler;
class ServiceClient;
// clang-format on

namespace Social {

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

} // namespace Social

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct Nonce; }
namespace Social { struct OnlineId; }
namespace mce { class UUID; }
// clang-format on

namespace Social {

class MultiplayerServiceObserver
: public ::Core::Observer<Social::MultiplayerServiceObserver, Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onInvalidPlayerJoinedLobby(::mce::UUID const&, std::string const&);

    virtual void onUserDisconnectedBecauseConcurrentLogin(std::string const&);

    virtual void onPlayerJoinedLobby(::Social::OnlineId const&, ::Social::Nonce const&);

    virtual void onPlayerLeftLobby(::Social::OnlineId const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onInvalidPlayerJoinedLobby(::mce::UUID const&, std::string const&);

    MCNAPI void $onUserDisconnectedBecauseConcurrentLogin(std::string const&);

    MCNAPI void $onPlayerJoinedLobby(::Social::OnlineId const&, ::Social::Nonce const&);

    MCNAPI void $onPlayerLeftLobby(::Social::OnlineId const&);
    // NOLINTEND
};

} // namespace Social

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/SingleThreadedLock.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Core { class SingleThreadedLock; }
#endif // @header-generator platform
namespace Social { struct Nonce; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Social { struct OnlineId; }
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { class UUID; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Social { struct OnlineId; }
#endif // @header-generator platform
// clang-format on

namespace Social {

class MultiplayerServiceObserver
#if defined(LL_PLAT_A) // @header-generator platform
: public ::Core::Observer<Social::MultiplayerServiceObserver, Core::SingleThreadedLock> {
#else // @header-generator platform
: public ::Core::Observer<::Social::MultiplayerServiceObserver, ::Core::SingleThreadedLock> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onInvalidPlayerJoinedLobby(::mce::UUID const&, std::string const&);
#else // @header-generator platform
    virtual void onInvalidPlayerJoinedLobby(::mce::UUID const& uuid, ::std::string const& xuid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onUserDisconnectedBecauseConcurrentLogin(std::string const&);
#else // @header-generator platform
    virtual void onUserDisconnectedBecauseConcurrentLogin(::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPlayerJoinedLobby(::Social::OnlineId const&, ::Social::Nonce const&);
#else // @header-generator platform
    virtual void onPlayerJoinedLobby(::Social::OnlineId const& player, ::Social::Nonce const& nonce);
#endif // @header-generator platform

    virtual void onPlayerLeftLobby(::Social::OnlineId const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onInvalidPlayerJoinedLobby(::mce::UUID const&, std::string const&);
#else // @header-generator platform
    MCFOLD void $onUserDisconnectedBecauseConcurrentLogin(::std::string const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onUserDisconnectedBecauseConcurrentLogin(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void $onInvalidPlayerJoinedLobby(::mce::UUID const& uuid, ::std::string const& xuid);

    MCFOLD void $onPlayerJoinedLobby(::Social::OnlineId const& player, ::Social::Nonce const& nonce);

    MCFOLD void $onPlayerLeftLobby(::Social::OnlineId const&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerJoinedLobby(::Social::OnlineId const&, ::Social::Nonce const&);
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPlayerLeftLobby(::Social::OnlineId const&);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social

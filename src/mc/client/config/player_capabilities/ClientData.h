#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/config/player_capabilities/IClientData.h"
#include "mc/client/social/RelationshipStatus.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace Social { struct PermissionCheckResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace PlayerCapabilities {

#if defined(LL_PLAT_A) // @header-generator platform
struct ClientData : public ::PlayerCapabilities::IClientData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<const IClientInstance>> mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientData();

    virtual ::RelationshipStatus mayLocalChatWith(std::string const&, std::string const&) const;

    virtual ::Social::PermissionCheckResult isUserChatAllowed() const;

    virtual std::string const& getLocalPlayerName() const;

    virtual std::string const& getLocalPlayerPlatformOnlineId() const;

    virtual bool isExternalPlayerCommunicationAllowed() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::RelationshipStatus $mayLocalChatWith(std::string const&, std::string const&) const;

    MCNAPI ::Social::PermissionCheckResult $isUserChatAllowed() const;

    MCNAPI std::string const& $getLocalPlayerName() const;

    MCNAPI std::string const& $getLocalPlayerPlatformOnlineId() const;

    MCNAPI bool $isExternalPlayerCommunicationAllowed() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
struct ClientData {};
#endif // @header-generator platform

} // namespace PlayerCapabilities

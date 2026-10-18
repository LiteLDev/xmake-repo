#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/RelationshipStatus.h"

// auto generated forward declare list
// clang-format off
namespace Social { struct PermissionCheckResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace PlayerCapabilities {

#if defined(LL_PLAT_A) // @header-generator platform
struct IClientData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClientData() = default;

    virtual ::RelationshipStatus mayLocalChatWith(std::string const&, std::string const&) const = 0;

    virtual ::Social::PermissionCheckResult isUserChatAllowed() const = 0;

    virtual std::string const& getLocalPlayerName() const = 0;

    virtual std::string const& getLocalPlayerPlatformOnlineId() const = 0;

    virtual bool isExternalPlayerCommunicationAllowed() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
struct IClientData {};
#endif // @header-generator platform

} // namespace PlayerCapabilities

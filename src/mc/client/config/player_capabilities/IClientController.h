#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/GuiMessage.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/network/packet/TextPacketType.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedController; }
namespace PlayerCapabilities { struct MaySendChatResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace PlayerCapabilities {

#if defined(LL_PLAT_A) // @header-generator platform
struct IClientController {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IClientController() = default;

    virtual bool mayReceiveTextFrom(::TextPacketType, std::string const&, std::string const&, std::string const&) const = 0;

    virtual bool mayReceiveTitleFrom(std::string const&) const = 0;

    virtual ::RelationshipStatus mayLocalChatWith(::GuiMessage::MessageType, std::string const&, std::string const&) const = 0;

    virtual ::PlayerCapabilities::MaySendChatResult maySendChat(::PlayerCapabilities::IPlayerData const&, ::PlayerCapabilities::ISharedController const&) const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct IClientController {};
#endif // @header-generator platform

} // namespace PlayerCapabilities

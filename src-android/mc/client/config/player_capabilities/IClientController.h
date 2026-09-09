#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace PlayerCapabilities {

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

} // namespace PlayerCapabilities

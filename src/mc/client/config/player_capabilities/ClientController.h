#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/config/player_capabilities/IClientController.h"
#include "mc/client/gui/GuiMessage.h"
#include "mc/client/social/RelationshipStatus.h"
#include "mc/network/packet/TextPacketType.h"

// auto generated forward declare list
// clang-format off
namespace PlayerCapabilities { struct IClientData; }
namespace PlayerCapabilities { struct IPlayerData; }
namespace PlayerCapabilities { struct ISharedController; }
namespace PlayerCapabilities { struct MaySendChatResult; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace PlayerCapabilities {

#if defined(LL_PLAT_A) // @header-generator platform
class ClientController : public ::PlayerCapabilities::IClientController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<PlayerCapabilities::IClientData>> mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientController();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ClientController();

    virtual bool mayReceiveTextFrom(::TextPacketType, std::string const&, std::string const&, std::string const&) const;

    virtual bool mayReceiveTitleFrom(std::string const&) const;

    virtual ::RelationshipStatus mayLocalChatWith(::GuiMessage::MessageType, std::string const&, std::string const&) const;

    virtual ::PlayerCapabilities::MaySendChatResult maySendChat(::PlayerCapabilities::IPlayerData const&, ::PlayerCapabilities::ISharedController const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $mayReceiveTextFrom(::TextPacketType, std::string const&, std::string const&, std::string const&) const;

    MCNAPI bool $mayReceiveTitleFrom(std::string const&) const;

    MCNAPI ::RelationshipStatus
    $mayLocalChatWith(::GuiMessage::MessageType, std::string const&, std::string const&) const;

    MCNAPI ::PlayerCapabilities::MaySendChatResult
    $maySendChat(::PlayerCapabilities::IPlayerData const&, ::PlayerCapabilities::ISharedController const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ClientController {};
#endif // @header-generator platform

} // namespace PlayerCapabilities

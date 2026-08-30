#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class PacketSender;
// clang-format on

namespace OreUI {

class LocalPlayerRespawnCommand : public ::OreUI::CommandGroupBase<OreUI::LocalPlayerRespawnCommand> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::reference_wrapper<PacketSender>> mPacketSender;
    ::ll::TypedStorage<8, 8, ::LocalPlayer const*>                 mLocalPlayer;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mLocalPlayerSubscription;
    ::ll::UntypedStorage<8, 144>                                   mRespawn;
    // NOLINTEND
};

} // namespace OreUI

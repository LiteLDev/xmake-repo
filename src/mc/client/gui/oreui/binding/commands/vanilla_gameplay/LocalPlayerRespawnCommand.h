#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class PacketSender;
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class LocalPlayerRespawnCommand : public ::OreUI::CommandGroupBase<::OreUI::LocalPlayerRespawnCommand> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::PacketSender>> mPacketSender;
    ::ll::TypedStorage<8, 8, ::LocalPlayer const*>                     mLocalPlayer;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mLocalPlayerSubscription;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>    mRespawn;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalPlayerRespawnCommand();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LocalPlayerRespawnCommand(::OreUI::ClientDependencies const& client);

    MCAPI void respawn();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND
};
#else // @header-generator platform
class LocalPlayerRespawnCommand {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform

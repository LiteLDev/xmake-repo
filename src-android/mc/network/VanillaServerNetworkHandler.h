#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/GameSpecificNetEventCallback.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class ResourcePackClientResponsePacket;
class ServerInstance;
class ServerNetworkHandler;
// clang-format on

class VanillaServerNetworkHandler : public ::GameSpecificNetEventCallback {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                 mBedrockHandler;
    ::ll::TypedStorage<8, 8, ::ServerInstance&> mServer;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaServerNetworkHandler& operator=(VanillaServerNetworkHandler const&);
    VanillaServerNetworkHandler(VanillaServerNetworkHandler const&);
    VanillaServerNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaServerNetworkHandler();

    virtual void handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    VanillaServerNetworkHandler(::gsl::not_null<Bedrock::NonOwnerPointer<ServerNetworkHandler>>, ::ServerInstance&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ServerNetworkHandler>>, ::ServerInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

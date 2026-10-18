#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/server/ServerInstance.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                 mBedrockHandler;
    ::ll::TypedStorage<8, 8, ::ServerInstance&> mServer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler>> mBedrockHandler;
    ::ll::TypedStorage<8, 8, ::ServerInstance&>                                      mServer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaServerNetworkHandler& operator=(VanillaServerNetworkHandler const&);
    VanillaServerNetworkHandler(VanillaServerNetworkHandler const&);
    VanillaServerNetworkHandler();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VanillaServerNetworkHandler();
#else // @header-generator platform
    virtual ~VanillaServerNetworkHandler() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void
    handle(::NetworkIdentifier const& source, ::ResourcePackClientResponsePacket const& packet) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);
#else // @header-generator platform
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackClientResponsePacket const& packet);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

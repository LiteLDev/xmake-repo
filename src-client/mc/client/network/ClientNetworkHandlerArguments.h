#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/ClientNetworkPackDependencies.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class CachedHostPackIdProvider;
class ClientNetworkSystem;
class IClientInstance;
class IGameConnectionListener;
class IGameServerStartup;
class MinecraftCommands;
class PacketSender;
class PrivateKeyManager;
class TextureShiftManager;
class VideoCaptureSessionManager;
namespace ClientBlobCache { class Cache; }
// clang-format on

struct ClientNetworkHandlerArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<IGameConnectionListener>>    mGameConnectionListener;
    ::ll::TypedStorage<8, 8, ::IGameServerStartup&>                      mGameServerStartup;
    ::ll::TypedStorage<8, 8, ::ClientNetworkSystem&>                     mNetwork;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                            mPacketSender;
    ::ll::TypedStorage<8, 8, ::PrivateKeyManager const&>                 mClientKeys;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                         mClient;
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&>                       mCommands;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlobCache::Cache>>   mClientBlobCache;
    ::ll::UntypedStorage<8, 32>                                          mVideoCaptureSessionManager;
    ::ll::TypedStorage<8, 128, ::ClientNetworkPackDependencies>          mPackDependencies;
    ::ll::TypedStorage<8, 16, std::shared_ptr<CachedHostPackIdProvider>> mCachedHostPackIdProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mHostPacksReceivedSub;
    ::ll::UntypedStorage<8, 32>                                          mTextureShiftManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNetworkHandlerArguments& operator=(ClientNetworkHandlerArguments const&);
    ClientNetworkHandlerArguments(ClientNetworkHandlerArguments const&);
    ClientNetworkHandlerArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientNetworkHandlerArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

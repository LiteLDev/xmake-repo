#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceEventCoordinator;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IGameConnectionListener;
class IMinecraftEventing;
class IMinecraftGame;
class LatencyGraphDisplay;
class LegacyClientNetworkHandler;
class LevelListener;
class LevelRenderer;
class MinecraftCommands;
class NetworkSessionOwner;
class PlayerReportHandler;
class TextureShiftManager;
class VideoCaptureSessionManager;
struct RawGameServerToken;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ClientInstanceArguments {
public:
    // ClientInstanceArguments inner types declare
    // clang-format off
    struct CreateLegacyClientNetworkHandlerArguments;
    struct CreateLevelRendererArguments;
    // clang-format on

    // ClientInstanceArguments inner types define
    struct CreateLegacyClientNetworkHandlerArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::IClientInstance&>                      mClient;
        ::ll::TypedStorage<4, 4, ::PlayerAuthenticationType>              mAuthType;
        ::ll::TypedStorage<8, 8, ::RawGameServerToken&&>                  mToken;
        ::ll::TypedStorage<8, 8, ::cereal::ReflectionCtx&>                mCerealContext;
        ::ll::TypedStorage<8, 16, std::weak_ptr<IGameConnectionListener>> mGameConnectionListener;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateLegacyClientNetworkHandlerArguments& operator=(CreateLegacyClientNetworkHandlerArguments const&);
        CreateLegacyClientNetworkHandlerArguments(CreateLegacyClientNetworkHandlerArguments const&);
        CreateLegacyClientNetworkHandlerArguments();
    };

    struct CreateLevelRendererArguments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::IClientInstance&> mClientInstance;
        ::ll::TypedStorage<1, 24, ::WeakEntityRef>   mCameraTargetEntity;
        ::ll::UntypedStorage<8, 24>                  mTextureShiftManager;
        // NOLINTEND

    public:
        // prevent constructor by default
        CreateLevelRendererArguments& operator=(CreateLevelRendererArguments const&);
        CreateLevelRendererArguments(CreateLevelRendererArguments const&);
        CreateLevelRendererArguments();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CreateLevelRendererArguments();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using CreateLevelRendererCallback = ::brstd::move_only_function<
        std::unique_ptr<LevelRenderer>(ClientInstanceArguments::CreateLevelRendererArguments&&) const>;

    using CreateCommandsCallback = ::brstd::move_only_function<void(MinecraftCommands&) const>;

    using CreateNetworkHandlerCallback = ::brstd::move_only_function<std::unique_ptr<LegacyClientNetworkHandler>(
        ClientInstanceArguments::CreateLegacyClientNetworkHandlerArguments&&
    ) const>;

    using CreatePlayerReportHandlerCallback =
        ::brstd::move_only_function<std::shared_ptr<PlayerReportHandler>(IClientInstance&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&> mMg;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    ::ll::TypedStorage<8, 8, ::LevelListener&> mLevelListener;
    ::ll::UntypedStorage<8, 24> mAdvancedGraphicsOptions;
    ::ll::TypedStorage<1, 1, ::SubClientId> mSubid;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::NonOwnerPointer<ClientInstanceEventCoordinator>> const&> mCoordinator;
    ::ll::TypedStorage<8, 8, ::LatencyGraphDisplay*> mLatencyGraphDisplay;
    ::ll::UntypedStorage<8, 24> mNetworkSessionOwner;
    ::ll::UntypedStorage<8, 24> mVideoCaptureSessionManager;
    ::ll::UntypedStorage<8, 24> mTextureShiftManager;
    ::ll::UntypedStorage<8, 64> mCreateLevelRenderer;
    ::ll::UntypedStorage<8, 64> mInitCommands;
    ::ll::UntypedStorage<8, 64> mCreateLegacyClientNetworkHandler;
    ::ll::UntypedStorage<8, 64> mCreatePlayerReportHandler;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstanceArguments& operator=(ClientInstanceArguments const&);
    ClientInstanceArguments(ClientInstanceArguments const&);
    ClientInstanceArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientInstanceArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

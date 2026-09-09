#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class IClientInstance;
class IContentKeyProvider;
class IContentManager;
class ILevelListCache;
class LevelDbEnv;
class NetworkSessionOwner;
class TrialManager;
namespace Social { class MultiplayerServiceManager; }
// clang-format on

namespace LocalServerLauncher::Impl {

struct InterfaceDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::TrialManager const&>                      mTrialManager;
    ::ll::TypedStorage<8, 8, ::Social::MultiplayerServiceManager const&> mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 8, ::IContentKeyProvider const&>               mKeys;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                         mPrimaryClientInstance;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                         mContentManager;
    ::ll::TypedStorage<8, 8, ::LevelDbEnv&>                              mDBEnv;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                         mLevelCache;
    ::ll::TypedStorage<8, 8, ::ClientNetworkSystem*>                     mClientNetworkSystem;
    ::ll::TypedStorage<8, 16, ::NetworkSessionOwner&>                    mNetworkSessionOwner;
    ::ll::UntypedStorage<8, 48>                                          mHasAllValidCrossPlatformSkin;
    // NOLINTEND

public:
    // prevent constructor by default
    InterfaceDependencies& operator=(InterfaceDependencies const&);
    InterfaceDependencies(InterfaceDependencies const&);
    InterfaceDependencies();
};

} // namespace LocalServerLauncher::Impl

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ExperimentStorage;
class IContentKeyProvider;
class IGameEventNotifier;
class IPackManifestFactory;
class IPackSourceFactory;
class IResourcePackFileDownloaderManager;
class PackDownloadManager;
// clang-format on

struct ClientNetworkPackDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackDownloadManager&>                              packDownloadManager;
    ::ll::TypedStorage<8, 8, ::IPackSourceFactory&>                               packSourceFactory;
    ::ll::TypedStorage<8, 8, ::IPackManifestFactory&>                             packManifestFactory;
    ::ll::UntypedStorage<8, 24>                                                   contentKeyProvider;
    ::ll::TypedStorage<8, 8, ::IGameEventNotifier&>                               gameEventNotifier;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IResourcePackFileDownloaderManager>> resourceDownloadManager;
    ::ll::UntypedStorage<8, 64>                                                   getLastLevelExperiments;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientNetworkPackDependencies& operator=(ClientNetworkPackDependencies const&);
    ClientNetworkPackDependencies(ClientNetworkPackDependencies const&);
    ClientNetworkPackDependencies();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientNetworkPackDependencies();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ClientNetworkPackDependencies {};
#endif // @header-generator platform

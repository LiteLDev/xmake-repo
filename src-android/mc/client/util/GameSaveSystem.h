#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/StorageResult.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class CallbackToken;
class SaveContainer;
namespace Core { class Path; }
namespace Core { class RemoteStorageProvider; }
namespace Core { struct ContainerOutInfo; }
namespace Core { struct ContainerSyncState; }
// clang-format on

class GameSaveSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<SaveContainer>>>  mSaveContainers;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::RemoteStorageProvider>> mRemoteStorage;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                        mExistenceTracker;
    ::ll::UntypedStorage<1, 140>                                            mContainerLock;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                             mInitializedSettingsMonitor;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                             mInitializedWorldsMonitor;
    // NOLINTEND

public:
    // prevent constructor by default
    GameSaveSystem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<SaveContainer> _getContainer(std::string const&) const;

    MCNAPI void
    deleteWorld(std::string, bool, std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>&&);

    MCNAPI void forceCloudSaveOnSettings();

    MCNAPI void forceCloudSaveOnWorld(
        std::string const&,
        std::function<void(Core::StorageResult)>&&,
        bool,
        bool,
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>, Core::StorageResult)>&&
    );

    MCNAPI long getQuotaRemaining() const;

    MCNAPI long getQuotaTotal() const;

    MCNAPI void initializeWorldsMonitor(::Core::Path const&);

    MCNAPI ::CallbackToken
    isSettingsOutOfDate(std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>, bool)>&&);

    MCNAPI void monitorLocalWorld(std::string, bool);

    MCNAPI ::CallbackToken
    syncSettings(std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>&&);

    MCNAPI ::CallbackToken
    syncWorld(std::string const&, std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>&&);

    MCNAPI ::CallbackToken syncWorldManifest(
        std::string const&,
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>&&
    );

    MCNAPI ::CallbackToken syncWorldsMeta(
        std::string const&,
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>&&
    );

    MCNAPI ~GameSaveSystem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

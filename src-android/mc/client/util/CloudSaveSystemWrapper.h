#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/OptionsObserver.h"
#include "mc/deps/core/file/StorageResult.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/world/level/LevelListCacheObserver.h"

// auto generated forward declare list
// clang-format off
class CallbackToken;
class GameSaveSystem;
namespace Core { class Path; }
namespace Core { struct ContainerSyncState; }
namespace Social { class User; }
// clang-format on

class CloudSaveSystemWrapper : public ::OptionsObserver {
public:
    // CloudSaveSystemWrapper inner types declare
    // clang-format off
    struct SyncState;
    // clang-format on

    // CloudSaveSystemWrapper inner types define
    struct SyncState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                 mProgress;
        ::ll::TypedStorage<4, 4, ::Core::StorageResult> mStorageResult;
        // NOLINTEND
    };

    using InitRemoteSystemCallback = std::function<void(std::function<void()>)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<GameSaveSystem>> mGameSaveSystem;
    ::ll::UntypedStorage<8, 24>                               mOwningUser;
    ::ll::UntypedStorage<8, 48>                               mInitRemoteSystemCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudSaveSystemWrapper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CloudSaveSystemWrapper();

    virtual void onForceCloudSave();

    virtual void onOptionsLoadBegin();

    virtual void onOptionsLoadComplete();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CloudSaveSystemWrapper(std::weak_ptr<Social::User>);

    MCNAPI void _worldResultToast(::Core::StorageResult);

    MCNAPI ::CallbackToken
        acquireSettingsAsync(std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>);

    MCNAPI ::CallbackToken acquireWorldAsync(
        std::string const&,
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>
    );

    MCNAPI ::CallbackToken acquireWorldManifestAsync(
        std::string const&,
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>
    );

    MCNAPI ::CallbackToken acquireWorldsMetaAsync(
        ::Core::Path,
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>
    );

    MCNAPI void forceSaveOnWorld(
        std::string const&,
        bool,
        bool,
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>, Core::StorageResult)>&&
    );

    MCNAPI long getQuotaRemaining() const;

    MCNAPI long getQuotaTotal() const;

    MCNAPI bool isCloudSaveAvailable() const;

    MCNAPI ::CallbackToken isSettingsOutOfDate(
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>, bool)>
    ) const;

    MCNAPI void onLevelAdded(std::string const&, ::LevelListCacheObserver::LevelAddedType);

    MCNAPI void onLevelDeleted(std::string const&);

    MCNAPI ::CallbackToken resync(std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>);

    MCNAPI void setInitRemoteSystemCallback(std::function<void(std::function<void()>)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<Social::User>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onForceCloudSave();

    MCNAPI void $onOptionsLoadBegin();

    MCNAPI void $onOptionsLoadComplete();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

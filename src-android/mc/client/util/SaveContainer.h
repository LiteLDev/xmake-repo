#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Core__CloudContainerState.h"
#include "mc/Core__LocalContainerState.h"
#include "mc/deps/core/container/ContainerSyncState.h"
#include "mc/deps/core/file/FileStorageAreaObserver.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/StorageResult.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/threading/SpinLockImpl.h"

// auto generated forward declare list
// clang-format off
class CallbackToken;
class GameSaveSystem;
template<typename T0> class CallbackTokenContext;
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class SaveContainer : public ::Core::FileStorageAreaObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::GameSaveSystem&>                       mSaveSystem;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mObservedStorageArea;
    ::ll::UntypedStorage<8, 24>                                       mContainerRootPath;
    ::ll::TypedStorage<8, 24, std::string>                            mContainerName;
    ::ll::TypedStorage<8, 24, std::string>                            mLevelId;
    ::ll::TypedStorage<4, 4, ::Core::StorageResult>                   mStorageResult;
    ::ll::TypedStorage<1, 1, bool>                                    mShouldShowToast;
    ::ll::TypedStorage<4, 8, ::Core::ContainerSyncState>              mSyncState;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                   mContainerSizeOnLastSync;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                         mLock;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                       mIsActive;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                       mIsAwaitingTask;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                       mEnableAutomaticCommits;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                       mIsNewWorld;
    ::ll::TypedStorage<1, 1, bool>                                    mShouldObserveStorage;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                  mExistenceTracker;
    ::ll::TypedStorage<8, 24, std::set<std::string>>                  mFilesToAdd;
    ::ll::TypedStorage<8, 24, std::set<std::string>>                  mFilesToDelete;
    ::ll::TypedStorage<8, 8, long>                                    mLastCheckpointTimestamp;
    ::ll::UntypedStorage<8, 16>                                       mManifestSyncContext;
    ::ll::TypedStorage<8, 24, std::set<std::string>>                  mMonitorFileAllowList;
    ::ll::TypedStorage<8, 24, std::set<std::string>>                  hack_stagedFilesToDelete;
    ::ll::TypedStorage<1, 1, bool>                                    hack_IsEmbeddedContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    SaveContainer& operator=(SaveContainer const&);
    SaveContainer(SaveContainer const&);
    SaveContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SaveContainer();

    virtual void _onBeginWrites();

    virtual void _onEndWrites();

    virtual void _onWriteFile(::Core::PathView);

    virtual void _onDeleteFile(::Core::PathView);

    virtual bool isWorldMonitorContainer() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SaveContainer(
        std::string const&,
        std::optional<ulong>,
        ::Core::Path const&,
        bool,
        ::GameSaveSystem&,
        std::set<std::string>
    );

    MCNAPI void _onLocalSyncStateInspected();

    MCNAPI void _tryCommit(
        bool,
        bool,
        std::function<void(Core::StorageResult)>&&,
        bool,
        std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>, Core::StorageResult)>&&
    );

    MCNAPI void onRemoteDeleteSucceeded();

    MCNAPI ::CallbackToken
    queryIsContainerOutOfDate(std::function<void(nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>>)>&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string const&,
        std::optional<ulong>,
        ::Core::Path const&,
        bool,
        ::GameSaveSystem&,
        std::set<std::string>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onBeginWrites();

    MCNAPI void $_onEndWrites();

    MCNAPI void $_onWriteFile(::Core::PathView);

    MCNAPI void $_onDeleteFile(::Core::PathView);

    MCNAPI bool $isWorldMonitorContainer() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
namespace Core { class StorageAreaStateListener; }
// clang-format on

namespace Core {

class StorageAreaState {
public:
    // StorageAreaState inner types define
    using Listener = ::Core::StorageAreaStateListener;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>                                   mMutex;
    ::ll::UntypedStorage<8, 24>                                             mStorageAreaRootPath;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                             mIsExtendDiskSpaceEvent;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                             mIsLowDiskSpaceWarning;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                             mIsOutOfDiskSpaceError;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                             mIsCriticalDiskError;
    ::ll::TypedStorage<8, 24, std::vector<Core::StorageAreaStateListener*>> mListeners;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageAreaState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StorageAreaState(::Core::PathView);

    MCNAPI void
    _fireExtendDiskSpaceEvent(bool const, std::weak_ptr<Core::FileStorageArea> const&, ulong, std::function<void()>);

    MCNAPI void addListener(::Core::StorageAreaStateListener*);

    MCNAPI void checkUserStorage(std::shared_ptr<Core::FileStorageArea> const&, ulong, ulong, ulong, bool);

    MCNAPI bool isCriticalDiskError() const;

    MCNAPI bool isLowDiskSpaceWarning() const;

    MCNAPI bool isOutOfDiskSpaceError() const;

    MCNAPI void notifyCriticalDiskError(::Core::LevelStorageState const&);

    MCNAPI void removeListener(::Core::StorageAreaStateListener*);

    MCNAPI ~StorageAreaState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::PathView);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core

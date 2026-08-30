#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/LevelStorageState.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
// clang-format on

namespace Core {

class StorageAreaStateListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mFileStorageArea;
    ::ll::TypedStorage<4, 40, std::mutex>                             mMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~StorageAreaStateListener();

    virtual void onExtendDiskSpace(bool const, std::weak_ptr<Core::FileStorageArea> const&, ulong, std::function<void ()>);

    virtual void onLowDiskSpace(bool const, ulong);

    virtual void onOutOfDiskSpace(bool const, ulong);

    virtual void onCriticalDiskError(bool const, ::Core::LevelStorageState const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StorageAreaStateListener();

    MCNAPI void initListener(std::shared_ptr<Core::FileStorageArea>);

    MCNAPI void removeListener();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void
    $onExtendDiskSpace(bool const, std::weak_ptr<Core::FileStorageArea> const&, ulong, std::function<void()>);

    MCNAPI void $onLowDiskSpace(bool const, ulong);

    MCNAPI void $onOutOfDiskSpace(bool const, ulong);

    MCNAPI void $onCriticalDiskError(bool const, ::Core::LevelStorageState const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core

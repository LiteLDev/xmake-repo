#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/LevelStorageState.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
// clang-format on

namespace Core {

class StorageAreaStateListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>> mFileStorageArea;
    ::ll::TypedStorage<4, 40, std::mutex>                             mMutex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Core::FileStorageArea>> mFileStorageArea;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                mMutex;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~StorageAreaStateListener();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onExtendDiskSpace(bool const, std::weak_ptr<Core::FileStorageArea> const&, ulong, std::function<void ()>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void
    onExtendDiskSpace(bool const, ::std::weak_ptr<::Core::FileStorageArea> const&, uint64, ::std::function<void()>);
#else // LL_PLAT_C
    virtual void onExtendDiskSpace(
        bool const                                      bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& storageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onLowDiskSpace(bool const, ulong);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onLowDiskSpace(bool const, uint64);
#else // LL_PLAT_C
    virtual void onLowDiskSpace(bool const bSet, uint64 freeSpace);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onOutOfDiskSpace(bool const, ulong);
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void onOutOfDiskSpace(bool const, uint64);
#else // LL_PLAT_C
    virtual void onOutOfDiskSpace(bool const bSet, uint64 freeSpace);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onCriticalDiskError(bool const, ::Core::LevelStorageState const&);
    // clang-format on
#else // @header-generator platform
    virtual void onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StorageAreaStateListener();
#else // @header-generator platform
    MCAPI void initListener(::std::shared_ptr<::Core::FileStorageArea> fileStorageArea);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initListener(std::shared_ptr<Core::FileStorageArea>);

    MCNAPI void removeListener();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void removeListener();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onExtendDiskSpace(bool const, std::weak_ptr<Core::FileStorageArea> const&, ulong, std::function<void()>);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void
    $onExtendDiskSpace(bool const, ::std::weak_ptr<::Core::FileStorageArea> const&, uint64, ::std::function<void()>);
#else // LL_PLAT_C
    MCFOLD void $onExtendDiskSpace(
        bool const                                      bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& storageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onLowDiskSpace(bool const, ulong);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $onLowDiskSpace(bool const, uint64);
#else // LL_PLAT_C
    MCFOLD void $onLowDiskSpace(bool const bSet, uint64 freeSpace);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onOutOfDiskSpace(bool const, ulong);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $onOutOfDiskSpace(bool const, uint64);
#else // LL_PLAT_C
    MCFOLD void $onOutOfDiskSpace(bool const bSet, uint64 freeSpace);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onCriticalDiskError(bool const, ::Core::LevelStorageState const&);
#else // @header-generator platform
    MCFOLD void $onCriticalDiskError(bool const bSet, ::Core::LevelStorageState const& errorCode);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core

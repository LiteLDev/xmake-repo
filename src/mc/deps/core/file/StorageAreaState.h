#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/LevelStorageState.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
namespace Core { class StorageAreaStateListener; }
// clang-format on

namespace Core {

class StorageAreaState {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // StorageAreaState inner types define
    using Listener = ::Core::StorageAreaStateListener;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex>                                   mMutex;
    ::ll::UntypedStorage<8, 24>                                             mStorageAreaRootPath;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                             mIsExtendDiskSpaceEvent;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                             mIsLowDiskSpaceWarning;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                             mIsOutOfDiskSpaceError;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                             mIsCriticalDiskError;
    ::ll::TypedStorage<8, 24, std::vector<Core::StorageAreaStateListener*>> mListeners;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnk26e6b4;
    ::ll::UntypedStorage<8, 32> mUnk94aba7;
    ::ll::UntypedStorage<1, 1>  mUnk3f48e4;
    ::ll::UntypedStorage<1, 1>  mUnk8adcca;
    ::ll::UntypedStorage<1, 1>  mUnkd72f6a;
    ::ll::UntypedStorage<1, 1>  mUnk628078;
    ::ll::UntypedStorage<8, 24> mUnk665856;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    StorageAreaState& operator=(StorageAreaState const&);
    StorageAreaState(StorageAreaState const&);
#endif // @header-generator platform
    StorageAreaState();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit StorageAreaState(::Core::PathView);
#else // @header-generator platform
    MCNAPI explicit StorageAreaState(::Core::PathView storageAreaRootPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _fireExtendDiskSpaceEvent(bool const, std::weak_ptr<Core::FileStorageArea> const&, ulong, std::function<void()>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void _fireExtendDiskSpaceEvent(
        bool const                                      bSet,
        ::std::weak_ptr<::Core::FileStorageArea> const& fileStorageAreaWeakPtr,
        uint64                                          freeSpace,
        ::std::function<void()>                         onHandledEventCallback
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addListener(::Core::StorageAreaStateListener*);
#else // @header-generator platform
    MCNAPI void addListener(::Core::StorageAreaStateListener* l);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void checkUserStorage(std::shared_ptr<Core::FileStorageArea> const&, ulong, ulong, ulong, bool);
#else // @header-generator platform
    MCNAPI void checkUserStorage(
        ::std::shared_ptr<::Core::FileStorageArea> const& fileStorageArea,
        uint64                                            freeSpace,
        uint64                                            usedSpace,
        uint64                                            totalCapacity,
        bool                                              canExtendSize
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isCriticalDiskError() const;

    MCNAPI bool isLowDiskSpaceWarning() const;

    MCNAPI bool isOutOfDiskSpaceError() const;

    MCNAPI void notifyCriticalDiskError(::Core::LevelStorageState const&);

    MCNAPI void removeListener(::Core::StorageAreaStateListener*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void notifyCriticalDiskError(::Core::LevelStorageState const& errorCode);
#endif
#endif // @header-generator platform

    MCNAPI ~StorageAreaState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::PathView);
#else // @header-generator platform
    MCNAPI void* $ctor(::Core::PathView storageAreaRootPath);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core

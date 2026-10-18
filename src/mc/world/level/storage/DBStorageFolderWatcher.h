#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/Path.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/events/PrivacyTagEnterprise.h"
#include "mc/world/level/storage/DBStorageFolderWatcherSnapshotKind.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/FolderSizeAndModifyDateSnapshot.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class FolderSizeAndModifyDateSnapshotDiff;
#else // @header-generator platform
#endif // @header-generator platform
namespace Social::Events { class Event; }
// clang-format on

class DBStorageFolderWatcher {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                                               mAbsolutePath;
    ::ll::TypedStorage<8, 32, ::FolderSizeAndModifyDateSnapshot>              mOpeningSnapshot;
    ::ll::TypedStorage<8, 32, ::FolderSizeAndModifyDateSnapshot>              mCurrentSnapshot;
    ::ll::TypedStorage<8, 96, std::array<FolderSizeAndModifyDateSnapshot, 3>> mSnapshotChain;
    ::ll::TypedStorage<8, 32, ::FolderSizeAndModifyDateSnapshot>              mClosingSnapshot;
    ::ll::TypedStorage<8, 8, ulong>                                           mTelemetrySequence;
    ::ll::TypedStorage<4, 40, std::mutex>                                     mWriteMtx;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk1d5032;
    ::ll::UntypedStorage<8, 24> mUnk2a3157;
    ::ll::UntypedStorage<8, 24> mUnk57c511;
    ::ll::UntypedStorage<8, 72> mUnk6e028c;
    ::ll::UntypedStorage<8, 24> mUnk484f55;
    ::ll::UntypedStorage<8, 8>  mUnkc37605;
    ::ll::UntypedStorage<8, 80> mUnk98da5c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DBStorageFolderWatcher& operator=(DBStorageFolderWatcher const&);
    DBStorageFolderWatcher(DBStorageFolderWatcher const&);
    DBStorageFolderWatcher();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void toTelemetryEvent(
        ::Social::Events::Event&,
        ::DBStorageFolderWatcherSnapshotKind,
        ::Social::Events::PrivacyTagEnterprise
    ) const;

    MCNAPI ~DBStorageFolderWatcher();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void toTelemetryEvent(
        ::Social::Events::Event&               event,
        ::DBStorageFolderWatcherSnapshotKind   kind,
        ::Social::Events::PrivacyTagEnterprise privacyTag
    ) const;
#endif
#endif // @header-generator platform
    // NOLINTEND
};

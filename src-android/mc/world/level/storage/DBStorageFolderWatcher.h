#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/events/PrivacyTagEnterprise.h"
#include "mc/world/level/storage/DBStorageFolderWatcherSnapshotKind.h"
#include "mc/world/level/storage/FolderSizeAndModifyDateSnapshot.h"

// auto generated forward declare list
// clang-format off
class FolderSizeAndModifyDateSnapshotDiff;
namespace Social::Events { class Event; }
// clang-format on

class DBStorageFolderWatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>                                               mAbsolutePath;
    ::ll::TypedStorage<8, 32, ::FolderSizeAndModifyDateSnapshot>              mOpeningSnapshot;
    ::ll::TypedStorage<8, 32, ::FolderSizeAndModifyDateSnapshot>              mCurrentSnapshot;
    ::ll::TypedStorage<8, 96, std::array<FolderSizeAndModifyDateSnapshot, 3>> mSnapshotChain;
    ::ll::TypedStorage<8, 32, ::FolderSizeAndModifyDateSnapshot>              mClosingSnapshot;
    ::ll::TypedStorage<8, 8, ulong>                                           mTelemetrySequence;
    ::ll::TypedStorage<4, 40, std::mutex>                                     mWriteMtx;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND
};

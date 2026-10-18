#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/level/storage/DBStorageFolderWatcherSnapshotKind.h"
#include "mc/world/level/storage/LevelStorageEventingContext.h"

// auto generated forward declare list
// clang-format off
class DBStorageFolderWatcher;
class LevelData;
#if defined(LL_PLAT_A) // @header-generator platform
struct DBStoragePerformanceTelemetryData;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class LevelStorageEventing : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 88, ::LevelStorageEventingContext> mContext;
#else // @header-generator platform
    ::ll::TypedStorage<8, 112, ::LevelStorageEventingContext> mContext;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageEventing();

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelStorageEventing();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LevelStorageEventing(std::string const&, ::LevelData const&, std::string const&);
#else // @header-generator platform
    MCNAPI LevelStorageEventing(
        ::std::string const& creationReason,
        ::LevelData const&   levelData,
        ::std::string const& levelId
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fireDBStorageError(char const*) const;
#else // @header-generator platform
    MCNAPI void fireDBStorageError(char const* errorType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fireEventDBReadFail(std::string const&) const;
#else // @header-generator platform
    MCNAPI void fireEventDBReadFail(::std::string const& reason) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    fireEventDBStorageSizeSnapshot(::DBStorageFolderWatcher const&, ::DBStorageFolderWatcherSnapshotKind) const;
#else // @header-generator platform
    MCNAPI void fireEventDBStorageSizeSnapshot(
        ::DBStorageFolderWatcher const&      folderWatcher,
        ::DBStorageFolderWatcherSnapshotKind kind
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fireEventLevelDBPerformanceData(::DBStoragePerformanceTelemetryData const&) const;

    MCNAPI void fireEventWorldCorruptionCausedWorldShutdown(std::string const&, std::optional<bool>) const;
#else // @header-generator platform
    MCNAPI void fireEventWorldCorruptionCausedWorldShutdown(
        ::std::string const&  reason,
        ::std::optional<bool> isOutOfDiskSpace
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, ::LevelData const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string const& creationReason, ::LevelData const& levelData, ::std::string const& levelId);
#endif // @header-generator platform
    // NOLINTEND
};

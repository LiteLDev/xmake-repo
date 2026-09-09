#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class LevelStorageEventing;
class SaveTransactionManager;
class Scheduler;
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
// clang-format on

struct DBStorageConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                                scheduler;
    ::ll::UntypedStorage<8, 24>                                                           fullPath;
    ::ll::TypedStorage<8, 24, std::string>                                                levelId;
    ::ll::UntypedStorage<8, 24>                                                           dbSubfolder;
    ::ll::TypedStorage<8, 8, ::ContentIdentity const*>                                    contentIdentity;
    ::ll::UntypedStorage<8, 24>                                                           keyProvider;
    ::ll::UntypedStorage<8, 24>                                                           saveTransactionManager;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> compactionInterval;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> writeFlushInterval;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Core::FileStorageArea>>                     storageArea;
    ::ll::TypedStorage<1, 1, bool>                                                        enableCompactionListener;
    ::ll::TypedStorage<1, 1, bool>                                                        enableStorage;
    ::ll::TypedStorage<1, 1, bool>                                                        enableSnapshots;
    ::ll::TypedStorage<1, 1, bool>                                                        jigsawPersistenceToggle;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LevelStorageEventing>>                       levelStorageEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    DBStorageConfig& operator=(DBStorageConfig const&);
    DBStorageConfig(DBStorageConfig const&);
    DBStorageConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DBStorageConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

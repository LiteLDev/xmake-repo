#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/storage/LevelStorageEventing.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Scheduler&>                                             scheduler;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                       fullPath;
    ::ll::TypedStorage<8, 32, ::std::string>                                           levelId;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                       dbSubfolder;
    ::ll::TypedStorage<8, 8, ::ContentIdentity const*>                                 contentIdentity;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IContentKeyProvider const>> keyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::SaveTransactionManager>>    saveTransactionManager;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                               compactionInterval;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                               writeFlushInterval;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Core::FileStorageArea>>              storageArea;
    ::ll::TypedStorage<1, 1, bool>                                                     enableCompactionListener;
    ::ll::TypedStorage<1, 1, bool>                                                     enableStorage;
    ::ll::TypedStorage<1, 1, bool>                                                     enableSnapshots;
    ::ll::TypedStorage<1, 1, bool>                                                     jigsawPersistenceToggle;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelStorageEventing>>                levelStorageEventing;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    DBStorageConfig& operator=(DBStorageConfig const&);
    DBStorageConfig(DBStorageConfig const&);
    DBStorageConfig();
#else // @header-generator platform
    DBStorageConfig(DBStorageConfig&&) = default;
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~DBStorageConfig();
#else // @header-generator platform
    MCAPI DBStorageConfig(::Scheduler& scheduler, ::Core::Path const& path, ::std::string const& levelId);

    MCAPI ~DBStorageConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scheduler& scheduler, ::Core::Path const& path, ::std::string const& levelId);
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
};

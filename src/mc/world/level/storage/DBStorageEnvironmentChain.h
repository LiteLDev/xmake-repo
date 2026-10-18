#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompactionListenerEnv;
class ContentIdentity;
class EncryptedProxyEnv;
#else // @header-generator platform
#endif // @header-generator platform
class FlushableEnv;
#if defined(LL_PLAT_A) // @header-generator platform
class LevelDbEnv;
class SnapshotEnv;
struct DBStorageConfig;
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class Result; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class DBStorageEnvironmentChain {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<EncryptedProxyEnv>>     mEncryptedEnv;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FlushableEnv>>          mFlushableEnv;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FlushableEnv>>          mPreSnapshotBufferEnv;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SnapshotEnv>>           mSnapshotEnv;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompactionListenerEnv>> mCompactionListenerEnv;
    ::ll::UntypedStorage<8, 24>                                      mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::leveldb::Env*>                        mWrappedEnv;
    ::ll::UntypedStorage<8, 24>                                      mDbPath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk5ef3ee;
    ::ll::UntypedStorage<8, 8>  mUnkff82bf;
    ::ll::UntypedStorage<8, 8>  mUnk556f35;
    ::ll::UntypedStorage<8, 8>  mUnkdbbdca;
    ::ll::UntypedStorage<8, 8>  mUnk715292;
    ::ll::UntypedStorage<8, 24> mUnkd18cb9;
    ::ll::UntypedStorage<8, 8>  mUnkdc46a3;
    ::ll::UntypedStorage<8, 32> mUnk69e817;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DBStorageEnvironmentChain();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    DBStorageEnvironmentChain& operator=(DBStorageEnvironmentChain const&);
    DBStorageEnvironmentChain(DBStorageEnvironmentChain const&);
    DBStorageEnvironmentChain();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<FlushableEnv>
    createFlushableEnv(::leveldb::Env*, std::shared_ptr<Core::FileStorageArea>, ::Core::Path const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::std::unique_ptr<::FlushableEnv> createFlushableEnv(
        ::leveldb::Env*                            currentEnv,
        ::std::shared_ptr<::Core::FileStorageArea> storageAreaForLevel,
        ::Core::Path const&                        dbPath
    );
#endif // @header-generator platform
    // NOLINTEND
};

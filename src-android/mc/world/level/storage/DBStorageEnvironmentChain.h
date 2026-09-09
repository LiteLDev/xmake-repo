#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CompactionListenerEnv;
class ContentIdentity;
class EncryptedProxyEnv;
class FlushableEnv;
class LevelDbEnv;
class SnapshotEnv;
struct DBStorageConfig;
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

class DBStorageEnvironmentChain {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<EncryptedProxyEnv>>     mEncryptedEnv;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FlushableEnv>>          mFlushableEnv;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FlushableEnv>>          mPreSnapshotBufferEnv;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SnapshotEnv>>           mSnapshotEnv;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompactionListenerEnv>> mCompactionListenerEnv;
    ::ll::UntypedStorage<8, 24>                                      mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::leveldb::Env*>                        mWrappedEnv;
    ::ll::UntypedStorage<8, 24>                                      mDbPath;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DBStorageEnvironmentChain();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<FlushableEnv>
    createFlushableEnv(::leveldb::Env*, std::shared_ptr<Core::FileStorageArea>, ::Core::Path const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InMemoryFile;
namespace Core { class Path; }
// clang-format on

class InMemoryFileStorage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::leveldb::Env*>                             mEnvironment;
    ::ll::TypedStorage<4, 40, std::mutex>                                 mMutex;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<InMemoryFile>>> mInMemoryFiles;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                   mDiskFilesToDelete;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnkcc7879;
    ::ll::UntypedStorage<8, 80> mUnk54a9a8;
    ::ll::UntypedStorage<8, 24> mUnkc80eb9;
    ::ll::UntypedStorage<8, 24> mUnk7c3254;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    InMemoryFileStorage& operator=(InMemoryFileStorage const&);
    InMemoryFileStorage(InMemoryFileStorage const&);
#endif // @header-generator platform
    InMemoryFileStorage();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool deleteFile(::Core::Path const&);
#else // @header-generator platform
    MCNAPI bool deleteFile(::Core::Path const& fileName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool findFile(::Core::Path const&, std::shared_ptr<InMemoryFile>&);

    MCNAPI ~InMemoryFileStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI bool findFile(::Core::Path const& fileName, ::std::shared_ptr<::InMemoryFile>& outFile);
#endif // @header-generator platform
    // NOLINTEND
};

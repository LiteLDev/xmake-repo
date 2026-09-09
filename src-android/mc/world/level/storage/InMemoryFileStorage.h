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
    ::ll::TypedStorage<8, 8, ::leveldb::Env*>                             mEnvironment;
    ::ll::TypedStorage<4, 40, std::mutex>                                 mMutex;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<InMemoryFile>>> mInMemoryFiles;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                   mDiskFilesToDelete;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemoryFileStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool deleteFile(::Core::Path const&);

    MCNAPI bool findFile(::Core::Path const&, std::shared_ptr<InMemoryFile>&);

    MCNAPI ~InMemoryFileStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

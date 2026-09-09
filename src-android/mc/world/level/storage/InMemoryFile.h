#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/storage/InMemoryAccessMode.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class InMemoryFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex>        mMutex;
    ::ll::TypedStorage<8, 24, std::vector<char>> mBuffer;
    ::ll::UntypedStorage<8, 24>                  mFilename;
    ::ll::TypedStorage<1, 1, bool>               mOpenForWrite;
    ::ll::TypedStorage<4, 4, int>                mOpenReadHandles;
    ::ll::TypedStorage<1, 1, bool>               mMarkedForDelete;
    ::ll::TypedStorage<1, 1, bool>               mMarkedDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemoryFile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status append(::leveldb::Slice const&);

    MCNAPI ::leveldb::Status close(::InMemoryAccessMode);

    MCNAPI ::leveldb::Status open(::InMemoryAccessMode);
    // NOLINTEND
};

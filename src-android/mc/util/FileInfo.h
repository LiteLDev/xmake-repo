#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

struct FileInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>            filePath;
    ::ll::TypedStorage<8, 8, ulong>        fileSize;
    ::ll::TypedStorage<8, 24, std::string> fileHash;
    // NOLINTEND

public:
    // prevent constructor by default
    FileInfo(FileInfo const&);
    FileInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FileInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

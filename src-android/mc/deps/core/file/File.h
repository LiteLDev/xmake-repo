#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { template<typename T0, int T1> class BasicStackString; }
namespace brstd { struct source_location; }
// clang-format on

namespace Core {

class File {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileImpl>>       mFile;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileSystemImpl>> mTransaction;
    // NOLINTEND

public:
    // prevent constructor by default
    File& operator=(File const&);
    File(File const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Core::Result close();

    MCNAPI bool isNearTransactionLimit(ulong) const;

    MCNAPI ::Core::Result open(::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode);

    MCNAPI ~File();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> cleanPath(::Core::PathView);

    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> cleanPathSeparators(::Core::PathView);

    MCNAPI static ::Core::Result
    writeCreateOrAppendFileData(::Core::PathView, ulong, ulong, std::vector<uchar> const&, ::brstd::source_location);

    MCNAPI static ::Core::Result
    writeCreateOrAppendFileData(::Core::PathView, ulong, ulong, uchar const*, ::brstd::source_location);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core

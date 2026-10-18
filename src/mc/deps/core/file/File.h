#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/FileBufferingMode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/BasicStackString.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class PathView; }
namespace Core { class Result; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
#else // @header-generator platform
#endif // @header-generator platform
namespace brstd { struct source_location; }
// clang-format on

namespace Core {

class File {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileImpl>>       mFile;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileSystemImpl>> mTransaction;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk7813fc;
    ::ll::UntypedStorage<8, 8> mUnk6dd4a2;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    File& operator=(File const&);
    File(File const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    File();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Core::Result close();
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI bool isNearTransactionLimit(ulong) const;

    MCNAPI ::Core::Result open(::Core::PathView, ::Core::FileOpenMode, ::Core::FileBufferingMode);
#else // @header-generator platform
#endif // @header-generator platform

    MCNAPI ~File();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> cleanPath(::Core::PathView);
#else // @header-generator platform
    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> cleanPath(::Core::PathView entryPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<Core::BasicStackString<char, 1024>> cleanPathSeparators(::Core::PathView);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    cleanPathSeparators(::Core::PathView entryPath);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::Result
    writeCreateOrAppendFileData(::Core::PathView, ulong, ulong, std::vector<uchar> const&, ::brstd::source_location);

    MCNAPI static ::Core::Result
    writeCreateOrAppendFileData(::Core::PathView, ulong, ulong, uchar const*, ::brstd::source_location);
#else // @header-generator platform
    MCNAPI static ::Core::Result writeCreateOrAppendFileData(
        ::Core::PathView         path,
        uint64                   offset,
        uint64                   numBytesToWrite,
        uchar const*             buffer,
        ::brstd::source_location sourceLocation
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core

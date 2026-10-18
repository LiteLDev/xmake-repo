#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

struct FileInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>            filePath;
    ::ll::TypedStorage<8, 8, ulong>        fileSize;
    ::ll::TypedStorage<8, 24, std::string> fileHash;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf751a1;
    ::ll::UntypedStorage<8, 8>  mUnk73a9a3;
    ::ll::UntypedStorage<8, 32> mUnk4fa44b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FileInfo& operator=(FileInfo const&);
#endif // @header-generator platform
    FileInfo(FileInfo const&);
    FileInfo();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI FileInfo(::Core::Path _filePath, int _fileSize, ::std::string _fileHash);

#endif // @header-generator platform
    MCNAPI ~FileInfo();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path _filePath, int _fileSize, ::std::string _fileHash);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

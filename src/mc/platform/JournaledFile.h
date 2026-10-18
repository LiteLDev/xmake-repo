#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/File.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

class JournaledFile {
public:
    // JournaledFile inner types define
    enum class Progression : int {
        NeverWritten = 0,
        WriteFailed  = 1,
        WriteSuccess = 2,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using ValidationCallback = std::function<Core::Result(Core::Path)>;

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mFilePath;
    ::ll::UntypedStorage<8, 24> mFile;
    ::ll::UntypedStorage<8, 48> mValidationCallback;
    ::ll::UntypedStorage<4, 16> mFileProgression;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk6eda08;
    ::ll::UntypedStorage<8, 16> mUnkdff1df;
    ::ll::UntypedStorage<8, 64> mUnkf173f5;
    ::ll::UntypedStorage<4, 4>  mUnk35a4f6;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    JournaledFile& operator=(JournaledFile const&);
    JournaledFile(JournaledFile const&);
    JournaledFile();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit JournaledFile(std::function<Core::Result(Core::Path)>&&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ::Core::Result close();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result open(::Core::Path, ::Core::FileOpenMode, ::Core::FileBufferingMode);
#else // @header-generator platform
    MCNAPI ::Core::Result
    open(::Core::Path filePath, ::Core::FileOpenMode fileOpenMode, ::Core::FileBufferingMode bufferingMode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::Result write(void const*, ulong);
#else // @header-generator platform
    MCNAPI ::Core::Result write(void const* pBuf, uint64 numBytes);
#endif // @header-generator platform

    MCNAPI ~JournaledFile();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<std::string> findBackupPath(::Core::Path);
#else // @header-generator platform
    MCNAPI static ::Core::PathBuffer<::std::string> findBackupPath(::Core::Path fileName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::PathBuffer<std::string> findReadPath(::Core::Path);
#else // @header-generator platform
    MCNAPI static ::Core::PathBuffer<::std::string> findReadPath(::Core::Path fileName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isOldFile(::Core::Path);
#else // @header-generator platform
    MCNAPI static bool isOldFile(::Core::Path fileName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void populateImportantFiles(::Core::Path, std::vector<std::string>&);
#else // @header-generator platform
    MCNAPI static void populateImportantFiles(::Core::Path fileName, ::std::vector<::std::string>& importantFiles);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Core::Result replaceHeadFileWithBackup(::Core::Path);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<Core::Result(Core::Path)>&&);
#else // @header-generator platform
    MCNAPI static ::Core::Result replaceHeadFileWithBackup(::Core::Path fileName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
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

    using ValidationCallback = std::function<Core::Result(Core::Path)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mFilePath;
    ::ll::UntypedStorage<8, 24> mFile;
    ::ll::UntypedStorage<8, 48> mValidationCallback;
    ::ll::UntypedStorage<4, 16> mFileProgression;
    // NOLINTEND

public:
    // prevent constructor by default
    JournaledFile& operator=(JournaledFile const&);
    JournaledFile(JournaledFile const&);
    JournaledFile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit JournaledFile(std::function<Core::Result(Core::Path)>&&);

    MCNAPI ::Core::Result close();

    MCNAPI ::Core::Result open(::Core::Path, ::Core::FileOpenMode, ::Core::FileBufferingMode);

    MCNAPI ::Core::Result write(void const*, ulong);

    MCNAPI ~JournaledFile();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::PathBuffer<std::string> findBackupPath(::Core::Path);

    MCNAPI static ::Core::PathBuffer<std::string> findReadPath(::Core::Path);

    MCNAPI static bool isOldFile(::Core::Path);

    MCNAPI static void populateImportantFiles(::Core::Path, std::vector<std::string>&);

    MCNAPI static ::Core::Result replaceHeadFileWithBackup(::Core::Path);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::function<Core::Result(Core::Path)>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/platform/Result.h"

class FolderSizeAndModifyDateSnapshot {
public:
    // FolderSizeAndModifyDateSnapshot inner types declare
    // clang-format off
    class FileSnapshot;
    // clang-format on

    // FolderSizeAndModifyDateSnapshot inner types define
    class FileSnapshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong> mSize;
        ::ll::TypedStorage<8, 8, long>  mTimeStamp;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<Core::Path, FolderSizeAndModifyDateSnapshot::FileSnapshot>> mFiles;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>>          mTimeToCapture;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<FolderSizeAndModifyDateSnapshot, std::error_code>
    CaptureSnapshot(::Core::Path const&);
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FlatFileManifestInfo {
public:
    // FlatFileManifestInfo inner types define
    enum class FlatFileManifestInfoFlags : uchar {
        File    = 1,
        Deleted = 128,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>     mPath;
    ::ll::TypedStorage<8, 8, ulong> mSeekPos;
    ::ll::TypedStorage<8, 8, ulong> mFileSize;
    ::ll::TypedStorage<1, 1, uchar> mFlags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isFile() const;

    MCNAPI void setAttributes(::Core::FileType, bool);

    MCNAPI void setFileSize(ulong);

    MCNAPI void setPath(::Core::PathView);

    MCNAPI void setSeekPos(ulong);
    // NOLINTEND
};

} // namespace Core

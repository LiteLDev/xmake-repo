#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

namespace Core {

struct DirectoryIterationItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                mFullPathName;
    ::ll::UntypedStorage<8, 24>                mName;
    ::ll::TypedStorage<8, 8, ulong>            mFileSize;
    ::ll::TypedStorage<8, 8, ulong>            mFileSizeAllocationOnDisk;
    ::ll::TypedStorage<4, 4, ::Core::FileType> mType;
    ::ll::TypedStorage<8, 8, long>             mCreateTime;
    ::ll::TypedStorage<8, 8, long>             mModifyTime;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryIterationItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DirectoryIterationItem(::Core::DirectoryIterationFlags);

    MCNAPI ulong getFileSize() const;

    MCNAPI ulong getFileSizeAllocationOnDisk() const;

    MCNAPI long getModifyTime() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getName() const;

    MCNAPI ::Core::FileType getType() const;

    MCNAPI bool isDirectory() const;

    MCNAPI bool isFile() const;

    MCNAPI void setCreateTime(long);

    MCNAPI void setFileSize(ulong);

    MCNAPI void setFullPathName(::Core::PathView);

    MCNAPI void setModifyTime(long);

    MCNAPI void setName(::Core::PathView);

    MCNAPI void setType(::Core::FileType);

    MCNAPI ~DirectoryIterationItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::DirectoryIterationFlags);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core

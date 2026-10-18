#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

namespace Core {

struct DirectoryIterationItem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                mFullPathName;
    ::ll::UntypedStorage<8, 24>                mName;
    ::ll::TypedStorage<8, 8, ulong>            mFileSize;
    ::ll::TypedStorage<8, 8, ulong>            mFileSizeAllocationOnDisk;
    ::ll::TypedStorage<4, 4, ::Core::FileType> mType;
    ::ll::TypedStorage<8, 8, long>             mCreateTime;
    ::ll::TypedStorage<8, 8, long>             mModifyTime;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkba94d0;
    ::ll::UntypedStorage<8, 32> mUnk47aa5b;
    ::ll::UntypedStorage<8, 8>  mUnk657388;
    ::ll::UntypedStorage<8, 8>  mUnk5990e0;
    ::ll::UntypedStorage<4, 4>  mUnk657618;
    ::ll::UntypedStorage<8, 8>  mUnkd41f5c;
    ::ll::UntypedStorage<8, 8>  mUnkf25ac3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DirectoryIterationItem& operator=(DirectoryIterationItem const&);
    DirectoryIterationItem(DirectoryIterationItem const&);
#endif // @header-generator platform
    DirectoryIterationItem();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DirectoryIterationItem(::Core::DirectoryIterationFlags);
#else // @header-generator platform
    MCNAPI void setFullPathName(::Core::PathView fullPathName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI void setName(::Core::PathView name);
#endif // @header-generator platform

    MCNAPI ~DirectoryIterationItem();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::DirectoryIterationFlags);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core

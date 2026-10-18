#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/Result.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class ReadOnlyBinaryStream;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>     mPath;
    ::ll::TypedStorage<8, 8, ulong> mSeekPos;
    ::ll::TypedStorage<8, 8, ulong> mFileSize;
    ::ll::TypedStorage<1, 1, uchar> mFlags;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk807445;
    ::ll::UntypedStorage<8, 8>  mUnkb6e6bf;
    ::ll::UntypedStorage<8, 8>  mUnka6c43a;
    ::ll::UntypedStorage<1, 1>  mUnk3b7215;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FlatFileManifestInfo& operator=(FlatFileManifestInfo const&);
    FlatFileManifestInfo(FlatFileManifestInfo const&);
    FlatFileManifestInfo();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isFile() const;
#else // @header-generator platform
    MCNAPI void setPath(::Core::PathView path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setAttributes(::Core::FileType, bool);
#else // @header-generator platform
    MCNAPI ~FlatFileManifestInfo();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setFileSize(ulong);

    MCNAPI void setPath(::Core::PathView);

    MCNAPI void setSeekPos(ulong);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core

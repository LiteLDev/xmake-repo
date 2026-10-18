#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/file/Path.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong> mSize;
        ::ll::TypedStorage<8, 8, long>  mTimeStamp;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnk4b0190;
        ::ll::UntypedStorage<8, 8> mUnk6eba40;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        FileSnapshot& operator=(FileSnapshot const&);
        FileSnapshot(FileSnapshot const&);
        FileSnapshot();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::map<Core::Path, FolderSizeAndModifyDateSnapshot::FileSnapshot>> mFiles;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>>          mTimeToCapture;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk4ecdc8;
    ::ll::UntypedStorage<8, 8>  mUnkb46dbd;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FolderSizeAndModifyDateSnapshot& operator=(FolderSizeAndModifyDateSnapshot const&);
    FolderSizeAndModifyDateSnapshot(FolderSizeAndModifyDateSnapshot const&);
    FolderSizeAndModifyDateSnapshot();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Bedrock::Result<FolderSizeAndModifyDateSnapshot, std::error_code>
    CaptureSnapshot(::Core::Path const&);
#else // @header-generator platform
    MCNAPI static ::Bedrock::Result<::FolderSizeAndModifyDateSnapshot> CaptureSnapshot(::Core::Path const& path);
#endif // @header-generator platform
    // NOLINTEND
};

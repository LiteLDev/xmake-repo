#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/container/list.h"
#include "mc/platform/container/list_base_hook.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core::Internal { class DataSegment; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Core::Internal {

class FileData {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // FileData inner types define
    using OpenFileFunc = std::function<Bedrock::Result<void, std::error_code>(
        std::unique_ptr<Core::FileSystemImpl>&,
        std::unique_ptr<Core::FileImpl>&,
        Core::PathView,
        Core::FileOpenMode
    )>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                                     mSegments;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileImpl>>       mFile;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Core::FileSystemImpl>> mFileSystem;
    ::ll::UntypedStorage<8, 48>                                     mOnWriteCallback;
    ::ll::UntypedStorage<8, 48>                                     mOnCloseCallback;
    ::ll::TypedStorage<4, 4, std::atomic<uint>>                     mOpenCount;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                 mLastKnownDiskSize;
    ::ll::TypedStorage<8, 8, long>                                  mCreatedTime;
    ::ll::TypedStorage<8, 8, long>                                  mModifiedTime;
    ::ll::TypedStorage<1, 1, bool>                                  mBinary;
    ::ll::TypedStorage<1, 1, bool>                                  mTruncate;
    ::ll::UntypedStorage<1, 2>                                      mReadOnly;
    ::ll::UntypedStorage<1, 148>                                    mFileMutex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk26e6a0;
    ::ll::UntypedStorage<8, 8>  mUnk62691d;
    ::ll::UntypedStorage<8, 8>  mUnkdf80cc;
    ::ll::UntypedStorage<8, 64> mUnkf05cd7;
    ::ll::UntypedStorage<8, 64> mUnka79bc3;
    ::ll::UntypedStorage<4, 4>  mUnk2c8bd7;
    ::ll::UntypedStorage<8, 16> mUnk80ab4b;
    ::ll::UntypedStorage<8, 8>  mUnke248bb;
    ::ll::UntypedStorage<8, 8>  mUnkaa0b7a;
    ::ll::UntypedStorage<1, 1>  mUnkaa6ba1;
    ::ll::UntypedStorage<1, 1>  mUnk91c180;
    ::ll::UntypedStorage<1, 1>  mUnk2dcea8;
    ::ll::UntypedStorage<8, 8>  mUnk7f49c0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FileData& operator=(FileData const&);
    FileData(FileData const&);
#endif // @header-generator platform
    FileData();
};

} // namespace Core::Internal

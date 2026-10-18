#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Core {

class FileIndexLru
: public ::Bedrock::EnableNonOwnerReferences,
#if defined(LL_PLAT_A) // @header-generator platform
  public ::Core::LRUCache<Core::PathBuffer<std::string>, std::nullptr_t, std::shared_ptr<std::nullptr_t>> {
#else // @header-generator platform
  public ::Core::LRUCache<::Core::PathBuffer<::std::string>, nullptr_t, ::std::shared_ptr<nullptr_t>> {
#endif // @header-generator platform
public:
    // FileIndexLru inner types declare
    // clang-format off
    struct PriorityQueueElement;
    // clang-format on

    // FileIndexLru inner types define
    struct PriorityQueueElement {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, long>  mFileIndex;
        ::ll::TypedStorage<8, 8, ulong> mFileSize;
        ::ll::UntypedStorage<8, 24>     mTruePath;
        ::ll::UntypedStorage<8, 24>     mOnDiskPath;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk9ee2f4;
        ::ll::UntypedStorage<8, 8>  mUnkef345e;
        ::ll::UntypedStorage<8, 32> mUnk321ec0;
        ::ll::UntypedStorage<8, 32> mUnkab99c9;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        PriorityQueueElement& operator=(PriorityQueueElement const&);
        PriorityQueueElement(PriorityQueueElement const&);
#endif // @header-generator platform
        PriorityQueueElement();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::recursive_mutex> mAccess;
    ::ll::UntypedStorage<8, 40>                     mFilePathToIndexedFilePath;
    ::ll::UntypedStorage<8, 40>                     mIndexedFilePathToFilePath;
    ::ll::UntypedStorage<8, 40>                     mFileEvictDeleteMap;
    ::ll::TypedStorage<8, 8, ulong>                 mRollingIndex;
    ::ll::UntypedStorage<8, 24>                     mIgnoredFilePaths;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnk34410e;
    ::ll::UntypedStorage<8, 64> mUnkb79d3e;
    ::ll::UntypedStorage<8, 64> mUnk133e06;
    ::ll::UntypedStorage<8, 64> mUnk9375d7;
    ::ll::UntypedStorage<8, 8>  mUnk303f06;
    ::ll::UntypedStorage<8, 24> mUnk2e7d20;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FileIndexLru& operator=(FileIndexLru const&);
    FileIndexLru(FileIndexLru const&);
#endif // @header-generator platform
    FileIndexLru();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const& sFileIndexSeparator();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Core

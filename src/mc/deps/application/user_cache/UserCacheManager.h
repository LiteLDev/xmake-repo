#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Bedrock { struct DirectoryEntry; }
// clang-format on

namespace Bedrock {

class UserCacheManager {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // UserCacheManager inner types define
    using AppPlatformGetter = ::brstd::move_only_function<Bedrock::NonOwnerPointer<AppPlatform>()>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> mCachePath;
    ::ll::UntypedStorage<8, 64> mGetAppPlatform;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk20203c;
    ::ll::UntypedStorage<8, 64> mUnk324c0d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    UserCacheManager& operator=(UserCacheManager const&);
    UserCacheManager(UserCacheManager const&);
#endif // @header-generator platform
    UserCacheManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI UserCacheManager(
        ::Core::PathBuffer<std::string> const&,
        ::brstd::move_only_function<Bedrock::NonOwnerPointer<AppPlatform>()>
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI UserCacheManager(
        ::Core::PathBuffer<::std::string> const&                                 cachePath,
        ::brstd::move_only_function<::Bedrock::NonOwnerPointer<::AppPlatform>()> getAppPlatform
    );

    MCNAPI bool clearDownloadStorageIfFull(::std::vector<::Bedrock::DirectoryEntry>& folders);

    MCNAPI bool clearUserStorageIfFull(::std::vector<::Bedrock::DirectoryEntry>& folders);
#endif
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _getDirectoryContents(std::vector<Bedrock::DirectoryEntry>&, ::Core::PathBuffer<std::string> const&) const;

    MCNAPI void _getDirectorySizeAndDeleteDirectoryContents(::Core::PathBuffer<std::string> const&) const;

    MCNAPI bool clearDownloadStorageIfFull(std::vector<Bedrock::DirectoryEntry>&);

    MCNAPI bool clearUserStorageIfFull(std::vector<Bedrock::DirectoryEntry>&);
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static void _getDirectoryContents(
        ::std::vector<::Bedrock::DirectoryEntry>& folders,
        ::Core::PathBuffer<::std::string> const&  filePath
    );

    MCNAPI static void _getDirectorySizeAndDeleteDirectoryContents(::Core::PathBuffer<::std::string> const& path);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::Core::PathBuffer<std::string> const&, ::brstd::move_only_function<Bedrock::NonOwnerPointer<AppPlatform>()>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Core::PathBuffer<::std::string> const&                                 cachePath,
        ::brstd::move_only_function<::Bedrock::NonOwnerPointer<::AppPlatform>()> getAppPlatform
    );
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock

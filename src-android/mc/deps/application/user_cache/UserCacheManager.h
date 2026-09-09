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
    // UserCacheManager inner types define
    using AppPlatformGetter = ::brstd::move_only_function<Bedrock::NonOwnerPointer<AppPlatform>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mCachePath;
    ::ll::UntypedStorage<8, 64> mGetAppPlatform;
    // NOLINTEND

public:
    // prevent constructor by default
    UserCacheManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UserCacheManager(
        ::Core::PathBuffer<std::string> const&,
        ::brstd::move_only_function<Bedrock::NonOwnerPointer<AppPlatform>()>
    );

    MCNAPI void
    _getDirectoryContents(std::vector<Bedrock::DirectoryEntry>&, ::Core::PathBuffer<std::string> const&) const;

    MCNAPI void _getDirectorySizeAndDeleteDirectoryContents(::Core::PathBuffer<std::string> const&) const;

    MCNAPI bool clearDownloadStorageIfFull(std::vector<Bedrock::DirectoryEntry>&);

    MCNAPI bool clearUserStorageIfFull(std::vector<Bedrock::DirectoryEntry>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Core::PathBuffer<std::string> const&, ::brstd::move_only_function<Bedrock::NonOwnerPointer<AppPlatform>()>);
    // NOLINTEND
};

} // namespace Bedrock

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
namespace Social { class ProfileImageOptions; }
namespace Social { struct RawProfileImageData; }
namespace mce { struct Image; }
// clang-format on

namespace Social {

class ProfileImageCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup> mDiskTaskGroup;
    ::ll::UntypedStorage<8, 24>             mImageCache;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ProfileImageCache(::Core::PathView);

    MCNAPI void _pruneIncrementally(std::vector<Core::PathBuffer<std::string>>);

    MCNAPI void pruneCache(long);

    MCNAPI ::Bedrock::Threading::Async<Core::PathBuffer<std::string>>
    writeProfileImage(::Social::ProfileImageOptions const&, ::Social::RawProfileImageData);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _cachedFileMatchesETag(::Core::PathBuffer<std::string> const&, std::string const&);

    MCNAPI static ::Core::PathBuffer<std::string>
    _makeFilePathForOptions(::Social::ProfileImageOptions const&, ::Core::PathBuffer<std::string>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::PathView);
    // NOLINTEND
};

} // namespace Social

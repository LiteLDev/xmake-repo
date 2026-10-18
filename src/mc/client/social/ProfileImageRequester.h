#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/ProfileImageCache.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace Social { class ProfileImageOptions; }
namespace Social { struct RawProfileImageData; }
namespace mce { struct Image; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class ProfileImageRequester {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 240, ::TaskGroup>                 mTaskGroup;
    ::ll::TypedStorage<8, 264, ::Social::ProfileImageCache> mCache;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileImageRequester();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ProfileImageRequester();

    virtual ::Bedrock::Threading::Async<Social::RawProfileImageData> _fetchProfileImageFromWeb(::Social::ProfileImageOptions const&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ProfileImageRequester(::Core::PathBuffer<std::string>);

    MCNAPI ::Bedrock::Threading::Async<std::shared_ptr<mce::Image>>
    getProfileImage(::Social::ProfileImageOptions const&, std::string const&);

    MCNAPI ::Bedrock::Threading::Async<Core::PathBuffer<std::string>>
    getProfileImageFile(::Social::ProfileImageOptions const&, std::string const&);

    MCNAPI void pruneCache(std::chrono::duration<long long, std::ratio<1, 1>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::PathBuffer<std::string>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ProfileImageRequester {};
#endif // @header-generator platform

} // namespace Social

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/ProfileImageRequester.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Social { class ProfileImageOptions; }
namespace Social { struct RawProfileImageData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class ProfileImageRequester_Generic : public ::Social::ProfileImageRequester {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::Bedrock::Threading::Async<Social::RawProfileImageData> _fetchProfileImageFromWeb(::Social::ProfileImageOptions const&);
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class ProfileImageRequester_Generic {};
#endif // @header-generator platform

} // namespace Social

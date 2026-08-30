#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/ProfileImageRequester.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Social { class ProfileImageOptions; }
namespace Social { struct RawProfileImageData; }
// clang-format on

namespace Social {

class ProfileImageRequester_Generic : public ::Social::ProfileImageRequester {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::Bedrock::Threading::Async<Social::RawProfileImageData> _fetchProfileImageFromWeb(::Social::ProfileImageOptions const&);
    // clang-format on
    // NOLINTEND
};

} // namespace Social

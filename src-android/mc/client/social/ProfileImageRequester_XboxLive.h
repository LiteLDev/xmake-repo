#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/ProfileImageRequester.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Social { class ProfileImageOptions; }
namespace Social { class XboxLiveIdentity; }
namespace Social { struct RawProfileImageData; }
// clang-format on

namespace Social {

class ProfileImageRequester_XboxLive : public ::Social::ProfileImageRequester {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ProfileImageRequester_XboxLive();

    virtual ::Bedrock::Threading::Async<Social::RawProfileImageData> _fetchProfileImageFromWeb(::Social::ProfileImageOptions const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProfileImageRequester_XboxLive();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<Social::RawProfileImageData>
    $_fetchProfileImageFromWeb(::Social::ProfileImageOptions const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Social

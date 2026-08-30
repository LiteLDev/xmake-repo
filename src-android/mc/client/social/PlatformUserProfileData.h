#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/UserPicturePath.h"
#include "mc/client/social/UserPresenceResult.h"

namespace Social {

struct PlatformUserProfileData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                 mUuid;
    ::ll::TypedStorage<8, 24, std::string>                 mDisplayName;
    ::ll::TypedStorage<8, 24, std::string>                 mTitleName;
    ::ll::TypedStorage<4, 4, ::Social::UserPresenceResult> mPresence;
    ::ll::TypedStorage<8, 48, ::Social::UserPicturePath>   mProfilePicturePath;
    ::ll::TypedStorage<8, 24, std::string>                 mProfilePictureUrl;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformUserProfileData& operator=(PlatformUserProfileData const&);
    PlatformUserProfileData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlatformUserProfileData(::Social::PlatformUserProfileData const&);

    MCNAPI ~PlatformUserProfileData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::PlatformUserProfileData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social

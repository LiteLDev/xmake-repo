#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/ProfileImageOptions.h"

namespace OreUI {

class AllowListProfileImage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                   mID;
    ::ll::TypedStorage<8, 24, std::string>                   mURL;
    ::ll::TypedStorage<8, 56, ::Social::ProfileImageOptions> mImageOptions;
    ::ll::TypedStorage<4, 4, int>                            mCacheBust;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListProfileImage& operator=(AllowListProfileImage const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AllowListProfileImage(::OreUI::AllowListProfileImage const&);

    MCNAPI std::string const& id() const;

    MCNAPI ::Social::ProfileImageOptions const& imageOptions() const;

    MCNAPI void invalidate();

    MCNAPI std::string const& url() const;

    MCNAPI ~AllowListProfileImage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::AllowListProfileImage const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI

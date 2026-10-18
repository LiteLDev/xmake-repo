#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/ProfileImageOptions.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/ProfileImageOptions.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class AllowListProfileImage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 mID;
    ::ll::TypedStorage<8, 32, ::std::string>                 mURL;
    ::ll::TypedStorage<8, 72, ::Social::ProfileImageOptions> mImageOptions;
    ::ll::TypedStorage<4, 4, int>                            mCacheBust;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListProfileImage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AllowListProfileImage(::OreUI::AllowListProfileImage const&);

    MCAPI AllowListProfileImage(::std::string id, ::Social::ProfileImageOptions const& imageOptions);

    MCAPI void invalidate();

    MCAPI ::OreUI::AllowListProfileImage& operator=(::OreUI::AllowListProfileImage const&);

    MCAPI ::OreUI::AllowListProfileImage& operator=(::OreUI::AllowListProfileImage&&);

    MCAPI ~AllowListProfileImage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::AllowListProfileImage const&);

    MCAPI void* $ctor(::std::string id, ::Social::ProfileImageOptions const& imageOptions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class AllowListProfileImage {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

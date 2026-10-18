#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class AllowListQRCode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mID;
    ::ll::TypedStorage<8, 24, std::string> mURL;
    ::ll::TypedStorage<8, 24, std::string> mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListQRCode(AllowListQRCode const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AllowListQRCode(std::string, std::string);

    MCNAPI std::string const& url() const;

    MCNAPI ~AllowListQRCode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class AllowListQRCode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mID;
    ::ll::TypedStorage<8, 32, ::std::string> mURL;
    ::ll::TypedStorage<8, 32, ::std::string> mTarget;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListQRCode();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AllowListQRCode(::std::string id, ::std::string target);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string id, ::std::string target);
    // NOLINTEND
};
#else // @header-generator platform
class AllowListQRCode {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

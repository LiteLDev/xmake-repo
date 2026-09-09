#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

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

} // namespace OreUI

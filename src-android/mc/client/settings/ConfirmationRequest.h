#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

struct ConfirmationRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mTitle;
    ::ll::TypedStorage<8, 24, std::string> mDescription;
    ::ll::TypedStorage<8, 24, std::string> mAcceptLabel;
    ::ll::TypedStorage<8, 24, std::string> mCancelLabel;
    // NOLINTEND

public:
    // prevent constructor by default
    ConfirmationRequest& operator=(ConfirmationRequest const&);
    ConfirmationRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConfirmationRequest(::Settings::ConfirmationRequest&&);

    MCNAPI ConfirmationRequest(::Settings::ConfirmationRequest const&);

    MCNAPI ~ConfirmationRequest();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Settings::ConfirmationRequest&&);

    MCNAPI void* $ctor(::Settings::ConfirmationRequest const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Settings

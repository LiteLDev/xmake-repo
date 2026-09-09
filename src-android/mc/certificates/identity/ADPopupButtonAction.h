#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ADPopupTelemetryEvent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ADPopupButtonAction {
public:
    // ADPopupButtonAction inner types define
    enum class Type : int {
        Link            = 0,
        SignIn          = 1,
        Dismiss         = 2,
        RetrySignIn     = 3,
        AgeVerification = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::ADPopupTelemetryEvent>    mTelemetryEvent;
    ::ll::TypedStorage<4, 4, ::ADPopupButtonAction::Type> mType;
    ::ll::TypedStorage<8, 24, std::string>                mText;
    ::ll::TypedStorage<8, 24, std::string>                mUri;
    // NOLINTEND

public:
    // prevent constructor by default
    ADPopupButtonAction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ADPopupButtonAction(::ADPopupButtonAction const&);

    MCNAPI std::string const& getText() const;

    MCNAPI ::ADPopupButtonAction::Type getType() const;

    MCNAPI std::string const& getUri() const;

    MCNAPI ~ADPopupButtonAction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ADPopupButtonAction const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

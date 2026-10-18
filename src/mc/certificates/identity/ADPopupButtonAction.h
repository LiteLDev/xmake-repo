#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/certificates/identity/ADPopupTelemetryEvent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::ADPopupTelemetryEvent>    mTelemetryEvent;
    ::ll::TypedStorage<4, 4, ::ADPopupButtonAction::Type> mType;
    ::ll::TypedStorage<8, 24, std::string>                mText;
    ::ll::TypedStorage<8, 24, std::string>                mUri;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkded87f;
    ::ll::UntypedStorage<4, 4>  mUnk4072d7;
    ::ll::UntypedStorage<8, 32> mUnkc85352;
    ::ll::UntypedStorage<8, 32> mUnk97a29c;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ADPopupButtonAction();

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ADPopupButtonAction& operator=(ADPopupButtonAction const&);
    ADPopupButtonAction(ADPopupButtonAction const&);
    ADPopupButtonAction();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ADPopupButtonAction();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ADPopupButtonAction(::ADPopupButtonAction const&);

    MCNAPI std::string const& getText() const;

    MCNAPI ::ADPopupButtonAction::Type getType() const;

    MCNAPI std::string const& getUri() const;

    MCNAPI ~ADPopupButtonAction();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ADPopupButtonAction(::ADPopupButtonAction const&);

    MCNAPI ::ADPopupButtonAction& operator=(::ADPopupButtonAction const&);

    MCNAPI ~ADPopupButtonAction();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ADPopupButtonAction const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ADPopupButtonAction const&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

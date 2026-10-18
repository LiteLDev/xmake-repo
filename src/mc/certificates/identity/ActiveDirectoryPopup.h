#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/certificates/identity/ADPopupButtonAction.h"
#include "mc/certificates/identity/ADPopupTelemetryEvent.h"
#include "mc/certificates/identity/ActiveDirectoryAction.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/certificates/identity/ActiveDirectoryExperience.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ActiveDirectoryPopup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                        mId;
    ::ll::TypedStorage<8, 24, std::string>                        mTitle;
    ::ll::TypedStorage<8, 24, std::string>                        mPopupText;
    ::ll::TypedStorage<8, 24, std::string>                        mLearnMoreText;
    ::ll::TypedStorage<8, 24, std::string>                        mLearnMoreUri;
    ::ll::TypedStorage<8, 24, std::string>                        mDemoLinkText;
    ::ll::TypedStorage<8, 80, ::ADPopupButtonAction>              mFirstLowerButton;
    ::ll::TypedStorage<8, 88, std::optional<ADPopupButtonAction>> mSecondLowerButton;
    ::ll::TypedStorage<8, 24, ::ADPopupTelemetryEvent>            mTelemetryEvent;
    ::ll::TypedStorage<8, 24, std::string>                        mHyperlinkIntroText;
    ::ll::TypedStorage<8, 24, std::string>                        mHyperlinkLabelText;
    ::ll::TypedStorage<8, 24, std::string>                        mHyperlinkUri;
    ::ll::TypedStorage<1, 1, ::ActiveDirectoryAction>             mPostPopupAction;
    ::ll::TypedStorage<1, 1, ::ActiveDirectoryExperience>         mExperienceType;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnk803624;
    ::ll::UntypedStorage<8, 32>  mUnk11cf0b;
    ::ll::UntypedStorage<8, 32>  mUnk776762;
    ::ll::UntypedStorage<8, 32>  mUnkcb880a;
    ::ll::UntypedStorage<8, 32>  mUnk9b9552;
    ::ll::UntypedStorage<8, 32>  mUnkddff22;
    ::ll::UntypedStorage<8, 104> mUnkf21cae;
    ::ll::UntypedStorage<8, 112> mUnk95126a;
    ::ll::UntypedStorage<8, 32>  mUnke37b6c;
    ::ll::UntypedStorage<8, 32>  mUnk2ff568;
    ::ll::UntypedStorage<8, 32>  mUnkb95c78;
    ::ll::UntypedStorage<8, 32>  mUnk3cdf1a;
    ::ll::UntypedStorage<1, 1>   mUnkff7bc8;
    ::ll::UntypedStorage<1, 1>   mUnk80ef59;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ActiveDirectoryPopup& operator=(ActiveDirectoryPopup const&);
    ActiveDirectoryPopup(ActiveDirectoryPopup const&);
    ActiveDirectoryPopup();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ActiveDirectoryPopup();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActiveDirectoryPopup(::ActiveDirectoryPopup const&);

    MCNAPI ActiveDirectoryPopup(
        std::string&&,
        std::string&&,
        std::string&&,
        std::string&&,
        std::string&&,
        std::string&&,
        ::ActiveDirectoryAction,
        ::ActiveDirectoryExperience
    );

    MCNAPI std::string const& getDemoLinkText() const;

    MCNAPI ::ActiveDirectoryExperience getExperienceType() const;

    MCNAPI ::ADPopupButtonAction const& getFirstLowerButton() const;

    MCNAPI std::string const& getHyperlinkIntroText() const;

    MCNAPI std::string const& getHyperlinkLabelText() const;

    MCNAPI std::string const& getHyperlinkUri() const;

    MCNAPI std::string const& getLearnMoreText() const;

    MCNAPI std::string const& getLearnMoreUri() const;

    MCNAPI std::string const& getPopupText() const;

    MCNAPI std::string const& getPopupTitle() const;

    MCNAPI std::optional<ADPopupButtonAction> const& getSecondLowerButton() const;

    MCNAPI std::string getTTSMessageBody() const;

    MCNAPI ::ADPopupTelemetryEvent const& getTelemetryEvent() const;

    MCNAPI ::ActiveDirectoryPopup& operator=(::ActiveDirectoryPopup const&);

    MCNAPI ::ActiveDirectoryAction postAction() const;

    MCNAPI ~ActiveDirectoryPopup();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ActiveDirectoryPopup(::ActiveDirectoryPopup&&);

    MCNAPI ActiveDirectoryPopup(::ActiveDirectoryPopup const&);

    MCNAPI ::std::string getTTSMessageBody() const;

    MCNAPI ::ActiveDirectoryPopup& operator=(::ActiveDirectoryPopup const&);

    MCNAPI ~ActiveDirectoryPopup();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ActiveDirectoryPopup
        get(::gsl::not_null<Bedrock::NonOwnerPointer<const ActiveDirectoryIdentity>>, ::ActiveDirectoryExperience);

    MCNAPI static ::ActiveDirectoryPopup get(::edu::Role, int, ::ActiveDirectoryExperience, std::string const&);

    MCNAPI static ::ActiveDirectoryPopup getVerificationInProgressPopup(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::ActiveDirectoryPopup
    get(::Bedrock::NotNullNonOwnerPtr<::ActiveDirectoryIdentity const> identity,
        ::ActiveDirectoryExperience                                    experience);

    MCNAPI static ::ActiveDirectoryPopup
    get(::edu::Role, int trialsRemaining, ::ActiveDirectoryExperience experience, ::std::string const& email);

    MCNAPI static ::ActiveDirectoryPopup getVerificationInProgressPopup(::std::string const& verificationUri);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActiveDirectoryPopup const&);

    MCNAPI void* $ctor(
        std::string&&,
        std::string&&,
        std::string&&,
        std::string&&,
        std::string&&,
        std::string&&,
        ::ActiveDirectoryAction,
        ::ActiveDirectoryExperience
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ActiveDirectoryPopup&&);

    MCNAPI void* $ctor(::ActiveDirectoryPopup const&);
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

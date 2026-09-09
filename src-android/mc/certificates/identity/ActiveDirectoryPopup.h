#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ADPopupButtonAction.h"
#include "mc/certificates/identity/ADPopupTelemetryEvent.h"
#include "mc/certificates/identity/ActiveDirectoryAction.h"
#include "mc/certificates/identity/ActiveDirectoryExperience.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
namespace Json { class Value; }
// clang-format on

class ActiveDirectoryPopup {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ActiveDirectoryPopup
        get(::gsl::not_null<Bedrock::NonOwnerPointer<const ActiveDirectoryIdentity>>, ::ActiveDirectoryExperience);

    MCNAPI static ::ActiveDirectoryPopup get(::edu::Role, int, ::ActiveDirectoryExperience, std::string const&);

    MCNAPI static ::ActiveDirectoryPopup getVerificationInProgressPopup(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

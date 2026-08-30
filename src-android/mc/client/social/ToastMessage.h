#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/player_messaging/ButtonActionType.h"
#include "mc/client/social/ToastIconData.h"
#include "mc/client/social/ToastMessageType.h"

// auto generated forward declare list
// clang-format off
class IToastListener;
namespace Json { class Value; }
// clang-format on

class ToastMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IToastListener*>                       mListener;
    ::ll::TypedStorage<1, 1, bool>                                    mIsMergingEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mHasCustomPocketToast;
    ::ll::TypedStorage<1, 1, bool>                                    mUseCustomPocketToast;
    ::ll::TypedStorage<1, 1, bool>                                    mIsSilent;
    ::ll::TypedStorage<4, 4, ::ToastMessageType>                      mType;
    ::ll::TypedStorage<8, 24, std::string>                            mTitle;
    ::ll::TypedStorage<8, 24, std::string>                            mSubtitle;
    ::ll::TypedStorage<8, 24, std::string>                            mMessageId;
    ::ll::UntypedStorage<8, 16>                                       mPropertyBag;
    ::ll::TypedStorage<8, 24, std::string>                            mLink;
    ::ll::TypedStorage<4, 4, ::PlayerMessaging::ButtonActionType>     mButtonActionType;
    ::ll::TypedStorage<1, 1, bool>                                    mHasBeenPressed;
    ::ll::TypedStorage<4, 4, float>                                   mTransitInTime;
    ::ll::TypedStorage<4, 4, float>                                   mTransitOutTime;
    ::ll::TypedStorage<4, 4, float>                                   mAdditionalDisplaySeconds;
    ::ll::TypedStorage<4, 4, float>                                   mAlpha;
    ::ll::TypedStorage<4, 4, float>                                   mBackgroundAlpha;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mStartPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mIdlePosition;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mEndPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mCustomPocketStartPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mCustomPocketIdlePosition;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mCustomPocketEndPosition;
    ::ll::TypedStorage<8, 24, std::vector<ToastIconData>>             mIconRenderIds;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>             mVisibleButton;
    ::ll::TypedStorage<8, 24, std::string>                            mControlId;
    ::ll::TypedStorage<8, 24, std::string>                            mPocketControlId;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ToastMessage(std::string const&);

    MCNAPI ToastMessage(::ToastMessage const&);

    MCNAPI ToastMessage(::ToastMessageType, std::string const&, std::string const&);

    MCNAPI ToastMessage(::ToastMessageType, std::string const&, std::string const&, ::Json::Value const&, float);

    MCNAPI ToastMessage(
        ::ToastMessageType,
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::string const&,
        ::PlayerMessaging::ButtonActionType
    );

    MCNAPI ::ToastMessage& operator=(::ToastMessage const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(::ToastMessage const&);

    MCNAPI void* $ctor(::ToastMessageType, std::string const&, std::string const&);

    MCNAPI void* $ctor(::ToastMessageType, std::string const&, std::string const&, ::Json::Value const&, float);

    MCNAPI void* $ctor(
        ::ToastMessageType,
        std::string const&,
        std::string const&,
        std::string const&,
        bool,
        std::string const&,
        ::PlayerMessaging::ButtonActionType
    );
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/ButtonArtTextData.h"
#include "mc/client/services/messaging/ButtonData.h"
#include "mc/client/services/messaging/ImageData.h"
#include "mc/client/services/messaging/InboxData.h"
#include "mc/client/services/messaging/MessageGamedropData.h"
#include "mc/client/services/messaging/MessageItemData.h"
#include "mc/client/services/messaging/SentimentQuestionData.h"
#include "mc/client/services/messaging/player_messaging/MessageStyle.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct MessageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                          mId;
    ::ll::TypedStorage<8, 24, std::string>                          mReportId;
    ::ll::TypedStorage<8, 24, std::string>                          mSurface;
    ::ll::TypedStorage<8, 24, std::string>                          mTemplate;
    ::ll::TypedStorage<8, 24, std::string>                          mSender;
    ::ll::TypedStorage<8, 24, std::string>                          mSenderXuid;
    ::ll::TypedStorage<8, 24, std::string>                          mInstanceId;
    ::ll::TypedStorage<1, 1, bool>                                  mIsControl;
    ::ll::TypedStorage<1, 1, bool>                                  mAllowInGame;
    ::ll::TypedStorage<8, 24, std::string>                          mHeader;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>           mSubtitle;
    ::ll::TypedStorage<8, 24, std::string>                          mBody;
    ::ll::TypedStorage<8, 24, std::vector<ImageData>>               mImages;
    ::ll::TypedStorage<8, 24, std::vector<ButtonData>>              mButtons;
    ::ll::TypedStorage<8, 24, std::vector<MessageItemData>>         mItems;
    ::ll::TypedStorage<1, 1, ::PlayerMessaging::MessageStyle>       mStyle;
    ::ll::TypedStorage<8, 104, std::optional<InboxData>>            mInboxData;
    ::ll::TypedStorage<8, 104, std::optional<MessageGamedropData>>  mGamedrop;
    ::ll::TypedStorage<8, 80, std::optional<ButtonArtTextData>>     mButtonArtTextData;
    ::ll::TypedStorage<8, 40, std::optional<SentimentQuestionData>> mSentimentQuestionData;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageData& operator=(MessageData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MessageData(::Json::Value const&);

    MCNAPI MessageData(::MessageData const&);

    MCNAPI ::ButtonData getButtonById(std::string const&) const;

    MCNAPI ::ImageData getImageById(std::string const&) const;

    MCNAPI std::string getStringPathForImageId(std::string const&) const;

    MCNAPI bool imagesDownloaded() const;

    MCNAPI ~MessageData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Json::Value const&);

    MCNAPI void* $ctor(::MessageData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

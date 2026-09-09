#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/FeedbackType.h"
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Bedrock::Http { class Status; }
namespace Json { class Value; }
// clang-format on

class SubmitFeedbackScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mDirty;
    ::ll::TypedStorage<1, 1, bool> mPendingAsyncOperation;
    ::ll::TypedStorage<1, 1, bool> mEnableSubmitButton;
    ::ll::TypedStorage<1, 1, bool> mShowScreen;
    ::ll::TypedStorage<1, 1, bool> mSubmitFeedbackInProgress;
    ::ll::TypedStorage<4, 4, int> mFeedbackTextLimit;
    ::ll::TypedStorage<8, 24, std::string> mResponseMsg;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdate;
    ::ll::TypedStorage<4, 4, uint> mResponseCode;
    ::ll::TypedStorage<8, 24, std::string> mIdentifier;
    ::ll::TypedStorage<8, 24, std::string> mFeedbackText;
    ::ll::UntypedStorage<4, 16> mFeedbackType;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SubmitFeedbackScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SubmitFeedbackScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    SubmitFeedbackScreenController(std::shared_ptr<MainMenuScreenModel>, ::FeedbackType, std::string const&, int);

    MCNAPI void _displayResponseStatusDialog(bool);

    MCNAPI void _setResponseMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>, ::FeedbackType, std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $addStaticScreenVars(::Json::Value&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

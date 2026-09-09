#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Progress { class ProgressTips; }
// clang-format on

class AuthLoadingMessages {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>            mProgressTips;
    ::ll::TypedStorage<8, 24, std::string> mCurrentMessage;
    ::ll::TypedStorage<8, 8, long>         mUpdateTime;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthLoadingMessages();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void update();

    MCNAPI ~AuthLoadingMessages();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Progress::ProgressTips>> mProgressTips;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mCurrentMessage;
    ::ll::TypedStorage<8, 8, int64>                                                    mUpdateTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void update();
    // NOLINTEND
};
#else // @header-generator platform
class AuthLoadingMessages {};
#endif // @header-generator platform
#endif // @header-generator platform

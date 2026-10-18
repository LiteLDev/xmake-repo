#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"

struct ActiveDirectoryModalArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mTitleText;
    ::ll::TypedStorage<8, 24, std::string> mBodyText;
    ::ll::TypedStorage<8, 24, std::string> mConfirmButtonText;
    ::ll::TypedStorage<8, 24, std::string> mCancelButtonText;
    ::ll::UntypedStorage<8, 48>            mOnComplete;
    // NOLINTEND

public:
    // prevent constructor by default
    ActiveDirectoryModalArgs& operator=(ActiveDirectoryModalArgs const&);
    ActiveDirectoryModalArgs(ActiveDirectoryModalArgs const&);
    ActiveDirectoryModalArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActiveDirectoryModalArgs();
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
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"

struct ActiveDirectoryModalArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                mTitleText;
    ::ll::TypedStorage<8, 32, ::std::string>                                mBodyText;
    ::ll::TypedStorage<8, 32, ::std::string>                                mConfirmButtonText;
    ::ll::TypedStorage<8, 32, ::std::string>                                mCancelButtonText;
    ::ll::TypedStorage<8, 64, ::std::function<void(::ModalScreenButtonId)>> mOnComplete;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActiveDirectoryModalArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ActiveDirectoryModalArgs {};
#endif // @header-generator platform
#endif // @header-generator platform

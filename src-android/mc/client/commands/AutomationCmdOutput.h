#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class AutomationCmdOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>              mUUID;
    ::ll::UntypedStorage<8, 16>                         mJsonOutput;
    ::ll::TypedStorage<1, 1, bool>                      mContainsErrors;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mErrorMessages;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AutomationCmdOutput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

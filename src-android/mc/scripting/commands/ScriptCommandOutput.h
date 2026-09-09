#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptCommandOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          mSuccessCount;
    ::ll::TypedStorage<8, 24, std::string> mMessages;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptCommandOutput();

    MCNAPI std::string getMessages() const;

    MCNAPI int getSuccessCount() const;

    MCNAPI void setOutput(int, std::string&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

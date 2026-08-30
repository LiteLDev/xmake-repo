#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/OverloadSyntaxInformation.h"

struct CommandSyntaxInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    isValid;
    ::ll::TypedStorage<8, 24, std::string>                            description;
    ::ll::TypedStorage<8, 24, std::vector<OverloadSyntaxInformation>> possibilities;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandSyntaxInformation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

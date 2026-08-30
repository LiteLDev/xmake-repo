#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Debug {

class TrackedDebugDataSource {
public:
    // TrackedDebugDataSource inner types declare
    // clang-format off
    struct StackRecord;
    // clang-format on

    // TrackedDebugDataSource inner types define
    struct StackRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<ulong>>       mStackCapture;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mSymbolicatedStack;
        // NOLINTEND
    };
};

} // namespace Bedrock::Debug

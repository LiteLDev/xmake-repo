#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class OutputOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mPretty;
    ::ll::TypedStorage<4, 4, uint> mIndentAmount;
    ::ll::TypedStorage<1, 1, char> mIndentChar;
    // NOLINTEND
};

} // namespace Bedrock::JSONObject

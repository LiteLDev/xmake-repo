#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::DeviceIdErrorType {

struct ValidationFail {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mGuid;
    // NOLINTEND
};

} // namespace Bedrock::DeviceIdErrorType

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services {

struct ClientAssertion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mValue;
    // NOLINTEND
};

} // namespace Bedrock::Services

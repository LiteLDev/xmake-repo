#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ResultCode.h"
#include "mc/deps/puv/Logger.h"

namespace LoadResultHelpers {

struct ContentLogOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::cereal::ResultCode>                                     parseMask;
    ::ll::UntypedStorage<1, 1>                                                         upgradeMask;
    ::ll::UntypedStorage<1, 1>                                                         validationMask;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<cereal::ResultCode, std::string>>> parseFormats;
    ::ll::UntypedStorage<8, 24>                                                        upgradeFormats;
    ::ll::UntypedStorage<8, 24>                                                        validationFormats;
    // NOLINTEND
};

} // namespace LoadResultHelpers

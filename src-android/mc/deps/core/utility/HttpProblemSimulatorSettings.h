#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace Bedrock::Http {

class HttpProblemSimulatorSettings : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 144>                                                          mSettingsMutex;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mDelay;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                   mUrlSubstringBlockers;
    // NOLINTEND
};

} // namespace Bedrock::Http

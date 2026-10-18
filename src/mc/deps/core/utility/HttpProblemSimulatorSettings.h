#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace Bedrock::Http {

class HttpProblemSimulatorSettings : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 144>                                                          mSettingsMutex;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mDelay;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                                   mUrlSubstringBlockers;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk932093;
    ::ll::UntypedStorage<8, 8>  mUnkc2b700;
    ::ll::UntypedStorage<8, 24> mUnk36759a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    HttpProblemSimulatorSettings& operator=(HttpProblemSimulatorSettings const&);
    HttpProblemSimulatorSettings(HttpProblemSimulatorSettings const&);
    HttpProblemSimulatorSettings();
#endif // @header-generator platform
};

} // namespace Bedrock::Http

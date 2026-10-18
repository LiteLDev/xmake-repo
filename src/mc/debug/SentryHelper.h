#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct PlatformRuntimeInfo; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class SentryHelper {
public:
    // SentryHelper inner types declare
    // clang-format off
    struct SentryParameters;
    // clang-format on

    // SentryHelper inner types define
    struct SentryParameters {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                        mRelease;
        ::ll::TypedStorage<8, 24, std::map<std::string, std::string>> mTags;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk5bfba7;
        ::ll::UntypedStorage<8, 16> mUnk140301;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        SentryParameters& operator=(SentryParameters const&);
        SentryParameters(SentryParameters const&);
        SentryParameters();
#endif // @header-generator platform
    };
};

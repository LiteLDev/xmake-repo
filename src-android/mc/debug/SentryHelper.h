#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct PlatformRuntimeInfo; }
// clang-format on

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
        ::ll::TypedStorage<8, 24, std::string>                        mRelease;
        ::ll::TypedStorage<8, 24, std::map<std::string, std::string>> mTags;
        // NOLINTEND
    };
};

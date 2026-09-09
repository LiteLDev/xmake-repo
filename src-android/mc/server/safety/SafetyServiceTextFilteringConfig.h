#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/discovery/DiscoveryConfig.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Safety {

struct SafetyServiceTextFilteringConfig {
public:
    // SafetyServiceTextFilteringConfig inner types declare
    // clang-format off
    struct FloodingThresholds;
    // clang-format on

    // SafetyServiceTextFilteringConfig inner types define
    struct FloodingThresholds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mSuppress;
        ::ll::TypedStorage<4, 4, float> mKick;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Bedrock::Services::DiscoveryConfig>                           mDiscoveryConfig;
    ::ll::TypedStorage<4, 8, ::Safety::SafetyServiceTextFilteringConfig::FloodingThresholds> mFloodingThresholds;
    ::ll::TypedStorage<4, 4, int>                                                            mMaxBootCheckRetryAttempts;
    ::ll::TypedStorage<4, 4, int>                                                            mSlashCommandCacheSize;
    ::ll::TypedStorage<1, 1, bool>                                                           mFailOpen;
    ::ll::TypedStorage<1, 1, bool>                                                           mLogVerbose;
    ::ll::TypedStorage<1, 1, bool>                                                           mPerformBootCheck;
    ::ll::TypedStorage<8, 24, std::string>                                                   mOriginOverride;
    ::ll::TypedStorage<8, 24, std::string>                                                   mAreaOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    SafetyServiceTextFilteringConfig& operator=(SafetyServiceTextFilteringConfig const&);
    SafetyServiceTextFilteringConfig(SafetyServiceTextFilteringConfig const&);
    SafetyServiceTextFilteringConfig();
};

} // namespace Safety

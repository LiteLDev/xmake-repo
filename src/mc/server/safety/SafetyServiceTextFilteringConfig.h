#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/network/services/discovery/DiscoveryConfig.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, float> mSuppress;
        ::ll::TypedStorage<4, 4, float> mKick;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnkcdbf3f;
        ::ll::UntypedStorage<4, 4> mUnk6edeb3;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        FloodingThresholds& operator=(FloodingThresholds const&);
        FloodingThresholds(FloodingThresholds const&);
        FloodingThresholds();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, ::Bedrock::Services::DiscoveryConfig>                           mDiscoveryConfig;
    ::ll::TypedStorage<4, 8, ::Safety::SafetyServiceTextFilteringConfig::FloodingThresholds> mFloodingThresholds;
    ::ll::TypedStorage<4, 4, int>                                                            mMaxBootCheckRetryAttempts;
    ::ll::TypedStorage<4, 4, int>                                                            mSlashCommandCacheSize;
    ::ll::TypedStorage<1, 1, bool>                                                           mFailOpen;
    ::ll::TypedStorage<1, 1, bool>                                                           mLogVerbose;
    ::ll::TypedStorage<1, 1, bool>                                                           mPerformBootCheck;
    ::ll::TypedStorage<8, 24, std::string>                                                   mOriginOverride;
    ::ll::TypedStorage<8, 24, std::string>                                                   mAreaOverride;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>  mUnkca2fbe;
    ::ll::UntypedStorage<4, 8>  mUnkf9977a;
    ::ll::UntypedStorage<4, 4>  mUnk3d5624;
    ::ll::UntypedStorage<4, 4>  mUnk7b6c8c;
    ::ll::UntypedStorage<1, 1>  mUnk4d356a;
    ::ll::UntypedStorage<1, 1>  mUnkc7694c;
    ::ll::UntypedStorage<1, 1>  mUnkd827fc;
    ::ll::UntypedStorage<8, 32> mUnkea80d7;
    ::ll::UntypedStorage<8, 32> mUnkb7ca54;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    SafetyServiceTextFilteringConfig& operator=(SafetyServiceTextFilteringConfig const&);
    SafetyServiceTextFilteringConfig();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    SafetyServiceTextFilteringConfig& operator=(SafetyServiceTextFilteringConfig const&);
    SafetyServiceTextFilteringConfig(SafetyServiceTextFilteringConfig const&);
    SafetyServiceTextFilteringConfig();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI SafetyServiceTextFilteringConfig(::Safety::SafetyServiceTextFilteringConfig const&);

    MCNAPI ::Safety::SafetyServiceTextFilteringConfig& operator=(::Safety::SafetyServiceTextFilteringConfig&&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SafetyServiceTextFilteringConfig& operator=(SafetyServiceTextFilteringConfig const&);
    SafetyServiceTextFilteringConfig(SafetyServiceTextFilteringConfig const&);
    SafetyServiceTextFilteringConfig();
#else // @header-generator platform
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::Safety::SafetyServiceTextFilteringConfig
    deprecated_createConfigFromJson(::std::string const& configJson);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Safety::SafetyServiceTextFilteringConfig const&);
#endif
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace Safety

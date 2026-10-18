#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/PlatformConfiguration.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class PlatformConfigurationLoader {
public:
    // PlatformConfigurationLoader inner types declare
    // clang-format off
    struct PlatformConfigurationContainer;
    // clang-format on

    // PlatformConfigurationLoader inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class PlatformConfigStringsEnum : int {
        android         = 0,
        nintendoSwitch  = 1,
        nintendoSwitch2 = 2,
        xboxOneS        = 3,
        xboxOneX        = 4,
        xboxOne         = 5,
        ps4             = 6,
        ps4Pro          = 7,
        ps5emu          = 8,
        ps5             = 9,
        ps5Pro          = 10,
        ios             = 11,
        xboxSeriesS     = 12,
        xboxSeriesX     = 13,
        pc              = 14,
        count           = 15,
    };
#else // @header-generator platform
    enum class PlatformConfigStringsEnum : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct PlatformConfigurationContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 7696, ::PlatformConfiguration> mPlatformConfiguration;
        // NOLINTEND
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindTypes(::cereal::ReflectionCtx&, ::PlatformConfigurationLoader::PlatformConfigStringsEnum);

    MCNAPI static ::PlatformConfigurationLoader::PlatformConfigStringsEnum getPlatformEnum();

    MCNAPI static void unbindTypes(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<std::string const[]> mPlatformConfigStrings();
    // NOLINTEND
#else // @header-generator platform
    struct PlatformConfigurationContainer {};
#endif // @header-generator platform
};

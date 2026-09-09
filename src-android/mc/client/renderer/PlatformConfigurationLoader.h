#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/PlatformConfiguration.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PlatformConfigurationLoader {
public:
    // PlatformConfigurationLoader inner types declare
    // clang-format off
    struct PlatformConfigurationContainer;
    // clang-format on

    // PlatformConfigurationLoader inner types define
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
};

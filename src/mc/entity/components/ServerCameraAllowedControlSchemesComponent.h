#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/camera/controlscheme/Scheme.h"

struct ServerCameraAllowedControlSchemesComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string_view, std::vector<ControlScheme::Scheme>>> mAllowedSchemes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string_view, ::std::vector<::ControlScheme::Scheme>>>
        mAllowedSchemes;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ServerCameraAllowedControlSchemesComponent& operator=(ServerCameraAllowedControlSchemesComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

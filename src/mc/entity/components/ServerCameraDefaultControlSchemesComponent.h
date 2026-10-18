#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/camera/controlscheme/Scheme.h"

struct ServerCameraDefaultControlSchemesComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string_view, ControlScheme::Scheme>> mDefaultSchemes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string_view, ::ControlScheme::Scheme>> mDefaultSchemes;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ServerCameraDefaultControlSchemesComponent& operator=(ServerCameraDefaultControlSchemesComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

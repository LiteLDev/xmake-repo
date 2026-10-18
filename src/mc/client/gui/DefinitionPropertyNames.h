#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ControlPropertyNames.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ControlPropertyNames.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace UI::Resources {

#if defined(LL_PLAT_A) // @header-generator platform
struct DefinitionPropertyNames {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>                     defName;
    ::ll::TypedStorage<8, 24, std::string const>                     defNamespace;
    ::ll::TypedStorage<8, 24, std::vector<std::string> const>        defTextures;
    ::ll::TypedStorage<8, 24, std::vector<std::string> const>        defProperties;
    ::ll::TypedStorage<8, 48, ::UI::Resources::ControlPropertyNames> defControls;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DefinitionPropertyNames {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>                   defName;
    ::ll::TypedStorage<8, 32, ::std::string const>                   defNamespace;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const>    defTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const>    defProperties;
    ::ll::TypedStorage<8, 48, ::UI::Resources::ControlPropertyNames> defControls;
    // NOLINTEND
};
#else // @header-generator platform
struct DefinitionPropertyNames {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace UI::Resources

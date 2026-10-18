#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IPersonaRepository;
class IResourcePackRepository;
class ISkinRepository;
class IWorldTemplateManager;
class ResourceLoadManager;
class ResourcePackManager;
// clang-format on

struct ImportModeValidatorDeps {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>      packManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>  packRepository;
    ::ll::TypedStorage<8, 8, ::IPersonaRepository const&> personaRepository;
    ::ll::TypedStorage<8, 8, ::ResourceLoadManager&>      resourceLoadManager;
    ::ll::TypedStorage<8, 8, ::IWorldTemplateManager&>    templateManager;
    ::ll::TypedStorage<8, 8, ::ISkinRepository&>          skinRepository;
    // NOLINTEND

public:
    // prevent constructor by default
    ImportModeValidatorDeps& operator=(ImportModeValidatorDeps const&);
    ImportModeValidatorDeps(ImportModeValidatorDeps const&);
    ImportModeValidatorDeps();
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

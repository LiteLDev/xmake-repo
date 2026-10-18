#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AtomicClientEntityDefinition;
class AtomicClientEntityDefinitionFactory;
#else // @header-generator platform
#endif // @header-generator platform
class IMinecraftEventing;
#if defined(LL_PLAT_A) // @header-generator platform
class PackInstance;
#else // @header-generator platform
#endif // @header-generator platform
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class Path; }
namespace PuvLoadData { struct TelemetryEventData; }
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class AtomicClientEntityDefinitionGroup {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<AtomicClientEntityDefinition>>> mDefinitions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AtomicClientEntityDefinitionFactory>> mDefinitionFactory;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkbd866c;
    ::ll::UntypedStorage<8, 8>  mUnkf5cc98;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AtomicClientEntityDefinitionGroup& operator=(AtomicClientEntityDefinitionGroup const&);
    AtomicClientEntityDefinitionGroup(AtomicClientEntityDefinitionGroup const&);
    AtomicClientEntityDefinitionGroup();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadDefinitionsFromResourcePacks(::ResourcePackManager&, ::IMinecraftEventing&);

    MCNAPI ~AtomicClientEntityDefinitionGroup();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void
    loadDefinitionsFromResourcePacks(::ResourcePackManager& resourcePackManager, ::IMinecraftEventing& eventing);

    MCNAPI ~AtomicClientEntityDefinitionGroup();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AtomicClientEntityDefinition;
class AtomicClientEntityDefinitionFactory;
class IMinecraftEventing;
class PackInstance;
class ResourcePackManager;
namespace Core { class Path; }
namespace PuvLoadData { struct TelemetryEventData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class AtomicClientEntityDefinitionGroup {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<AtomicClientEntityDefinition>>> mDefinitions;
    ::ll::TypedStorage<8, 8, std::unique_ptr<AtomicClientEntityDefinitionFactory>> mDefinitionFactory;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void loadDefinitionsFromResourcePacks(::ResourcePackManager&, ::IMinecraftEventing&);

    MCNAPI ~AtomicClientEntityDefinitionGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

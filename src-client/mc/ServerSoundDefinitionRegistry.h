#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ServerSoundRuntime__Definition.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
namespace SharedTypes::Beta::Sound { struct ServerSoundDefinitionDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ServerSoundDefinitionRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mDefinitions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void forEachDefinition(::brstd::function_ref<void(const ServerSoundRuntime::Definition&)>) const;

    MCNAPI void loadFromPacks(::cereal::ReflectionCtx const&, ::ResourcePackManager const&, bool);

    MCNAPI ::Bedrock::NonOwnerPointer<const ServerSoundRuntime::Definition> tryGet(std::string const&) const;

    MCNAPI ~ServerSoundDefinitionRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

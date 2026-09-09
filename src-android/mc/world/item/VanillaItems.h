#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockDefinitionGroup;
class CreativeItemRegistry;
class Experiments;
class IMinecraftEventing;
class ItemRegistryRef;
class LinkedAssetValidator;
class ResourcePackManager;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VanillaItems {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    applyHardcodedLegacyIconsClient(::ItemRegistryRef const, ::BaseGameVersion const&, ::Experiments const&);

    MCNAPI static void registerHardCodedItemTags(::ItemRegistryRef const);

    MCNAPI static void
    registerItems(::cereal::ReflectionCtx&, ::ItemRegistryRef const, ::BaseGameVersion const&, ::Experiments const&);

    MCNAPI static void serverInitCreativeItemsCallback(
        ::ItemRegistryRef,
        ::BlockDefinitionGroup const&,
        ::CreativeItemRegistry*,
        ::BaseGameVersion const&,
        ::Experiments const&,
        ::ResourcePackManager const&,
        ::cereal::ReflectionCtx const&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator> const,
        ::IMinecraftEventing&
    );
    // NOLINTEND
};

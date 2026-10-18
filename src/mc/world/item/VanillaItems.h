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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    applyHardcodedLegacyIconsClient(::ItemRegistryRef const, ::BaseGameVersion const&, ::Experiments const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void applyHardcodedLegacyIconsClient(
        ::ItemRegistryRef        itemRegistry,
        ::BaseGameVersion const& baseGameVersion,
        ::Experiments const&     experiments
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void registerHardCodedItemTags(::ItemRegistryRef const);
#else // @header-generator platform
    MCAPI static void registerHardCodedItemTags(::ItemRegistryRef itemRegistry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    registerItems(::cereal::ReflectionCtx&, ::ItemRegistryRef const, ::BaseGameVersion const&, ::Experiments const&);
#else // @header-generator platform
    MCAPI static void registerItems(
        ::cereal::ReflectionCtx& ctx,
        ::ItemRegistryRef        itemRegistry,
        ::BaseGameVersion const& baseGameVersion,
        ::Experiments const&     experiments
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static void serverInitCreativeItemsCallback(
        ::ItemRegistryRef                                  itemRegistry,
        ::BlockDefinitionGroup const&                      blockDefinitionGroup,
        ::CreativeItemRegistry*                            creativeItemRegistry,
        ::BaseGameVersion const&                           worldVersion,
        ::Experiments const&                               experiments,
        ::ResourcePackManager const&                       resourcePackManager,
        ::cereal::ReflectionCtx const&                     ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator,
        ::IMinecraftEventing&                              eventing
#endif // @header-generator platform
    );
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/SharedPtr.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/puv/puv_load_data/LoadResultWithTiming.h"

// auto generated forward declare list
// clang-format off
class ActorInfoRegistry;
class BaseGameVersion;
class BlockDefinitionGroup;
class BlockPalette;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class CreativeContentPacket;
class CreativeItemRegistry;
class Experiments;
class HashedString;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
class IMinecraftEventing;
class Item;
class ItemInstance;
class ItemRegistry;
class LevelData;
class LinkedAssetValidator;
class ResourcePackManager;
class ServerScriptManager;
class TagUpdateToken;
struct ItemData;
struct ItemIconInfo;
struct ItemRegistryComplexAlias;
struct ItemTag;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemRegistryRef {
public:
    // ItemRegistryRef inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    class LockGuard;
#else // @header-generator platform
#endif // @header-generator platform
    struct LoadedItem;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class LockGuard;
#endif // @header-generator platform
    // clang-format on

    // ItemRegistryRef inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct LoadedItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::WeakPtr<::Item>>                    mItem;
        ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming> mTiming;
        // NOLINTEND
    };

#endif // @header-generator platform
    class LockGuard {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::shared_ptr<std::mutex>> mMutex;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Threading::Mutex>> mMutex;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        LockGuard();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~LockGuard();
#else // @header-generator platform
        MCAPI explicit LockGuard(::std::shared_ptr<::Bedrock::Threading::Mutex> mutex);

        MCAPI ~LockGuard();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::shared_ptr<::Bedrock::Threading::Mutex> mutex);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct LoadedItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>                                     mItem;
        ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming> mTiming;
        // NOLINTEND
    };
#else // @header-generator platform
    using CreativeItemsServerInitCallbackSignature = void(
        ::ItemRegistryRef,
        ::BlockDefinitionGroup const&,
        ::CreativeItemRegistry*,
        ::BaseGameVersion const&,
        ::Experiments const&,
        ::ResourcePackManager const&,
        ::cereal::ReflectionCtx const&,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> const,
        ::IMinecraftEventing&
    );
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<ItemRegistry>> mWeakRegistry;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ItemRegistry>> mWeakRegistry;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ItemRegistryRef& operator=(ItemRegistryRef const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemRegistryRef();
#else // @header-generator platform
    MCAPI void addItemToTagMap(::Item const& item) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemRegistryRef(std::weak_ptr<ItemRegistry>);
#else // @header-generator platform
    MCAPI ::TagUpdateToken allowTagUpdate() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ItemRegistry> _lockRegistry() const;
#else // @header-generator platform
    MCAPI void alterAvailableCreativeItems(::ActorInfoRegistry* infoRegistry, ::LevelData& levelData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addItemToTagMap(::Item const&) const;
#else // @header-generator platform
    MCAPI void bindDynamicScriptTypes(::ServerScriptManager& scripts) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TagUpdateToken allowTagUpdate() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void buildClientRegistryFromServer(
        ::std::vector<::ItemData> const& serverItemData,
        ::Experiments const&             experiments,
        ::BaseGameVersion const&         baseGameVersion
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void alterAvailableCreativeItems(::ActorInfoRegistry*, ::LevelData&) const;

    MCNAPI void bindDynamicScriptTypes(::ServerScriptManager&) const;

    MCNAPI void
    buildClientRegistryFromServer(std::vector<ItemData> const&, ::Experiments const&, ::BaseGameVersion const&) const;

    MCNAPI void buildServerRegistry(
        ::Experiments const&,
        ::BaseGameVersion const&,
        ::ResourcePackManager*,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        ::IMinecraftEventing&
#else // @header-generator platform
    MCAPI void buildServerRegistry(
        ::Experiments const&                               experiments,
        ::BaseGameVersion const&                           baseGameVersion,
        ::ResourcePackManager*                             rpm,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator,
        ::IMinecraftEventing&                              eventing
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canUpdateTags() const;
#else // @header-generator platform
    MCAPI bool canUpdateTags() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<const cereal::ReflectionCtx> cerealContext() const;
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::cereal::ReflectionCtx const> cerealContext() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearDeadItemRegistry() const;
#else // @header-generator platform
    MCAPI void clearDeadItemRegistry() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void findAllAttachableDefinitions() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void findAllAttachableDefinitions() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::reference_wrapper<const HashedString>> const&
           getComplexAliasSplitNames(::HashedString const&) const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::reference_wrapper<::HashedString const>> const&
    getComplexAliasSplitNames(::HashedString const& oldName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<CreativeItemRegistry> getCreativeItemRegistry();
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::CreativeItemRegistry const> getCreativeItemRegistry() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::NonOwnerPointer<const CreativeItemRegistry> getCreativeItemRegistry() const;
#else // @header-generator platform
    MCAPI ::Bedrock::NonOwnerPointer<::CreativeItemRegistry> getCreativeItemRegistry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<Item> getItem(short const) const;
#else // @header-generator platform
    MCFOLD ::WeakPtr<::Item> getItem(::HashedString const& id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<Item> getItem(::HashedString const&) const;
#else // @header-generator platform
    MCAPI ::WeakPtr<::Item> getItem(short itemId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getItemCount() const;
#else // @header-generator platform
    MCAPI int getItemCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getMaxItemID() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI uint getMaxItemID() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString getNameFromLegacyID(short) const;
#else // @header-generator platform
    MCAPI ::HashedString getNameFromLegacyID(short id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<HashedString, WeakPtr<Item>> const& getNameToItemMap() const;
#else // @header-generator platform
    MCAPI ::std::unordered_map<::HashedString, ::WeakPtr<::Item>> const& getNameToItemMap() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BaseGameVersion getWorldBaseGameVersion() const;
#else // @header-generator platform
    MCAPI ::BaseGameVersion getWorldBaseGameVersion() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initCreativeItemsClient(::CreativeContentPacket const&, ::BlockPalette const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void initCreativeItemsClient(
        ::CreativeContentPacket const& creativeContentPacket,
        ::BlockPalette const&          blockPalette
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initCreativeItemsServer(
        ::BlockDefinitionGroup const&,
        ::Experiments const&,
        ::ResourcePackManager const&,
        ::Bedrock::NonOwnerPointer<LinkedAssetValidator>,
        ::IMinecraftEventing&,
        std::function<void(
            ItemRegistryRef,
            const BlockDefinitionGroup&,
            CreativeItemRegistry*,
            const BaseGameVersion&,
            const Experiments&,
            const ResourcePackManager&,
            const cereal::ReflectionCtx&,
            Bedrock::NonOwnerPointer<LinkedAssetValidator>,
            IMinecraftEventing&
        )>
#else // @header-generator platform
    MCAPI void initCreativeItemsServer(
        ::BlockDefinitionGroup const&                      blockDefinitionGroup,
        ::Experiments const&                               experiment,
        ::ResourcePackManager const&                       resourcePackManager,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator,
        ::IMinecraftEventing&                              eventing,
        ::std::function<void(
            ::ItemRegistryRef,
            ::BlockDefinitionGroup const&,
            ::CreativeItemRegistry*,
            ::BaseGameVersion const&,
            ::Experiments const&,
            ::ResourcePackManager const&,
            ::cereal::ReflectionCtx const&,
            ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>,
            ::IMinecraftEventing&
        )>                                                 registerCallback
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isComplexAlias(::HashedString const&) const;
#else // @header-generator platform
    MCAPI bool isComplexAlias(::HashedString const& oldName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isCreativeItem(::ItemInstance const&) const;
#else // @header-generator platform
    MCAPI bool isCreativeItem(::ItemInstance const& itemInstance) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isRegistryInitialized() const;
#else // @header-generator platform
    MCAPI bool isRegistryInitialized() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isServerInitializingCreativeItems() const;
#else // @header-generator platform
    MCAPI bool isServerInitializingCreativeItems() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isValid() const;
#else // @header-generator platform
    MCAPI ::ItemRegistryRef::LockGuard lockItemWorldCompatibilityMutex() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemRegistryRef::LockGuard lockItemWorldCompatibilityMutex() const;
#else // @header-generator platform
    MCAPI ::WeakPtr<::Item> lookupByName(::HashedString const& inString) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<Item> lookupByName(::HashedString const&) const;
#else // @header-generator platform
    MCAPI ::WeakPtr<::Item> lookupByName(int& outItemAux, ::std::string_view inString) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<Item> lookupByName(int&, std::string_view) const;
#else // @header-generator platform
    MCAPI ::WeakPtr<::Item> lookupByName(int& outItemId, int& outItemAux, ::std::string_view inString) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<Item> lookupByName(int&, int&, std::string_view) const;
#else // @header-generator platform
    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::HashedString const& inString) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<Item> lookupByNameNoAlias(::HashedString const&) const;
#else // @header-generator platform
    MCAPI ::WeakPtr<::Item> lookupByNameNoAlias(::std::string_view inString) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<Item> lookupByNameNoAlias(std::string_view) const;
#else // @header-generator platform
    MCAPI ::WeakPtr<::Item> lookupByNameNoParsing(int& inOutItemAux, ::HashedString const& fullName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<Item> lookupByNameNoParsing(int&, ::HashedString const&) const;
#else // @header-generator platform
    MCAPI ::std::unordered_set<::Item const*> lookupByTag(::ItemTag const& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_set<const Item*> lookupByTag(::ItemTag const&) const;
#else // @header-generator platform
    MCFOLD ::WeakPtr<::Item> lookupByVanillaName(::HashedString const& inString) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<Item> lookupByVanillaName(::HashedString const&) const;
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void()>* onFinishedInitServer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void()>* onFinishedInitServer() const;

    MCNAPI void onLevelInit(
        ::WeakRef<IDynamicContainerSerialization>,
        ::WeakRef<IContainerRegistryAccess>,
        ::WeakRef<IContainerRegistryTracker>
#else // @header-generator platform
    MCAPI void onLevelInit(
        ::WeakRef<::IDynamicContainerSerialization> containerSerialization,
        ::WeakRef<::IContainerRegistryAccess>       containerAccess,
        ::WeakRef<::IContainerRegistryTracker>      containerTracker
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void populateClientItemData(
        ::ResourcePackManager&,
        ::Experiments const&,
        std::optional<ItemIconInfo> (*)(std::string const&, int)
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void populateClientItemData(
        ::ResourcePackManager& packManager,
        ::Experiments const&   experiments,
        ::std::optional<::ItemIconInfo> (*iconFactory)(::std::string const&, int)
    ) const;
#endif

    MCAPI void
    registerAlias(::HashedString const& alias, ::HashedString const& name, ::BaseGameVersion const& fromVersion) const;

    MCAPI ::WeakPtr<::Item>
    registerComplexAlias(::HashedString const& alias, ::ItemRegistryComplexAlias const& complexAlias) const;

    MCAPI void registerExtraItemInitCallback(::std::function<void(::ItemRegistryRef)> callback) const;

    MCAPI void registerLegacyID(::HashedString const& name, short id) const;

    MCAPI void registerLegacyMapping(
        ::HashedString const&    alias,
        ::HashedString const&    name,
        ::BaseGameVersion const& fromVersion
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerAlias(::HashedString const&, ::HashedString const&, ::BaseGameVersion const&) const;
#else // @header-generator platform
    MCAPI uint64 remapToFullLegacyNameByHash(uint64 newHash) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::WeakPtr<Item> registerComplexAlias(::HashedString const&, ::ItemRegistryComplexAlias const&) const;
#else // @header-generator platform
    MCAPI uint64 remapToLegacyNameByHash(uint64 newHash) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerExtraItemInitCallback(std::function<void(ItemRegistryRef)>) const;
#else // @header-generator platform
    MCAPI void setCheckForItemWorldCompatibility(bool value) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerLegacyID(::HashedString const&, short) const;
#else // @header-generator platform
    MCAPI void setServerInitializingCreativeItems(bool value) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerLegacyMapping(::HashedString const&, ::HashedString const&, ::BaseGameVersion const&) const;
#else // @header-generator platform
    MCAPI bool shouldCheckForItemWorldCompatibility() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong remapToFullLegacyNameByHash(ulong const) const;
#else // @header-generator platform
    MCAPI void shutdown() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong remapToLegacyNameByHash(ulong const) const;
#else // @header-generator platform
    MCAPI void unregisterItem(::HashedString const& itemName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setCheckForItemWorldCompatibility(bool) const;

    MCNAPI void setServerInitializingCreativeItems(bool) const;

    MCNAPI bool shouldCheckForItemWorldCompatibility() const;

    MCNAPI void shutdown() const;

    MCNAPI void unregisterItem(::HashedString const&) const;

    MCNAPI std::vector<std::string> validateServerItemComponents(std::vector<ItemData> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::weak_ptr<ItemRegistry>);
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> validateServerItemComponents(::std::vector<::ItemData> const& itemData);
#endif // @header-generator platform
    // NOLINTEND
};

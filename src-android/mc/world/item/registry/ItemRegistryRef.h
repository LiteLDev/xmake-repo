#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
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
class CompoundTag;
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
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ItemRegistryRef {
public:
    // ItemRegistryRef inner types declare
    // clang-format off
    class LockGuard;
    struct LoadedItem;
    // clang-format on

    // ItemRegistryRef inner types define
    class LockGuard {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::shared_ptr<std::mutex>> mMutex;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LockGuard();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct LoadedItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>                                     mItem;
        ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming> mTiming;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<ItemRegistry>> mWeakRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemRegistryRef& operator=(ItemRegistryRef const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemRegistryRef();

    MCNAPI explicit ItemRegistryRef(std::weak_ptr<ItemRegistry>);

    MCNAPI std::shared_ptr<ItemRegistry> _lockRegistry() const;

    MCNAPI void addItemToTagMap(::Item const&) const;

    MCNAPI ::TagUpdateToken allowTagUpdate() const;

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
    ) const;

    MCNAPI bool canUpdateTags() const;

    MCNAPI ::Bedrock::NonOwnerPointer<const cereal::ReflectionCtx> cerealContext() const;

    MCNAPI void clearDeadItemRegistry() const;

    MCNAPI void findAllAttachableDefinitions() const;

    MCNAPI std::vector<std::reference_wrapper<const HashedString>> const&
           getComplexAliasSplitNames(::HashedString const&) const;

    MCNAPI ::Bedrock::NonOwnerPointer<CreativeItemRegistry> getCreativeItemRegistry();

    MCNAPI ::Bedrock::NonOwnerPointer<const CreativeItemRegistry> getCreativeItemRegistry() const;

    MCNAPI ::WeakPtr<Item> getItem(short const) const;

    MCNAPI ::WeakPtr<Item> getItem(::HashedString const&) const;

    MCNAPI int getItemCount() const;

    MCNAPI uint getMaxItemID() const;

    MCNAPI ::HashedString getNameFromLegacyID(short) const;

    MCNAPI std::unordered_map<HashedString, WeakPtr<Item>> const& getNameToItemMap() const;

    MCNAPI ::BaseGameVersion getWorldBaseGameVersion() const;

    MCNAPI void initCreativeItemsClient(::CreativeContentPacket const&, ::BlockPalette const&) const;

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
    ) const;

    MCNAPI bool isComplexAlias(::HashedString const&) const;

    MCNAPI bool isCreativeItem(::ItemInstance const&) const;

    MCNAPI bool isRegistryInitialized() const;

    MCNAPI bool isServerInitializingCreativeItems() const;

    MCNAPI bool isValid() const;

    MCNAPI ::ItemRegistryRef::LockGuard lockItemWorldCompatibilityMutex() const;

    MCNAPI ::WeakPtr<Item> lookupByName(::HashedString const&) const;

    MCNAPI ::WeakPtr<Item> lookupByName(int&, std::string_view) const;

    MCNAPI ::WeakPtr<Item> lookupByName(int&, int&, std::string_view) const;

    MCNAPI ::WeakPtr<Item> lookupByNameNoAlias(::HashedString const&) const;

    MCNAPI ::WeakPtr<Item> lookupByNameNoAlias(std::string_view) const;

    MCNAPI ::WeakPtr<Item> lookupByNameNoParsing(int&, ::HashedString const&) const;

    MCNAPI std::unordered_set<const Item*> lookupByTag(::ItemTag const&) const;

    MCNAPI ::WeakPtr<Item> lookupByVanillaName(::HashedString const&) const;

    MCNAPI ::Bedrock::PubSub::Connector<void()>* onFinishedInitServer() const;

    MCNAPI void onLevelInit(
        ::WeakRef<IDynamicContainerSerialization>,
        ::WeakRef<IContainerRegistryAccess>,
        ::WeakRef<IContainerRegistryTracker>
    ) const;

    MCNAPI void populateClientItemData(
        ::ResourcePackManager&,
        ::Experiments const&,
        std::optional<ItemIconInfo> (*)(std::string const&, int)
    ) const;

    MCNAPI void registerAlias(::HashedString const&, ::HashedString const&, ::BaseGameVersion const&) const;

    MCNAPI ::WeakPtr<Item> registerComplexAlias(::HashedString const&, ::ItemRegistryComplexAlias const&) const;

    MCNAPI void registerExtraItemInitCallback(std::function<void(ItemRegistryRef)>) const;

    MCNAPI void registerLegacyID(::HashedString const&, short) const;

    MCNAPI void registerLegacyMapping(::HashedString const&, ::HashedString const&, ::BaseGameVersion const&) const;

    MCNAPI ulong remapToFullLegacyNameByHash(ulong const) const;

    MCNAPI ulong remapToLegacyNameByHash(ulong const) const;

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
    // NOLINTEND
};

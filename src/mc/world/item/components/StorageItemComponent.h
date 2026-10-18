#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
#if defined(LL_PLAT_A) // @header-generator platform
class DynamicContainerTracker;
class FillingContainer;
#else // @header-generator platform
#endif // @header-generator platform
class HashedString;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemDescriptor;
#endif // @header-generator platform
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class ListTag;
#else // @header-generator platform
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class SaveContext;
#else // @header-generator platform
#endif // @header-generator platform
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
struct FullContainerName;
#else // @header-generator platform
#endif // @header-generator platform
struct ItemOnUseResult;
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_21_60 { struct StorageItemComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class StorageItemComponent : public ::NetworkedItemComponent<StorageItemComponent> {
#else // @header-generator platform
class StorageItemComponent : public ::NetworkedItemComponent<::StorageItemComponent> {
#endif // @header-generator platform
public:
    // StorageItemComponent inner types declare
    // clang-format off
    class ContainerRegistryWriteAccess;
    // clang-format on

    // StorageItemComponent inner types define
    class ContainerRegistryWriteAccess {};

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                              mNumSlots;
    ::ll::TypedStorage<1, 1, bool>                             mAllowNestedStorageItem;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>     mBannedItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>     mAllowedItems;
    ::ll::UntypedStorage<1, 16>                                mContainerSerialization;
    ::ll::UntypedStorage<1, 16>                                mContainerRegistryAccess;
    ::ll::UntypedStorage<1, 16>                                mContainerRegistryTracker;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseSubscription;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                          mNumSlots;
    ::ll::TypedStorage<1, 1, bool>                                         mAllowNestedStorageItem;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>             mBannedItems;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>>             mAllowedItems;
    ::ll::TypedStorage<8, 16, ::WeakRef<::IDynamicContainerSerialization>> mContainerSerialization;
    ::ll::TypedStorage<8, 16, ::WeakRef<::IContainerRegistryAccess>>       mContainerRegistryAccess;
    ::ll::TypedStorage<8, 16, ::WeakRef<::IContainerRegistryTracker>>      mContainerRegistryTracker;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mOnUseSubscription;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StorageItemComponent& operator=(StorageItemComponent const&);
    StorageItemComponent(StorageItemComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    StorageItemComponent();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StorageItemComponent();
#else // @header-generator platform
    virtual void _initializeComponent(::ComponentItem& owner) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _initializeComponent(::ComponentItem&);
#else // @header-generator platform
    virtual ~StorageItemComponent() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit StorageItemComponent(::SharedTypes::v1_21_60::StorageItemComponent const&);
#else // @header-generator platform
    MCAPI ::StorageItemComponent& operator=(::StorageItemComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<DynamicContainerTracker>
           createDynamicContainerTracker(::StorageItemComponent::ContainerRegistryWriteAccess) const;

    MCNAPI bool getAllowNestedStorageItem() const;

    MCNAPI std::vector<ItemDescriptor> const& getAllowedItems() const;

    MCNAPI std::shared_ptr<FillingContainer>
           getBackingContainer(::FullContainerName, ::StorageItemComponent::ContainerRegistryWriteAccess) const;

    MCNAPI std::vector<ItemDescriptor> const& getBannedItems() const;

    MCNAPI std::optional<int> getDynamicContainerWeight(::FullContainerName) const;

    MCNAPI int getNumSlot() const;

    MCNAPI std::unique_ptr<ListTag> serializeStorageItem(::FullContainerName const&, ::SaveContext const&) const;

    MCNAPI void setContainerRegistryHandlers(
        ::WeakRef<IDynamicContainerSerialization>,
        ::WeakRef<IContainerRegistryAccess>,
        ::WeakRef<IContainerRegistryTracker>
#else // @header-generator platform
    MCAPI void setContainerRegistryHandlers(
        ::WeakRef<::IDynamicContainerSerialization> containerSerialization,
        ::WeakRef<::IContainerRegistryAccess>       containerAccess,
        ::WeakRef<::IContainerRegistryTracker>      containerTracker
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::HashedString const& getIdentifier();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void use(::ItemOnUseResult&, ::ItemStack const&, ::Player&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_60::StorageItemComponent const&);
#else // @header-generator platform
    MCAPI static void use(::ItemOnUseResult& result, ::ItemStack const& item, ::Player& player);
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_initializeComponent(::ComponentItem&);
#else // @header-generator platform
    MCAPI void $_initializeComponent(::ComponentItem& owner);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

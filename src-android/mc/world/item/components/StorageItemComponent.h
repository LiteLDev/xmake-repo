#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class DynamicContainerTracker;
class FillingContainer;
class HashedString;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
class ItemStack;
class ListTag;
class Player;
class SaveContext;
class SemVersion;
struct FullContainerName;
struct ItemOnUseResult;
namespace SharedTypes::v1_21_60 { struct StorageItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class StorageItemComponent : public ::NetworkedItemComponent<StorageItemComponent> {
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
    ::ll::TypedStorage<4, 4, int>                              mNumSlots;
    ::ll::TypedStorage<1, 1, bool>                             mAllowNestedStorageItem;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>     mBannedItems;
    ::ll::TypedStorage<8, 24, std::vector<ItemDescriptor>>     mAllowedItems;
    ::ll::UntypedStorage<1, 16>                                mContainerSerialization;
    ::ll::UntypedStorage<1, 16>                                mContainerRegistryAccess;
    ::ll::UntypedStorage<1, 16>                                mContainerRegistryTracker;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnUseSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageItemComponent& operator=(StorageItemComponent const&);
    StorageItemComponent(StorageItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StorageItemComponent(::SharedTypes::v1_21_60::StorageItemComponent const&);

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
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();

    MCNAPI static void use(::ItemOnUseResult&, ::ItemStack const&, ::Player&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_60::StorageItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

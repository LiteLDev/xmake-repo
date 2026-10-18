#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
struct FullContainerName;
#else // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
#endif // @header-generator platform
// clang-format on

class HudContainerManagerModel : public ::ContainerManagerModel {
public:
    // HudContainerManagerModel inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ItemStackVector = std::vector<ItemStack>;
#else // @header-generator platform
    using DynamicContainerRemovalPublisher = ::Bedrock::PubSub::
        Publisher<void(::std::vector<::std::string> const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using DynamicContainerRemovalPublisher = ::Bedrock::PubSub::Publisher<
        void(const std::vector<std::string>&),
        Bedrock::PubSub::ThreadModel::MultiThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>;
#else // @header-generator platform
    using ItemStackVector = ::std::vector<::ItemStack>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mLastSlots;
    ::ll::UntypedStorage<8, 88>                       mOnDynamicContainerRemovalPublisher;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mLastSlots;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::std::vector<::std::string> const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnDynamicContainerRemovalPublisher;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    HudContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~HudContainerManagerModel();
#else // @header-generator platform
    virtual ~HudContainerManagerModel() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemStack> getItemCopies() const;
#else // @header-generator platform
    virtual ::std::vector<::ItemStack> getItemCopies() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSlot(int, ::ItemStack const&, bool);
#else // @header-generator platform
    virtual void setSlot(int slot, ::ItemStack const& item, bool) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getSlot(int) const;
#else // @header-generator platform
    virtual ::ItemStack const& getSlot(int slot) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setData(int, int);
#else // @header-generator platform
    virtual void setData(int id, int value) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void broadcastChanges();
#else // @header-generator platform
    virtual void broadcastChanges() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenContext _postInit();
#else // @header-generator platform
    virtual ::ContainerScreenContext _postInit() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI HudContainerManagerModel(::ContainerID, ::Player&);
#else // @header-generator platform
    MCAPI HudContainerManagerModel(::ContainerID containerId, ::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void cleanUpDynamicContainers();

    MCNAPI ::Bedrock::PubSub::Publisher<
        void(const std::vector<std::string>&),
        Bedrock::PubSub::ThreadModel::MultiThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>&
    getDynamicContainerRemovalConnector();

    MCNAPI void refreshHotbar();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void cleanUpDynamicContainers();

    MCAPI void refreshHotbar();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ContainerID, ::Player&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemStack> $getItemCopies() const;
#else // @header-generator platform
    MCFOLD ::std::vector<::ItemStack> $getItemCopies() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSlot(int, ::ItemStack const&, bool);
#else // @header-generator platform
    MCAPI void $setSlot(int slot, ::ItemStack const& item, bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getSlot(int) const;
#else // @header-generator platform
    MCAPI ::ItemStack const& $getSlot(int slot) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setData(int, int);
#else // @header-generator platform
    MCFOLD void $setData(int id, int value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastChanges();
#else // @header-generator platform
    MCAPI void $broadcastChanges();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenContext $_postInit();
#else // @header-generator platform
    MCAPI ::ContainerScreenContext $_postInit();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

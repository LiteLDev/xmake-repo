#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class Player;
struct FullContainerName;
// clang-format on

class HudContainerManagerModel : public ::ContainerManagerModel {
public:
    // HudContainerManagerModel inner types define
    using ItemStackVector = std::vector<ItemStack>;

    using DynamicContainerRemovalPublisher = ::Bedrock::PubSub::Publisher<
        void(const std::vector<std::string>&),
        Bedrock::PubSub::ThreadModel::MultiThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mLastSlots;
    ::ll::UntypedStorage<8, 88>                       mOnDynamicContainerRemovalPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    HudContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HudContainerManagerModel();

    virtual std::vector<ItemStack> getItemCopies() const;

    virtual void setSlot(int, ::ItemStack const&, bool);

    virtual ::ItemStack const& getSlot(int) const;

    virtual void setData(int, int);

    virtual void broadcastChanges();

    virtual ::ContainerScreenContext _postInit();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HudContainerManagerModel(::ContainerID, ::Player&);

    MCNAPI void cleanUpDynamicContainers();

    MCNAPI ::Bedrock::PubSub::Publisher<
        void(const std::vector<std::string>&),
        Bedrock::PubSub::ThreadModel::MultiThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>&
    getDynamicContainerRemovalConnector();

    MCNAPI void refreshHotbar();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID, ::Player&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::vector<ItemStack> $getItemCopies() const;

    MCNAPI void $setSlot(int, ::ItemStack const&, bool);

    MCNAPI ::ItemStack const& $getSlot(int) const;

    MCNAPI void $setData(int, int);

    MCNAPI void $broadcastChanges();

    MCNAPI ::ContainerScreenContext $_postInit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

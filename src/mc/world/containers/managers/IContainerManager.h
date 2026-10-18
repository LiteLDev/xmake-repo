#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
struct FullContainerName;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class IContainerManager {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IContainerManager() = default;

    virtual ::ContainerID getContainerId() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setContainerId(::ContainerID) = 0;
#else // @header-generator platform
    virtual void setContainerId(::ContainerID id) = 0;
#endif // @header-generator platform

    virtual ::SharedTypes::Legacy::ContainerType getContainerType() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setContainerType(::SharedTypes::Legacy::ContainerType) = 0;
#else // @header-generator platform
    virtual void setContainerType(::SharedTypes::Legacy::ContainerType type) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription registerContainerTypeListener(std::function<void (SharedTypes::Legacy::ContainerType)>) const = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Subscription
    registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const = 0;
#endif // @header-generator platform

    virtual void serverInitItemStackIds() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<ItemStack> getItemCopies() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::ItemStack> getItemCopies() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSlot(int, ::ItemStack const&, bool) = 0;
#else // @header-generator platform
    virtual void setSlot(int slot, ::ItemStack const& item, bool fromNetwork) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getSlot(int) const = 0;
#else // @header-generator platform
    virtual ::ItemStack const& getSlot(int slot) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setData(int, int) = 0;
#else // @header-generator platform
    virtual void setData(int id, int value) = 0;
#endif // @header-generator platform

    virtual void setFullContainerSlot(int, ::FullContainerName const&, ::ItemStack const&, bool) = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ItemStack const& getFullContainerSlot(int, ::FullContainerName const&) const = 0;
#else // @header-generator platform
    virtual ::ItemStack const& getFullContainerSlot(int slot, ::FullContainerName const& name) const = 0;
#endif // @header-generator platform

    virtual void broadcastChanges() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

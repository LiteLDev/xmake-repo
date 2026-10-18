#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/item/components/ItemComponent.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
class NetworkedItemComponent {};
#else // @header-generator platform
template <typename T>
class NetworkedItemComponent : public ItemComponent {
public:
    [[nodiscard]] bool                         isNetworkComponent() const override;
    [[nodiscard]] std::unique_ptr<CompoundTag> buildNetworkTag(const cereal::ReflectionCtx&) const override;
    bool initializeFromNetwork(const CompoundTag&, const cereal::ReflectionCtx&) override;
};
#endif // @header-generator platform no-eol

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class InventoryItemRenderer;
class PropertyBag;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class IItemHandle {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IItemHandle {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IItemHandle() = default;

    virtual bool isAnimated() const = 0;

    virtual uint64 hash() const = 0;

    virtual ::PropertyBag const& getBag() const = 0;

    virtual void visitItem(
        ::brstd::function_ref<void(::InventoryItemRenderer&) const, void(::InventoryItemRenderer&)> visitor
    ) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IItemHandle {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas

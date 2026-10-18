#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class PropertyBag;
namespace GeometryAtlas { class IItemHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class IItemHandleFactory {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IItemHandleFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IItemHandleFactory() = default;

    virtual ::std::shared_ptr<::GeometryAtlas::IItemHandle>
    createItem(::std::string_view name, ::std::unique_ptr<::PropertyBag> bag) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IItemHandleFactory {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

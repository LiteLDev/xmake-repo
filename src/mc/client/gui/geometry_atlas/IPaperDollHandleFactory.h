#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class PropertyBag;
namespace GeometryAtlas { class PaperDollHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class IPaperDollHandleFactory {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IPaperDollHandleFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollHandleFactory() = default;

    virtual ::std::shared_ptr<::GeometryAtlas::PaperDollHandle>
    createDoll(::std::unique_ptr<::PropertyBag> bag) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IPaperDollHandleFactory {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas

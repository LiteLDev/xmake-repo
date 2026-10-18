#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityContext;
namespace cereal { class ComponentStorage; }
// clang-format on

#endif // @header-generator platform
namespace AtomicClientEntity {

#if defined(LL_PLAT_A) // @header-generator platform
class ComponentInitializer {};
#else // @header-generator platform
class ComponentInitializer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ComponentInitializer() = default;

    virtual void
    initializeFromStorage(::EntityContext&, ::cereal::ComponentStorage const&, ::std::string const&) const = 0;

    virtual ::std::string_view getComponentName() const = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace AtomicClientEntity

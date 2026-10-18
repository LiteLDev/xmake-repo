#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace VanillaSystems { class IVanillaSystemsEventingAdapter; }
// clang-format on

namespace VanillaSystems {

struct VanillaSystemsEventingComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<VanillaSystems::IVanillaSystemsEventingAdapter*>> mEventing;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::VanillaSystems::IVanillaSystemsEventingAdapter*>> mEventing;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VanillaSystems

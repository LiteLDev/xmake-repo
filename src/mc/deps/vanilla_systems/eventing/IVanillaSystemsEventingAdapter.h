#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaSystems {

class IVanillaSystemsEventingAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IVanillaSystemsEventingAdapter() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void doFireEventActorValueValidationFailed(std::string const&, char const*) = 0;
#else // @header-generator platform
    virtual void doFireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VanillaSystems

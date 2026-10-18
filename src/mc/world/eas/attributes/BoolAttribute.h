#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/attributes/EnvironmentAttribute.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/eas/attributes/NoConstraint.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace EAS { struct BoolAttributeData; }
namespace EAS { template<typename T0> class NoConstraint; }
#else // @header-generator platform
namespace EAS { class BoolModifier; }
#endif // @header-generator platform
// clang-format on

namespace EAS {

#if defined(LL_PLAT_A) // @header-generator platform
class BoolAttribute : public ::EAS::EnvironmentAttribute<bool, EAS::BoolModifier, EAS::NoConstraint<bool>> {
public:
    // prevent constructor by default
    BoolAttribute();
};
#else // @header-generator platform
class BoolAttribute : public ::EAS::EnvironmentAttribute<bool, ::EAS::BoolModifier, ::EAS::NoConstraint<bool>> {};
#endif // @header-generator platform

} // namespace EAS

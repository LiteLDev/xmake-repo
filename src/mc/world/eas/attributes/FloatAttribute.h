#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/world/eas/attributes/EnvironmentAttribute.h"
#include "mc/world/eas/attributes/FloatConstraint.h"

// auto generated forward declare list
// clang-format off
namespace EAS { class FloatModifier; }
// clang-format on

#endif // @header-generator platform
namespace EAS {

#if defined(LL_PLAT_C) // @header-generator platform
class FloatAttribute {};
#else // @header-generator platform
class FloatAttribute : public ::EAS::EnvironmentAttribute<float, ::EAS::FloatModifier, ::EAS::FloatConstraint> {};
#endif // @header-generator platform

} // namespace EAS
#endif // @header-generator platform

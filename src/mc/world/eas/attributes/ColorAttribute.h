#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/world/eas/attributes/EnvironmentAttribute.h"
#include "mc/world/eas/attributes/NoConstraint.h"

// auto generated forward declare list
// clang-format off
namespace EAS { class ColorModifier; }
// clang-format on

#endif // @header-generator platform
namespace EAS {

#if defined(LL_PLAT_C) // @header-generator platform
class ColorAttribute {};
#else // @header-generator platform
class ColorAttribute
: public ::EAS::EnvironmentAttribute<::mce::Color, ::EAS::ColorModifier, ::EAS::NoConstraint<::mce::Color>> {};
#endif // @header-generator platform

} // namespace EAS
#endif // @header-generator platform

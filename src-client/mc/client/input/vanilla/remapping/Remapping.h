#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/vanilla/remapping/ActionEnum.h"

// auto generated forward declare list
// clang-format off
namespace Remapping { struct Action; }
// clang-format on

namespace Remapping {
// functions
// NOLINTBEGIN
MCAPI ::std::string getActionName(::Remapping::ActionEnum action);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<::Remapping::Action const[]> ActionList();
// NOLINTEND

} // namespace Remapping
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

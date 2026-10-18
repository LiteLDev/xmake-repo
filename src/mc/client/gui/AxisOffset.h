#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/LayoutAxisOperation.h"
#include "mc/client/gui/LayoutAxisType.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/LayoutAxisOperation.h"
#include "mc/client/gui/LayoutAxisType.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
struct AxisOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisType>      type;
    ::ll::TypedStorage<4, 4, float>                     value;
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisOperation> operation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AxisOffset(::ui::LayoutAxisType, float, ::ui::LayoutAxisOperation);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ui::LayoutAxisType, float, ::ui::LayoutAxisOperation);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct AxisOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisType>      type;
    ::ll::TypedStorage<4, 4, float>                     value;
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisOperation> operation;
    // NOLINTEND
};
#else // @header-generator platform
struct AxisOffset {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ui

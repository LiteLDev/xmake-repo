#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/AxisOffset.h"
#include "mc/client/gui/LayoutAxisOffsetContainerType.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/LayoutAxisOffsetContainerType.h"

// auto generated forward declare list
// clang-format off
namespace ui { struct AxisOffset; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
struct AxisOffsetContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ui::AxisOffset>>        axisOffsets;
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisOffsetContainerType> containerType;
    // NOLINTEND

public:
    // prevent constructor by default
    AxisOffsetContainer& operator=(AxisOffsetContainer const&);
    AxisOffsetContainer(AxisOffsetContainer const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct AxisOffsetContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ui::AxisOffset>>    axisOffsets;
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisOffsetContainerType> containerType;
    // NOLINTEND
};
#else // @header-generator platform
struct AxisOffsetContainer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ui

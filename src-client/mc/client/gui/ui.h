#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/LayoutAxisType.h"
#include "mc/client/gui/TextAlignment.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ui { struct AxisOffsetContainer; }
// clang-format on

namespace ui {
// functions
// NOLINTBEGIN
MCAPI ::ui::TextAlignment getTextAlignmentFromString(::std::string const& alignment);

MCAPI ::ui::AxisOffsetContainer
parseLayoutAxis(::Json::Value const& val, int index, ::ui::LayoutAxisType defaultRelativeAxis);
// NOLINTEND

} // namespace ui
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

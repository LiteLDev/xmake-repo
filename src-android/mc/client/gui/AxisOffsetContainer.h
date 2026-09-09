#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/AxisOffset.h"
#include "mc/client/gui/LayoutAxisOffsetContainerType.h"

namespace ui {

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

} // namespace ui

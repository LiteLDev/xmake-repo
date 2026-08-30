#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/AxisOffset.h"
#include "mc/client/gui/LayoutAxisOffsetContainerType.h"
#include "mc/client/gui/LayoutAxisType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace ui {

struct LayoutOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ui::AxisOffset>>        x;
    ::ll::TypedStorage<8, 24, std::vector<ui::AxisOffset>>        y;
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisOffsetContainerType> xType;
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisOffsetContainerType> yType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LayoutOffset();

    MCNAPI explicit LayoutOffset(::Json::Value const&);

    MCNAPI explicit LayoutOffset(::glm::vec<2, float, (glm::qualifier)0> const);

    MCNAPI LayoutOffset(::ui::LayoutOffset const&);

    MCNAPI LayoutOffset(::ui::LayoutAxisType, float, ::ui::LayoutAxisType, float);

    MCNAPI bool operator!=(::ui::LayoutOffset const&) const;

    MCNAPI ~LayoutOffset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Json::Value const&);

    MCNAPI void* $ctor(::glm::vec<2, float, (glm::qualifier)0> const);

    MCNAPI void* $ctor(::ui::LayoutOffset const&);

    MCNAPI void* $ctor(::ui::LayoutAxisType, float, ::ui::LayoutAxisType, float);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ui

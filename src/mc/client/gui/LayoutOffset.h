#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/AxisOffset.h"
#include "mc/client/gui/LayoutAxisOffsetContainerType.h"
#include "mc/client/gui/LayoutAxisType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/LayoutAxisOffsetContainerType.h"
#include "mc/client/gui/LayoutAxisType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ui { struct AxisOffset; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct LayoutOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ui::AxisOffset>>    x;
    ::ll::TypedStorage<8, 24, ::std::vector<::ui::AxisOffset>>    y;
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisOffsetContainerType> xType;
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisOffsetContainerType> yType;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutOffset& operator=(LayoutOffset const&);
    LayoutOffset();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LayoutOffset(::ui::LayoutOffset const&);

    MCAPI explicit LayoutOffset(::glm::vec2 const size);

    MCAPI explicit LayoutOffset(::Json::Value const& val);

    MCAPI LayoutOffset(::ui::LayoutAxisType xType, float xValue, ::ui::LayoutAxisType yType, float yValue);

    MCAPI bool operator!=(::ui::LayoutOffset const& other) const;

    MCAPI ~LayoutOffset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ui::LayoutOffset const&);

    MCAPI void* $ctor(::glm::vec2 const size);

    MCAPI void* $ctor(::Json::Value const& val);

    MCAPI void* $ctor(::ui::LayoutAxisType xType, float xValue, ::ui::LayoutAxisType yType, float yValue);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct LayoutOffset {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ui

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"

// auto generated forward declare list
// clang-format off
class LayoutVariables;
class UIControl;
class VisualTree;
// clang-format on

class LayoutManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<LayoutVariables>>       mVariables;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mSize;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<UIControl>>>  mDelayedLayout;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag _update(::VisualTree&, ::UIControl const*);

    MCNAPI void addDelayedLayout(::UIControl&);

    MCNAPI bool hasDelayedLayout();

    MCNAPI void processDelayedLayout();

    MCNAPI void setSize(::glm::vec<2, float, (glm::qualifier)0> const&);

    MCNAPI ::ui::DirtyFlag update(::VisualTree&, ::UIControl const*);
    // NOLINTEND
};

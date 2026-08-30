#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class RecentFocusVector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<UIControl>>> mRecentControlVector;
    ::ll::TypedStorage<4, 4, int>                                    mNextInsert;
    ::ll::TypedStorage<1, 1, bool>                                   mIncludeMagnetControls;
    // NOLINTEND

public:
    // prevent constructor by default
    RecentFocusVector();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canControlBeFocused(::UIControl&) const;

    MCNAPI bool _isCurrentIndexControl(std::weak_ptr<UIControl>) const;

    MCNAPI void addRecentFocusControl(std::weak_ptr<UIControl>);

    MCNAPI std::shared_ptr<UIControl> getLastGoodFocusedControl(std::shared_ptr<UIControl>);

    MCNAPI void setIncludeMagnetControls(bool const);
    // NOLINTEND
};

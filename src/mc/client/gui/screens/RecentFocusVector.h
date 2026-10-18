#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

class RecentFocusVector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::UIControl>>> mRecentControlVector;
    ::ll::TypedStorage<4, 4, int>                                          mNextInsert;
    ::ll::TypedStorage<1, 1, bool>                                         mIncludeMagnetControls;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UIControl>
    _getValidControl(int startIndex, int endIndex, ::std::shared_ptr<::UIControl> lastFocusedControl);

    MCAPI bool _isCurrentIndexControl(::std::weak_ptr<::UIControl> control) const;

    MCAPI void addRecentFocusControl(::std::weak_ptr<::UIControl> control);

    MCAPI ::std::shared_ptr<::UIControl> getLastGoodFocusedControl(::std::shared_ptr<::UIControl> lastFocusedControl);

    MCAPI ~RecentFocusVector();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class RecentFocusVector {};
#endif // @header-generator platform
#endif // @header-generator platform

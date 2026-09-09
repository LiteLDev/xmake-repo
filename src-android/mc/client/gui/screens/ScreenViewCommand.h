#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
struct FlyingItemCommand;
struct SelectNavigationTabCommand;
// clang-format on

struct ScreenViewCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                 sendFlyingItems;
    ::ll::UntypedStorage<8, 48>                                                 selectNavigationTab;
    ::ll::UntypedStorage<8, 48>                                                 openKeyboard;
    ::ll::UntypedStorage<8, 48>                                                 closeKeyboard;
    ::ll::UntypedStorage<8, 48>                                                 selectControl;
    ::ll::UntypedStorage<8, 48>                                                 selectVisibleControl;
    ::ll::UntypedStorage<8, 48>                                                 focusControl;
    ::ll::UntypedStorage<8, 48>                                                 setFocusedTextBoxText;
    ::ll::UntypedStorage<8, 48>                                                 isFocusWithin;
    ::ll::UntypedStorage<8, 48>                                                 isSelected;
    ::ll::UntypedStorage<8, 48>                                                 scrollToControl;
    ::ll::UntypedStorage<8, 48>                                                 scrollToControlAndSelect;
    ::ll::UntypedStorage<8, 48>                                                 focusCollectionItem;
    ::ll::UntypedStorage<8, 48>                                                 scrollToGridItemOffset;
    ::ll::UntypedStorage<8, 48>                                                 scrollToGridItemOffsetCollectionIndex;
    ::ll::UntypedStorage<8, 48>                                                 scrollToCollectionItem;
    ::ll::UntypedStorage<8, 48>                                                 resetScrollWithin;
    ::ll::UntypedStorage<8, 48>                                                 setFocusToFocusIdWhenVisible;
    ::ll::UntypedStorage<8, 48>                                                 prepareFocusForModalPopup;
    ::ll::UntypedStorage<8, 48>                                                 updateTTSForSlider;
    ::ll::UntypedStorage<8, 48>                                                 forceRepeatTTS;
    ::ll::UntypedStorage<8, 48>                                                 setCustomObfuscatedTime;
    ::ll::UntypedStorage<8, 48>                                                 triggerAnimationEvent;
    ::ll::TypedStorage<8, 48, std::function<RectangleArea(const std::string&)>> getEnclosingScrollViewportArea;
    ::ll::TypedStorage<8, 48, std::function<RectangleArea(const std::string&, int)>> getCollectionItemArea;
    ::ll::TypedStorage<8, 48, std::function<float(const std::string&)>>              getEnclosingScrollVelocity;
    ::ll::TypedStorage<8, 48, std::function<void(std::function<std::pair<ui::DirtyFlag, bool>()>)>> runOncePostLayout;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenViewCommand(ScreenViewCommand const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScreenViewCommand& operator=(::ScreenViewCommand const&);

    MCNAPI ~ScreenViewCommand();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

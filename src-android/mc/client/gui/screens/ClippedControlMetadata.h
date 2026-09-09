#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/RenderControlMetadata.h"
#include "mc/client/gui/screens/ScreenEvent.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct ClippedControlMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<RenderControlMetadata>>      controlsToUpdate;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<UIControl>>> clippedGrids;
    ::ll::TypedStorage<8, 24, std::vector<ScreenEvent>>                clipStateChangeEvents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClippedControlMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

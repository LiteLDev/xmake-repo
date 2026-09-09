#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

struct AnvilInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> costText;
    ::ll::TypedStorage<8, 24, std::string> costSentiment;
    ::ll::TypedStorage<1, 1, bool>         shouldCrossOutIconBeVisible;
    ::ll::TypedStorage<8, 24, std::string> previewItemName;
    ::ll::TypedStorage<1, 1, bool>         hasInputItem;
    // NOLINTEND

public:
    // prevent constructor by default
    AnvilInfo& operator=(AnvilInfo const&);
    AnvilInfo(AnvilInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AnvilInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace GameplayUI

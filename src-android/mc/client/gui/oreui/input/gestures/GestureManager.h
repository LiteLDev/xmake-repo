#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GestureRecognizerBase; }
namespace OreUI { struct TouchEventData; }
// clang-format on

namespace OreUI {

class GestureManager {
public:
    // GestureManager inner types define
    using GestureRecognizerPtrVector = std::vector<std::unique_ptr<OreUI::GestureRecognizerBase>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<OreUI::GestureRecognizerBase>>> mRecognizers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addRecognizer(std::unique_ptr<OreUI::GestureRecognizerBase>);

    MCNAPI ~GestureManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI

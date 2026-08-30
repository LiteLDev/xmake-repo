#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ScopedFPSDataTracker.h"

namespace OreUI {

struct ScopedActiveTracker : public ::OreUI::ScopedFPSDataTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mDataChangeCulprit;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedActiveTracker& operator=(ScopedActiveTracker const&);
    ScopedActiveTracker(ScopedActiveTracker const&);
    ScopedActiveTracker();
};

} // namespace OreUI

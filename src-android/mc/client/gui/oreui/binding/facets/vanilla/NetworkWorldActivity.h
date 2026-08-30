#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"

namespace OreUI {

struct NetworkWorldActivity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72>            imagePath;
    ::ll::TypedStorage<8, 24, std::string> title;
    ::ll::TypedStorage<8, 24, std::string> subtitle;
    ::ll::TypedStorage<8, 24, std::string> description;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldActivity& operator=(NetworkWorldActivity const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkWorldActivity(::OreUI::NetworkWorldActivity const&);

    MCNAPI ~NetworkWorldActivity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::NetworkWorldActivity const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI

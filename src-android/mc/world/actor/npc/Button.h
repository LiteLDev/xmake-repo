#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct Button {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mRawName;
    ::ll::TypedStorage<8, 24, std::string> mName;
    // NOLINTEND

public:
    // prevent constructor by default
    Button& operator=(Button const&);
    Button(Button const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::npc::Button& operator=(std::string_view);

    MCNAPI ~Button();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace npc

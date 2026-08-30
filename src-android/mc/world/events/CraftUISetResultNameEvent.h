#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CraftUISetResultNameEvent {
public:
    // CraftUISetResultNameEvent inner types define
    enum class BlockType : int {
        Anvil = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CraftUISetResultNameEvent::BlockType const> mType;
    ::ll::TypedStorage<8, 24, std::string const>                           mName;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftUISetResultNameEvent& operator=(CraftUISetResultNameEvent const&);
    CraftUISetResultNameEvent();
};

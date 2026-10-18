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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const>                           mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string const>                         mName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CraftUISetResultNameEvent& operator=(CraftUISetResultNameEvent const&);
    CraftUISetResultNameEvent();
#else // @header-generator platform
#endif // @header-generator platform
};

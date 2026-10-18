#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class GamefaceImeComposer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mComposition;
    ::ll::TypedStorage<4, 4, int>          mStartPosition;
    ::ll::TypedStorage<4, 4, int>          mMaxLength;
    ::ll::TypedStorage<4, 4, int>          mPositionOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    GamefaceImeComposer& operator=(GamefaceImeComposer const&);
    GamefaceImeComposer(GamefaceImeComposer const&);
    GamefaceImeComposer();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class GamefaceImeComposer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mComposition;
    ::ll::TypedStorage<4, 4, int>            mStartPosition;
    ::ll::TypedStorage<4, 4, int>            mMaxLength;
    ::ll::TypedStorage<4, 4, int>            mPositionOffset;
    // NOLINTEND
};
#else // @header-generator platform
class GamefaceImeComposer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

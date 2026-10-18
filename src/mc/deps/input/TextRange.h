#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class TextRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mStartCaretPos;
    ::ll::TypedStorage<4, 4, int> mEndCaretPos;
    // NOLINTEND

public:
    // prevent constructor by default
    TextRange();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TextRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mStartCaretPos;
    ::ll::TypedStorage<4, 4, int> mEndCaretPos;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::pair<int, int> getWordRange(::std::string const& textLine, int caret);
    // NOLINTEND
};
#else // @header-generator platform
class TextRange {};
#endif // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MeasureResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mFormattedText;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mSize;
    ::ll::TypedStorage<8, 24, std::vector<int>>                       mCaretOffsets;
    ::ll::TypedStorage<4, 4, float>                                   mCaretHeightOffset;
    ::ll::TypedStorage<4, 4, float>                                   mLineHeight;
    ::ll::TypedStorage<1, 1, bool>                                    mUsingEllipses;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MeasureResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

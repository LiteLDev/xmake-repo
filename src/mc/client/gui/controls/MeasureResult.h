#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MeasureResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>      mFormattedText;
    ::ll::TypedStorage<4, 8, ::glm::vec2>         mSize;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mCaretOffsets;
    ::ll::TypedStorage<4, 4, float>               mCaretHeightOffset;
    ::ll::TypedStorage<4, 4, float>               mLineHeight;
    ::ll::TypedStorage<1, 1, bool>                mUsingEllipses;
    // NOLINTEND

public:
    // prevent constructor by default
    MeasureResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MeasureResult(
        ::std::string      formattedText,
        ::glm::vec2 const& size,
        ::std::vector<int> caretOffsets,
        float              caretHeightOffset,
        bool               usingEllipses,
        float              lineHeight
    );

    MCAPI ~MeasureResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string      formattedText,
        ::glm::vec2 const& size,
        ::std::vector<int> caretOffsets,
        float              caretHeightOffset,
        bool               usingEllipses,
        float              lineHeight
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct MeasureResult {};
#endif // @header-generator platform
#endif // @header-generator platform

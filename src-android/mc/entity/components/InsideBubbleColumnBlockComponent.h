#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

struct InsideBubbleColumnBlockComponent {
public:
    // InsideBubbleColumnBlockComponent inner types declare
    // clang-format off
    struct AboveColumnData;
    struct InsideColumnData;
    // clang-format on

    // InsideBubbleColumnBlockComponent inner types define
    struct AboveColumnData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
        ::ll::TypedStorage<1, 1, bool>        mShouldDragDown;
        // NOLINTEND
    };

    struct InsideColumnData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
        ::ll::TypedStorage<1, 1, bool>        mShouldDragDown;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::variant<InsideBubbleColumnBlockComponent::AboveColumnData, InsideBubbleColumnBlockComponent::InsideColumnData>>> mData;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    InsideBubbleColumnBlockComponent& operator=(InsideBubbleColumnBlockComponent const&);
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
        ::ll::TypedStorage<1, 1, bool>        mShouldDragDown;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 12> mUnk5b361c;
        ::ll::UntypedStorage<1, 1>  mUnkbf7308;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        AboveColumnData& operator=(AboveColumnData const&);
        AboveColumnData(AboveColumnData const&);
        AboveColumnData();
#endif // @header-generator platform
    };

    struct InsideColumnData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
        ::ll::TypedStorage<1, 1, bool>        mShouldDragDown;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 12> mUnkada1bd;
        ::ll::UntypedStorage<1, 1>  mUnk38a401;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        InsideColumnData& operator=(InsideColumnData const&);
        InsideColumnData(InsideColumnData const&);
        InsideColumnData();
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    using DataVariant = ::std::variant<
        ::InsideBubbleColumnBlockComponent::AboveColumnData,
        ::InsideBubbleColumnBlockComponent::InsideColumnData>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::variant<InsideBubbleColumnBlockComponent::AboveColumnData, InsideBubbleColumnBlockComponent::InsideColumnData>>> mData;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::InsideBubbleColumnBlockComponent::AboveColumnData,
            ::InsideBubbleColumnBlockComponent::InsideColumnData>>>
        mData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    InsideBubbleColumnBlockComponent& operator=(InsideBubbleColumnBlockComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};

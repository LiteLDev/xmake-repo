#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/cohtml/Direction.h"
#include "mc/external/gameface/cohtml/Range.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace cohtml::TextInput {

#if defined(LL_PLAT_A) // @header-generator platform
struct Selection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::cohtml::TextInput::Range>     SelectionRange;
    ::ll::TypedStorage<4, 4, ::cohtml::TextInput::Direction> SelectionDirection;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Selection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkd03fba;
    ::ll::UntypedStorage<4, 4> mUnk379267;
    // NOLINTEND

public:
    // prevent constructor by default
    Selection& operator=(Selection const&);
    Selection(Selection const&);
    Selection();
};
#else // @header-generator platform
struct Selection {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml::TextInput

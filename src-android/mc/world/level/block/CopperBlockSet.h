#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/level/block/CopperType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct CopperBlockSet {
public:
    // CopperBlockSet inner types declare
    // clang-format off
    class HashedStringRef;
    // clang-format on

    // CopperBlockSet inner types define
    class HashedStringRef {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::HashedString const*> mPtr;
        // NOLINTEND

    public:
        // prevent constructor by default
        HashedStringRef();
    };

    using CopperTypeBlocks = ::Bedrock::DenseEnumMap<CopperType, CopperBlockSet::HashedStringRef, (CopperType)4>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mBlocks;
    ::ll::UntypedStorage<8, 32> mWaxedBlocks;
    // NOLINTEND
};

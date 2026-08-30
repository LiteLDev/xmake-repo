#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class VolumeFogComponent;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct VolumeFogDefinition {
public:
    // VolumeFogDefinition inner types declare
    // clang-format off
    struct ConstrainedString;
    // clang-format on

    // VolumeFogDefinition inner types define
    struct ConstrainedString {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mString;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConstrainedString();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::VolumeFogDefinition::ConstrainedString> mFogDefintionIdentifier;
    ::ll::TypedStorage<4, 4, int>                                       mPriority;
    // NOLINTEND
};

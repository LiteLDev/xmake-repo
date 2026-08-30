#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct VolumeIdentifier {
public:
    // VolumeIdentifier inner types declare
    // clang-format off
    struct ConstrainedString;
    // clang-format on

    // VolumeIdentifier inner types define
    struct ConstrainedString {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mString;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::VolumeIdentifier::ConstrainedString> mIdentifier;
    // NOLINTEND
};

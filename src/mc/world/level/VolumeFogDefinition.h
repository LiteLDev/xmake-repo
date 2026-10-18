#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
class VolumeFogComponent;
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct VolumeFogDefinition {
public:
    // VolumeFogDefinition inner types declare
    // clang-format off
    struct ConstrainedString;
    // clang-format on

    // VolumeFogDefinition inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ConstrainedString {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkaabb56;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConstrainedString& operator=(ConstrainedString const&);
        ConstrainedString(ConstrainedString const&);
        ConstrainedString();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::VolumeFogDefinition::ConstrainedString> mFogDefintionIdentifier;
    ::ll::TypedStorage<4, 4, int>                                       mPriority;
    // NOLINTEND
#else // @header-generator platform
    struct ConstrainedString {};
#endif // @header-generator platform
#endif // @header-generator platform
};

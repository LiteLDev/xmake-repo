#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> mString;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkd0ccf9;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        ConstrainedString& operator=(ConstrainedString const&);
        ConstrainedString(ConstrainedString const&);
        ConstrainedString();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::VolumeIdentifier::ConstrainedString> mIdentifier;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk3b05f5;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    VolumeIdentifier& operator=(VolumeIdentifier const&);
    VolumeIdentifier(VolumeIdentifier const&);
    VolumeIdentifier();
#endif // @header-generator platform
};

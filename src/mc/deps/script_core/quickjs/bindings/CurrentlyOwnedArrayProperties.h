#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::QuickJS { struct ArrayPropertyFetch; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

struct CurrentlyOwnedArrayProperties {
public:
    // CurrentlyOwnedArrayProperties inner types declare
    // clang-format off
    struct Prop;
    // clang-format on

    // CurrentlyOwnedArrayProperties inner types define
    struct Prop {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong> idx;
        ::ll::UntypedStorage<8, 32>     handle;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8>  mUnk8478ce;
        ::ll::UntypedStorage<8, 32> mUnk32882d;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Prop& operator=(Prop const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Prop(Prop const&);
#endif // @header-generator platform
        Prop();
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Scripting::QuickJS::CurrentlyOwnedArrayProperties::Prop>> props;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk9bf1a5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentlyOwnedArrayProperties& operator=(CurrentlyOwnedArrayProperties const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CurrentlyOwnedArrayProperties(CurrentlyOwnedArrayProperties const&);
    CurrentlyOwnedArrayProperties();
#endif // @header-generator platform
};

} // namespace Scripting::QuickJS

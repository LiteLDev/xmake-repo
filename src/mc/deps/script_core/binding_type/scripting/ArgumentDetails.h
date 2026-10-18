#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentDetails {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ArgumentDetails inner types define
    using ValidValueFn = bool (*)(::Scripting::ArgumentDetails const&, ::entt::meta_any const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8>                  isValidValue;
    ::ll::UntypedStorage<8, 8>                  isValidVectorValue;
    ::ll::TypedStorage<8, 64, ::entt::meta_any> defaultValue;
    ::ll::TypedStorage<8, 64, ::entt::meta_any> minValue;
    ::ll::TypedStorage<8, 64, ::entt::meta_any> maxValue;
    ::ll::TypedStorage<4, 4, uint>              maxArraySize;
    ::ll::TypedStorage<1, 1, bool>              hasMin;
    ::ll::TypedStorage<1, 1, bool>              hasMax;
    ::ll::TypedStorage<1, 1, bool>              hasMaxArraySize;
    ::ll::TypedStorage<8, 64, ::entt::meta_any> supportedValues;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk64a1c3;
    ::ll::UntypedStorage<8, 8>  mUnk568197;
    ::ll::UntypedStorage<8, 64> mUnk574b18;
    ::ll::UntypedStorage<8, 64> mUnkcd9943;
    ::ll::UntypedStorage<8, 64> mUnk8d35f7;
    ::ll::UntypedStorage<4, 4>  mUnk68464d;
    ::ll::UntypedStorage<1, 1>  mUnk29a49a;
    ::ll::UntypedStorage<1, 1>  mUnk853fc6;
    ::ll::UntypedStorage<1, 1>  mUnke3b46c;
    ::ll::UntypedStorage<8, 64> mUnk2c8f9c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ArgumentDetails& operator=(ArgumentDetails const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArgumentDetails();

    MCNAPI ArgumentDetails(::Scripting::ArgumentDetails&&);

    MCNAPI ArgumentDetails(::Scripting::ArgumentDetails const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI ::Scripting::ArgumentDetails& operator=(::Scripting::ArgumentDetails const&);
#endif // @header-generator platform

    MCNAPI ~ArgumentDetails();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::ArgumentDetails&&);

    MCNAPI void* $ctor(::Scripting::ArgumentDetails const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting

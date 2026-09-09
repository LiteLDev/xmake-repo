#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentDetails {
public:
    // ArgumentDetails inner types define
    using ValidValueFn = bool (*)(::Scripting::ArgumentDetails const&, ::entt::meta_any const&);

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    ArgumentDetails& operator=(ArgumentDetails const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArgumentDetails();

    MCNAPI ArgumentDetails(::Scripting::ArgumentDetails&&);

    MCNAPI ArgumentDetails(::Scripting::ArgumentDetails const&);

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

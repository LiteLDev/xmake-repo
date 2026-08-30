#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ResultAny {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>              mIsError;
    ::ll::TypedStorage<8, 64, ::entt::meta_any> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResultAny();

    MCNAPI ::entt::meta_type getType() const;

    MCNAPI bool isError() const;

    MCNAPI ::Scripting::ResultAny& operator=(::Scripting::ResultAny&&);

    MCNAPI ::Scripting::ResultAny& operator=(::Scripting::ResultAny const&);

    MCNAPI ::entt::meta_any toAny() const;

    MCNAPI ::entt::meta_any toErrorAny() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ResultAny makeErrorFromAny(::entt::meta_any&&);

    MCNAPI static ::Scripting::ResultAny makeResultFromAny(::entt::meta_any const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Scripting

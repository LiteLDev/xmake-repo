#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ResultAny {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>              mIsError;
    ::ll::TypedStorage<8, 64, ::entt::meta_any> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk92ee80;
    ::ll::UntypedStorage<8, 64> mUnk3edf86;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ResultAny(ResultAny const&);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResultAny();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::entt::meta_type getType() const;
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny& operator=(::Scripting::ResultAny&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isError() const;
#else // @header-generator platform
    MCNAPI ::Scripting::ResultAny& operator=(::Scripting::ResultAny const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ResultAny& operator=(::Scripting::ResultAny&&);

    MCNAPI ::Scripting::ResultAny& operator=(::Scripting::ResultAny const&);
#else // @header-generator platform
    MCNAPI ::entt::meta_any toAny();
#endif // @header-generator platform

    MCNAPI ::entt::meta_any toAny() const;

    MCNAPI ::entt::meta_any toErrorAny() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ResultAny makeErrorFromAny(::entt::meta_any&&);
#else // @header-generator platform
    MCNAPI static ::Scripting::ResultAny makeErrorFromAny(::entt::meta_any&& errorAny);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ResultAny makeResultFromAny(::entt::meta_any const&);
#else // @header-generator platform
    MCNAPI static ::Scripting::ResultAny makeResultFromAny(::entt::meta_any const& resultAny);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Scripting

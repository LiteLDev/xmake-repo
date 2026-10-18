#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/RuntimeCondition.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

class RuntimeConditions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Scripting::RuntimeCondition>> mRuntimeConditions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk23fbfa;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RuntimeConditions& operator=(RuntimeConditions const&);
    RuntimeConditions(RuntimeConditions const&);
    RuntimeConditions();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RuntimeConditions(::Scripting::RuntimeConditions const&);
#else // @header-generator platform
    MCNAPI ::Scripting::RuntimeConditions getMissing(::Scripting::RuntimeConditions const& runtimeConditions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool empty() const;

    MCNAPI ::Scripting::RuntimeConditions getMissing(::Scripting::RuntimeConditions const&);

    MCNAPI ::Scripting::RuntimeConditions& operator=(::Scripting::RuntimeConditions const&);

    MCNAPI std::string toString() const;

    MCNAPI ~RuntimeConditions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::RuntimeConditions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI ::std::string toString() const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting

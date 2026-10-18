#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct RuntimeCondition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> id;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkc2005b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeCondition& operator=(RuntimeCondition const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RuntimeCondition(RuntimeCondition const&);
#endif // @header-generator platform
    RuntimeCondition();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit RuntimeCondition(std::string const&);

    MCNAPI ~RuntimeCondition();
#else // @header-generator platform
    MCNAPI explicit RuntimeCondition(::std::string const& id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string const& id);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting

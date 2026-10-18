#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/filters/FilterInput.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class FilterInput;
// clang-format on
#endif // @header-generator platform

struct FilterInputDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::FilterInput> mInput;
    ::ll::TypedStorage<8, 24, std::string>   mDescription;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnk816a3b;
    ::ll::UntypedStorage<8, 32> mUnkcf6759;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FilterInputDefinition& operator=(FilterInputDefinition const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FilterInputDefinition(FilterInputDefinition const&);
#endif // @header-generator platform
    FilterInputDefinition();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~FilterInputDefinition();
#else // @header-generator platform
    MCNAPI FilterInputDefinition(::FilterInput f, ::std::string const& d);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::FilterInput f, ::std::string const& d);
#endif // @header-generator platform
    // NOLINTEND
};

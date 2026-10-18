#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/filters/FilterInput.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/filters/FilterOperator.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class FilterInput;
// clang-format on
#endif // @header-generator platform

struct FilterInputs {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mSubject;
    ::ll::TypedStorage<8, 40, ::FilterInput>                       mDomain;
    ::ll::TypedStorage<2, 2, ::FilterOperator>                     mOperator;
    ::ll::TypedStorage<8, 40, ::FilterInput>                       mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2>  mUnke637f5;
    ::ll::UntypedStorage<8, 48> mUnk260a64;
    ::ll::UntypedStorage<2, 2>  mUnkf5bc24;
    ::ll::UntypedStorage<8, 48> mUnk6920e4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FilterInputs& operator=(FilterInputs const&);
    FilterInputs(FilterInputs const&);
    FilterInputs();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI FilterInputs(
        ::SharedTypes::Legacy::FilterSubject subject,
        ::FilterInput                        domain,
        ::FilterOperator                     op,
        ::FilterInput                        value
    );

#endif // @header-generator platform
    MCNAPI ~FilterInputs();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::SharedTypes::Legacy::FilterSubject subject, ::FilterInput domain, ::FilterOperator op, ::FilterInput value);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

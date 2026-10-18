#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/filters/FilterInput.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/filters/FilterParamOption.h"
#include "mc/world/filters/FilterParamRequirement.h"
#include "mc/world/filters/FilterParamType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/filters/FilterStringMap.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class FilterInput;
struct FilterStringMap;
// clang-format on
#endif // @header-generator platform

struct FilterParamDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::FilterParamType>        mType;
    ::ll::TypedStorage<4, 4, ::FilterParamRequirement> mRequirement;
    ::ll::TypedStorage<8, 24, std::string>             mDescription;
    ::ll::TypedStorage<8, 40, ::FilterInput>           mDefault;
    ::ll::TypedStorage<8, 40, ::FilterStringMap>       mStringMap;
    ::ll::TypedStorage<1, 1, ::FilterParamOption>      mParamOption;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk4b4f37;
    ::ll::UntypedStorage<4, 4>  mUnk3c8bc4;
    ::ll::UntypedStorage<8, 32> mUnk559569;
    ::ll::UntypedStorage<8, 48> mUnk87f316;
    ::ll::UntypedStorage<8, 64> mUnked9a86;
    ::ll::UntypedStorage<1, 1>  mUnk87e752;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FilterParamDefinition& operator=(FilterParamDefinition const&);
    FilterParamDefinition(FilterParamDefinition const&);
    FilterParamDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FilterParamDefinition(
#if defined(LL_PLAT_A) // @header-generator platform
        ::FilterParamType,
        ::FilterParamRequirement,
        std::string,
        ::FilterInput,
        ::FilterStringMap
#else // @header-generator platform
        ::FilterParamType        type,
        ::FilterParamRequirement requirement,
        ::std::string            description,
        ::FilterInput            def,
        ::FilterStringMap        stringMap
#endif // @header-generator platform
    );

    MCNAPI FilterParamDefinition(
#if defined(LL_PLAT_A) // @header-generator platform
        ::FilterParamType,
        ::FilterParamRequirement,
        std::string,
        ::FilterParamOption,
        ::FilterInput,
        ::FilterStringMap
#else // @header-generator platform
        ::FilterParamType        type,
        ::FilterParamRequirement requirement,
        ::std::string            description,
        ::FilterParamOption      opt,
        ::FilterInput            def,
        ::FilterStringMap        stringMap
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI ~FilterParamDefinition();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::FilterParamType, ::FilterParamRequirement, std::string, ::FilterInput, ::FilterStringMap);
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::FilterParamType        type,
        ::FilterParamRequirement requirement,
        ::std::string            description,
        ::FilterInput            def,
        ::FilterStringMap        stringMap
    );
#endif // @header-generator platform

    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        ::FilterParamType,
        ::FilterParamRequirement,
        std::string,
        ::FilterParamOption,
        ::FilterInput,
        ::FilterStringMap
#else // @header-generator platform
        ::FilterParamType        type,
        ::FilterParamRequirement requirement,
        ::std::string            description,
        ::FilterParamOption      opt,
        ::FilterInput            def,
        ::FilterStringMap        stringMap
#endif // @header-generator platform
    );
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

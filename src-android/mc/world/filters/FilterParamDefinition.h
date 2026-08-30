#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterInput.h"
#include "mc/world/filters/FilterParamOption.h"
#include "mc/world/filters/FilterParamRequirement.h"
#include "mc/world/filters/FilterParamType.h"
#include "mc/world/filters/FilterStringMap.h"

struct FilterParamDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::FilterParamType>        mType;
    ::ll::TypedStorage<4, 4, ::FilterParamRequirement> mRequirement;
    ::ll::TypedStorage<8, 24, std::string>             mDescription;
    ::ll::TypedStorage<8, 40, ::FilterInput>           mDefault;
    ::ll::TypedStorage<8, 40, ::FilterStringMap>       mStringMap;
    ::ll::TypedStorage<1, 1, ::FilterParamOption>      mParamOption;
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
        ::FilterParamType,
        ::FilterParamRequirement,
        std::string,
        ::FilterInput,
        ::FilterStringMap
    );

    MCNAPI FilterParamDefinition(
        ::FilterParamType,
        ::FilterParamRequirement,
        std::string,
        ::FilterParamOption,
        ::FilterInput,
        ::FilterStringMap
    );

    MCNAPI ~FilterParamDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FilterParamType, ::FilterParamRequirement, std::string, ::FilterInput, ::FilterStringMap);

    MCNAPI void* $ctor(
        ::FilterParamType,
        ::FilterParamRequirement,
        std::string,
        ::FilterParamOption,
        ::FilterInput,
        ::FilterStringMap
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

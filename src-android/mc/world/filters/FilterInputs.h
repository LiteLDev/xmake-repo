#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/world/filters/FilterInput.h"
#include "mc/world/filters/FilterOperator.h"

struct FilterInputs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mSubject;
    ::ll::TypedStorage<8, 40, ::FilterInput>                       mDomain;
    ::ll::TypedStorage<2, 2, ::FilterOperator>                     mOperator;
    ::ll::TypedStorage<8, 40, ::FilterInput>                       mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FilterInputs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

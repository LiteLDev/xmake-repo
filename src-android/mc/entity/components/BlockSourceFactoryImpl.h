#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class MockableOwnedBlockSource;
struct DimensionType;
// clang-format on

class BlockSourceFactoryImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ILevel*>> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSourceFactoryImpl();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockSourceFactoryImpl(::gsl::not_null<ILevel*>);

    MCNAPI void _createOrUpdate(::MockableOwnedBlockSource&, ::DimensionType) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<ILevel*>);
    // NOLINTEND
};

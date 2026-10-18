#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ILevel;
#else // @header-generator platform
#endif // @header-generator platform
class MockableOwnedBlockSource;
struct DimensionType;
// clang-format on

class BlockSourceFactoryImpl {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ILevel*>> mLevel;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkef957b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BlockSourceFactoryImpl& operator=(BlockSourceFactoryImpl const&);
    BlockSourceFactoryImpl(BlockSourceFactoryImpl const&);
#endif // @header-generator platform
    BlockSourceFactoryImpl();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BlockSourceFactoryImpl(::gsl::not_null<ILevel*>);

    MCNAPI void _createOrUpdate(::MockableOwnedBlockSource&, ::DimensionType) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<ILevel*>);
#else // @header-generator platform
    MCAPI void _createOrUpdate(::MockableOwnedBlockSource& region, ::DimensionType type) const;
#endif // @header-generator platform
    // NOLINTEND
};

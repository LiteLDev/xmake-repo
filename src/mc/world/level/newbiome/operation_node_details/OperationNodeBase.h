#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OperationNodeDetails {

class OperationNodeBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, long> mSeed;
    ::ll::TypedStorage<8, 8, long> mSeedMixup;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, int64> mSeed;
    ::ll::TypedStorage<8, 8, int64> mSeedMixup;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    OperationNodeBase();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~OperationNodeBase();
#else // @header-generator platform
    virtual ~OperationNodeBase() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void init(long);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void init(int64 seed);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $init(long);
#else // @header-generator platform
    MCAPI void $init(int64 seed);


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace OperationNodeDetails

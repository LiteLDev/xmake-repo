#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertyValues {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<int>>   mIntValues;
    ::ll::TypedStorage<8, 24, std::vector<float>> mFloatValues;
    ::ll::TypedStorage<8, 24, std::vector<bool>>  mBoolValues;
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mEnumIndexValues;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<int>>    mIntValues;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>  mFloatValues;
    ::ll::TypedStorage<8, 32, ::std::vector<bool>>   mBoolValues;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mEnumIndexValues;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyValues& operator=(PropertyValues const&);
    PropertyValues();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PropertyValues(::PropertyValues const&);
#else // @header-generator platform
    MCAPI PropertyValues(::PropertyValues const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PropertyValues& operator=(::PropertyValues&&);
#else // @header-generator platform
    MCAPI ::PropertyValues& operator=(::PropertyValues&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PropertyValues();
#else // @header-generator platform
    MCAPI ~PropertyValues();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::PropertyValues const&);
#else // @header-generator platform
    MCAPI void* $ctor(::PropertyValues const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

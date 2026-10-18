#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PropertySyncData {
public:
    // PropertySyncData inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct PropertySyncIntEntry;
#else // @header-generator platform
#endif // @header-generator platform
    struct PropertySyncFloatEntry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PropertySyncIntEntry;
#endif // @header-generator platform
    // clang-format on

    // PropertySyncData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PropertySyncIntEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mPropertyIndex;
        ::ll::TypedStorage<4, 4, int>  mData;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct PropertySyncFloatEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>  mPropertyIndex;
        ::ll::TypedStorage<4, 4, float> mData;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PropertySyncIntEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mPropertyIndex;
        ::ll::TypedStorage<4, 4, int>  mData;
        // NOLINTEND
    };

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<PropertySyncData::PropertySyncIntEntry>>   mIntEntries;
    ::ll::TypedStorage<8, 24, std::vector<PropertySyncData::PropertySyncFloatEntry>> mFloatEntries;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::PropertySyncData::PropertySyncIntEntry>>   mIntEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::PropertySyncData::PropertySyncFloatEntry>> mFloatEntries;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PropertySyncData& operator=(PropertySyncData const&);
    PropertySyncData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PropertySyncData(::PropertySyncData const&);
#else // @header-generator platform
    MCAPI PropertySyncData(::PropertySyncData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PropertySyncData();
#else // @header-generator platform
    MCFOLD ::PropertySyncData& operator=(::PropertySyncData&&);

    MCAPI ~PropertySyncData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::PropertySyncData const&);
#else // @header-generator platform
    MCFOLD void* $ctor(::PropertySyncData const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
struct FullContainerName;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct SlotData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mCollectionName;
    ::ll::TypedStorage<4, 4, int>          mCollectionIndex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mCollectionName;
    ::ll::TypedStorage<4, 4, int>            mCollectionIndex;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SlotData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clear();
#else // @header-generator platform
    MCAPI SlotData(::std::string const& collectionName, int collectionIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isActive() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool matches(::SlotData const& other) const;

    MCAPI bool operator!=(::SlotData const& other) const;

    MCAPI void set(::std::string const& collectionName, int collectionIndex);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool matches(::SlotData const&) const;

    MCNAPI bool operator!=(::SlotData const&) const;

    MCNAPI bool operator==(::SlotData const&) const;

    MCNAPI void set(std::string const&, int);

    MCNAPI ~SlotData();
#else // @header-generator platform
    MCAPI ~SlotData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SlotData& UNKNOWN_LOCATION();
#else // @header-generator platform
    MCAPI static ::SlotData& UNKNOWN_LOCATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::std::string const& collectionName, int collectionIndex);
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

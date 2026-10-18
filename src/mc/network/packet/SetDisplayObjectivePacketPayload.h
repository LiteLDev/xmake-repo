#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ObjectiveSortOrder.h"

struct SetDisplayObjectivePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>         mDisplaySlotName;
    ::ll::TypedStorage<8, 24, std::string>         mObjectiveName;
    ::ll::TypedStorage<8, 24, std::string>         mObjectiveDisplayName;
    ::ll::TypedStorage<8, 24, std::string>         mCriteriaName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>       mDisplaySlotName;
    ::ll::TypedStorage<8, 32, ::std::string>       mObjectiveName;
    ::ll::TypedStorage<8, 32, ::std::string>       mObjectiveDisplayName;
    ::ll::TypedStorage<8, 32, ::std::string>       mCriteriaName;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ObjectiveSortOrder> mSortOrder;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SetDisplayObjectivePacketPayload() : mSortOrder(ObjectiveSortOrder::Ascending) {}

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SetDisplayObjectivePacketPayload(::SetDisplayObjectivePacketPayload const&);

    MCNAPI SetDisplayObjectivePacketPayload(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::ObjectiveSortOrder
#else // @header-generator platform
    MCAPI SetDisplayObjectivePacketPayload(
        ::std::string const& displaySlotName,
        ::std::string const& objectiveName,
        ::std::string const& displayName,
        ::std::string const& criteriaName,
        ::ObjectiveSortOrder order
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SetDisplayObjectivePacketPayload();
#else // @header-generator platform
    MCAPI ~SetDisplayObjectivePacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SetDisplayObjectivePacketPayload const&);

    MCNAPI void*
    $ctor(std::string const&, std::string const&, std::string const&, std::string const&, ::ObjectiveSortOrder);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const& displaySlotName,
        ::std::string const& objectiveName,
        ::std::string const& displayName,
        ::std::string const& criteriaName,
        ::ObjectiveSortOrder order
    );
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ObjectiveSortOrder.h"

struct SetDisplayObjectivePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>         mDisplaySlotName;
    ::ll::TypedStorage<8, 24, std::string>         mObjectiveName;
    ::ll::TypedStorage<8, 24, std::string>         mObjectiveDisplayName;
    ::ll::TypedStorage<8, 24, std::string>         mCriteriaName;
    ::ll::TypedStorage<1, 1, ::ObjectiveSortOrder> mSortOrder;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SetDisplayObjectivePacketPayload(::SetDisplayObjectivePacketPayload const&);

    MCNAPI SetDisplayObjectivePacketPayload(
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        ::ObjectiveSortOrder
    );

    MCNAPI ~SetDisplayObjectivePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SetDisplayObjectivePacketPayload const&);

    MCNAPI void*
    $ctor(std::string const&, std::string const&, std::string const&, std::string const&, ::ObjectiveSortOrder);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

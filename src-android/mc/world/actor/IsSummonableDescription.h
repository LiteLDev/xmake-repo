#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefintionDescription.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct IsSummonableDescription : public ::DefintionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsSummonable;
    ::ll::TypedStorage<1, 1, bool> mIsSet;
    // NOLINTEND

public:
    // prevent constructor by default
    IsSummonableDescription& operator=(IsSummonableDescription const&);
    IsSummonableDescription(IsSummonableDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IsSummonableDescription();

    virtual char const* getJsonName() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

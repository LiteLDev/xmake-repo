#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ObjectiveRenderType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class ObjectiveCriteria {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const>          mName;
    ::ll::TypedStorage<1, 1, bool const>                  mReadOnly;
    ::ll::TypedStorage<1, 1, ::ObjectiveRenderType const> mRenderType;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectiveCriteria();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ObjectiveRenderType getRenderType() const;

    MCNAPI bool isReadOnly() const;
    // NOLINTEND
};

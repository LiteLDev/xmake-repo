#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct MoveControlDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMaxTurn;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void deserializeData(::DeserializeDataParams);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $deserializeData(::DeserializeDataParams);
    // NOLINTEND
};

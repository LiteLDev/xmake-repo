#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/BlockSet.h"
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
struct DeserializeDataParams;
// clang-format on

struct PreferredPathDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                  mDefaultBlockCost;
    ::ll::TypedStorage<4, 4, float>                  mJumpCost;
    ::ll::TypedStorage<4, 4, int>                    mMaxFallBlocks;
    ::ll::TypedStorage<8, 24, std::vector<BlockSet>> mPreferredPathGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const;

    virtual ~PreferredPathDescription();

    virtual void deserializeData(::DeserializeDataParams);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PreferredPathDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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

    MCNAPI void $deserializeData(::DeserializeDataParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

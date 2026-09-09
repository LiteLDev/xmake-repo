#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorComponentDescription.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct TransformationDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::ActorDefinitionIdentifier>                      mEntityName;
    ::ll::TypedStorage<4, 4, int>                                                mDelayTicks;
    ::ll::TypedStorage<4, 4, int>                                                mDelayTicksRangeMin;
    ::ll::TypedStorage<4, 4, int>                                                mDelayTicksRangeMax;
    ::ll::TypedStorage<1, 1, bool>                                               mDropEquipment;
    ::ll::TypedStorage<1, 1, bool>                                               mDropInventory;
    ::ll::TypedStorage<1, 1, bool>                                               mPreserveEquipment;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::LevelSoundEvent>> mBeginTransformSound;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::LevelSoundEvent>> mTransformSound;
    ::ll::TypedStorage<4, 4, float>                                              mBlockAssistChance;
    ::ll::TypedStorage<4, 4, int>                                                mBlockRadius;
    ::ll::TypedStorage<4, 4, int>                                                mBlockMax;
    ::ll::TypedStorage<4, 4, float>                                              mBlockChance;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                          mBlockTypes;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                          mAddComponentGroups;
    ::ll::TypedStorage<1, 1, bool>                                               mMaintainOwner;
    ::ll::TypedStorage<1, 1, bool>                                               mMaintainTradeLevel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const;

    virtual ~TransformationDescription();

    virtual void deserializeData(::DeserializeDataParams);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TransformationDescription();
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

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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier>                          mEntityName;
    ::ll::TypedStorage<4, 4, int>                                                    mDelayTicks;
    ::ll::TypedStorage<4, 4, int>                                                    mDelayTicksRangeMin;
    ::ll::TypedStorage<4, 4, int>                                                    mDelayTicksRangeMax;
    ::ll::TypedStorage<1, 1, bool>                                                   mDropEquipment;
    ::ll::TypedStorage<1, 1, bool>                                                   mDropInventory;
    ::ll::TypedStorage<1, 1, bool>                                                   mPreserveEquipment;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::LevelSoundEvent>> mBeginTransformSound;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::LevelSoundEvent>> mTransformSound;
    ::ll::TypedStorage<4, 4, float>                                                  mBlockAssistChance;
    ::ll::TypedStorage<4, 4, int>                                                    mBlockRadius;
    ::ll::TypedStorage<4, 4, int>                                                    mBlockMax;
    ::ll::TypedStorage<4, 4, float>                                                  mBlockChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                          mBlockTypes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                          mAddComponentGroups;
    ::ll::TypedStorage<1, 1, bool>                                                   mMaintainOwner;
    ::ll::TypedStorage<1, 1, bool>                                                   mMaintainTradeLevel;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual char const* getJsonName() const;
#else // @header-generator platform
    virtual char const* getJsonName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TransformationDescription();
#else // @header-generator platform
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ~TransformationDescription() /*override*/;
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI char const* $getJsonName() const;
#else // @header-generator platform
    MCAPI char const* $getJsonName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deserializeData(::DeserializeDataParams);
#else // @header-generator platform
    MCAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/definitions/BlockSet.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockDescriptor;
#else // @header-generator platform
struct BlockSet;
#endif // @header-generator platform
struct DeserializeDataParams;
// clang-format on

struct PreferredPathDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                  mDefaultBlockCost;
    ::ll::TypedStorage<4, 4, float>                  mJumpCost;
    ::ll::TypedStorage<4, 4, int>                    mMaxFallBlocks;
    ::ll::TypedStorage<8, 24, std::vector<BlockSet>> mPreferredPathGroup;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                      mDefaultBlockCost;
    ::ll::TypedStorage<4, 4, float>                      mJumpCost;
    ::ll::TypedStorage<4, 4, int>                        mMaxFallBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockSet>> mPreferredPathGroup;
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
#else // @header-generator platform
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct DwellerDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mType;
    ::ll::TypedStorage<8, 24, std::string> mRole;
    ::ll::TypedStorage<8, 24, std::string> mPreferredProfession;
    ::ll::TypedStorage<4, 4, int>          mUpdateBase;
    ::ll::TypedStorage<4, 4, int>          mUpdateVariant;
    ::ll::TypedStorage<4, 4, int>          mFirstFoundingReward;
    ::ll::TypedStorage<4, 4, float>        mDwellingBoundsTolerance;
    ::ll::TypedStorage<1, 1, bool>         mCanFindPOI;
    ::ll::TypedStorage<1, 1, bool>         mCanMigrate;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mType;
    ::ll::TypedStorage<8, 32, ::std::string> mRole;
    ::ll::TypedStorage<8, 32, ::std::string> mPreferredProfession;
    ::ll::TypedStorage<4, 4, int>            mUpdateBase;
    ::ll::TypedStorage<4, 4, int>            mUpdateVariant;
    ::ll::TypedStorage<4, 4, int>            mFirstFoundingReward;
    ::ll::TypedStorage<4, 4, float>          mDwellingBoundsTolerance;
    ::ll::TypedStorage<1, 1, bool>           mCanFindPOI;
    ::ll::TypedStorage<1, 1, bool>           mCanMigrate;
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
    virtual ~DwellerDescription();

    virtual void deserializeData(::DeserializeDataParams);
#else // @header-generator platform
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
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

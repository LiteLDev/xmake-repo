#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/options/EducationWorldType.h"
#include "mc/resources/PackManifest.h"
#include "mc/world/level/GameType.h"
#else // @header-generator platform
#include "mc/scripting/modules/PackManifest.h"
#endif // @header-generator platform

class WorldTemplatePackManifest : public ::PackManifest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::GameType>           mGameType;
    ::ll::TypedStorage<1, 1, ::EducationWorldType> mEducationWorldType;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnkaf55f4;
    ::ll::UntypedStorage<1, 1> mUnk9c0858;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatePackManifest& operator=(WorldTemplatePackManifest const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WorldTemplatePackManifest(WorldTemplatePackManifest const&);
    WorldTemplatePackManifest();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~WorldTemplatePackManifest();
#else // @header-generator platform
    virtual ~WorldTemplatePackManifest() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<PackManifest> clone() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplatePackManifest();

    MCNAPI explicit WorldTemplatePackManifest(::PackManifest&&);

    MCNAPI ::GameType getGameType() const;

    MCNAPI void setGameType(::GameType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::PackManifest&&);
#else // @header-generator platform
    virtual ::std::unique_ptr<::PackManifest> clone() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<PackManifest> $clone() const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::PackManifest> $clone() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

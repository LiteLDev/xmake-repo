#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/EducationWorldType.h"
#include "mc/resources/PackManifest.h"
#include "mc/world/level/GameType.h"

class WorldTemplatePackManifest : public ::PackManifest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GameType>           mGameType;
    ::ll::TypedStorage<1, 1, ::EducationWorldType> mEducationWorldType;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatePackManifest& operator=(WorldTemplatePackManifest const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplatePackManifest();

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
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<PackManifest> $clone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

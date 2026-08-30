#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/item/MapType.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"

struct ExplorationMapData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::MapType>                    mMapType;
    ::ll::UntypedStorage<1, 1>                             mMarkerType;
    ::ll::TypedStorage<8, 24, std::string>                 mFeatureName;
    ::ll::TypedStorage<8, 40, ::HashedString>              mStructureType;
    ::ll::TypedStorage<1, 1, bool>                         mFeatureMustBeInNewChunks;
    ::ll::TypedStorage<8, 48, std::optional<HashedString>> mBiomeTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ExplorationMapData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExplorationMapData(
        ::MapType,
        ::MapDecoration::Type,
        std::string const&,
        ::HashedString,
        bool,
        std::optional<HashedString> const&
    );

    MCNAPI ~ExplorationMapData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::MapType,
        ::MapDecoration::Type,
        std::string const&,
        ::HashedString,
        bool,
        std::optional<HashedString> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

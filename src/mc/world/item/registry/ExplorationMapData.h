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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::MapType>                    mMapType;
    ::ll::UntypedStorage<1, 1>                             mMarkerType;
    ::ll::TypedStorage<8, 24, std::string>                 mFeatureName;
    ::ll::TypedStorage<8, 40, ::HashedString>              mStructureType;
    ::ll::TypedStorage<1, 1, bool>                         mFeatureMustBeInNewChunks;
    ::ll::TypedStorage<8, 48, std::optional<HashedString>> mBiomeTag;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::MapType>                        mMapType;
    ::ll::TypedStorage<1, 1, ::MapDecoration::Type>            mMarkerType;
    ::ll::TypedStorage<8, 32, ::std::string>                   mFeatureName;
    ::ll::TypedStorage<8, 48, ::HashedString>                  mStructureType;
    ::ll::TypedStorage<1, 1, bool>                             mFeatureMustBeInNewChunks;
    ::ll::TypedStorage<8, 56, ::std::optional<::HashedString>> mBiomeTag;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ExplorationMapData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ExplorationMapData(
        ::MapType,
        ::MapDecoration::Type,
        std::string const&,
        ::HashedString,
        bool,
        std::optional<HashedString> const&
#else // @header-generator platform
    MCAPI ExplorationMapData(
        ::MapType                              mapType,
        ::MapDecoration::Type                  markerType,
        ::std::string const&                   featureName,
        ::HashedString                         structureType,
        bool                                   featureMustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ExplorationMapData();
#else // @header-generator platform
    MCAPI ~ExplorationMapData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::MapType,
        ::MapDecoration::Type,
        std::string const&,
        ::HashedString,
        bool,
        std::optional<HashedString> const&
#else // @header-generator platform
    MCAPI void* $ctor(
        ::MapType                              mapType,
        ::MapDecoration::Type                  markerType,
        ::std::string const&                   featureName,
        ::HashedString                         structureType,
        bool                                   featureMustBeInNewChunks,
        ::std::optional<::HashedString> const& biomeTag
#endif // @header-generator platform
    );
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
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BaseGameVersion.h"
#include "mc/world/level/PackInstanceId.h"
#include "mc/world/level/storage/Experiments.h"

struct ResourcePackStackPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<PackInstanceId>> mTexturePackIdsAndVersions;
    ::ll::UntypedStorage<8, 32>                            mBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                         mTexturePackRequired;
    ::ll::TypedStorage<8, 56, ::Experiments>               mExperiments;
    ::ll::TypedStorage<1, 1, bool>                         mIncludeEditorPacks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInstanceId>> mTexturePackIdsAndVersions;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>               mBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                             mTexturePackRequired;
    ::ll::TypedStorage<8, 72, ::Experiments>                   mExperiments;
    ::ll::TypedStorage<1, 1, bool>                             mIncludeEditorPacks;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ResourcePackStackPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourcePackStackPacketPayload(::ResourcePackStackPacketPayload const&);

    MCNAPI ResourcePackStackPacketPayload(
        std::vector<PackInstanceId>,
        ::BaseGameVersion const&,
        bool,
        ::Experiments const&,
        bool
#else // @header-generator platform
    MCAPI ResourcePackStackPacketPayload(
        ::std::vector<::PackInstanceId> texturePackIdsAndVersions,
        ::BaseGameVersion const&        baseGameVersion,
        bool                            texturePackRequired,
        ::Experiments const&            experiments,
        bool                            includeEditorPacks
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ResourcePackStackPacketPayload& operator=(::ResourcePackStackPacketPayload&&);
#else // @header-generator platform
    MCAPI ~ResourcePackStackPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ResourcePackStackPacketPayload const&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::vector<::PackInstanceId> texturePackIdsAndVersions,
        ::BaseGameVersion const&        baseGameVersion,
        bool                            texturePackRequired,
        ::Experiments const&            experiments,
        bool                            includeEditorPacks
    );
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<PackInstanceId>, ::BaseGameVersion const&, bool, ::Experiments const&, bool);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

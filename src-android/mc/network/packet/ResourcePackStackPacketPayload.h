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
    ::ll::TypedStorage<8, 24, std::vector<PackInstanceId>> mTexturePackIdsAndVersions;
    ::ll::UntypedStorage<8, 32>                            mBaseGameVersion;
    ::ll::TypedStorage<1, 1, bool>                         mTexturePackRequired;
    ::ll::TypedStorage<8, 56, ::Experiments>               mExperiments;
    ::ll::TypedStorage<1, 1, bool>                         mIncludeEditorPacks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackStackPacketPayload(::ResourcePackStackPacketPayload const&);

    MCNAPI ResourcePackStackPacketPayload(
        std::vector<PackInstanceId>,
        ::BaseGameVersion const&,
        bool,
        ::Experiments const&,
        bool
    );

    MCNAPI ::ResourcePackStackPacketPayload& operator=(::ResourcePackStackPacketPayload&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourcePackStackPacketPayload const&);

    MCNAPI void* $ctor(std::vector<PackInstanceId>, ::BaseGameVersion const&, bool, ::Experiments const&, bool);
    // NOLINTEND
};

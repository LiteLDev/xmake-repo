#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackSourceOptions.h"

// auto generated forward declare list
// clang-format off
class WorldTemplateCollectionView;
// clang-format on

struct WorldTemplatePackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackSourceOptions>                          mBase;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldTemplateCollectionView>> mView;
    ::ll::TypedStorage<8, 16, ::mce::UUID const>                           mWorldTemplateId;
    ::ll::UntypedStorage<1, 1>                                             mPackType;
    ::ll::UntypedStorage<1, 1>                                             mPackOrigin;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatePackSourceOptions& operator=(WorldTemplatePackSourceOptions const&);
    WorldTemplatePackSourceOptions(WorldTemplatePackSourceOptions const&);
    WorldTemplatePackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplatePackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

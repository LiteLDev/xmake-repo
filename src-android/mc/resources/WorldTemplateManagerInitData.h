#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackIdVersion.h"

// auto generated forward declare list
// clang-format off
class PackSource;
class PackSourceFactory;
class WorldTemplateCollection;
class WorldTemplateManagerProxy;
struct WorldTemplateManagerInitDeps;
// clang-format on

struct WorldTemplateManagerInitData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldTemplateCollection>>   mCollection;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>>                mLocalPremiumPackIds;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackSource>>                mLocalWorldSources;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldTemplateManagerProxy>> mProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManagerInitData& operator=(WorldTemplateManagerInitData const&);
    WorldTemplateManagerInitData(WorldTemplateManagerInitData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplateManagerInitData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

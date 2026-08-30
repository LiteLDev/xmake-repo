#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/UUID.h"
#include "mc/resources/WorldTemplatePackManifest.h"

struct WorldTemplateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                        mName;
    ::ll::TypedStorage<8, 24, std::string>                        mDescription;
    ::ll::TypedStorage<8, 24, std::string>                        mAuthors;
    ::ll::TypedStorage<8, 24, std::string>                        mVersion;
    ::ll::UntypedStorage<8, 24>                                   mPath;
    ::ll::TypedStorage<8, 24, std::string>                        mGameType;
    ::ll::UntypedStorage<8, 24>                                   mWorldIconPath;
    ::ll::UntypedStorage<8, 760>                                  mManifest;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const std::string>> mAllowListPath;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                        mCollectionKey;
    ::ll::TypedStorage<1, 1, bool>                                mWorldIconOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateData& operator=(WorldTemplateData const&);
    WorldTemplateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateData(::WorldTemplateData const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldTemplateData const&);
    // NOLINTEND
};

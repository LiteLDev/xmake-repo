#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/BackwardsCompatTextureInfo.h"
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
class ResourceLocationPair;
// clang-format on

class BackwardsCompatTextureGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ResourceLocation, BackwardsCompatTextureInfo>> mBackCompatMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BackwardsCompatTextureInfo const& getBackCompatInfo(::ResourceLocation const&) const;

    MCNAPI void loadTextures(::gsl::span<ResourceLocationPair> const);

    MCNAPI void populate(std::string const&);

    MCNAPI ~BackwardsCompatTextureGroup();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BackwardsCompatTextureInfo const& invalidInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

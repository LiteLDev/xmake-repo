#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/resource/ResourceLocation.h"

// auto generated forward declare list
// clang-format off
struct InvalidPacksFilterGroup;
// clang-format on

class InvalidPacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> mInvalidPackLocation;
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> mInvalidBehaviorPackLocation;
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> mInvalidResourcePackLocation;
    ::ll::TypedStorage<8, 24, std::vector<ResourceLocation>> mInvalidTemplatePackLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidPacks& operator=(InvalidPacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InvalidPacks(::InvalidPacks const&);

    MCNAPI void addInvalidPack(::ResourceLocation const&, ::PackType);

    MCNAPI std::vector<ResourceLocation> getInvalidPacks(::InvalidPacksFilterGroup const&) const;

    MCNAPI std::vector<ResourceLocation> const& getInvalidPacks(::PackType) const;

    MCNAPI ::InvalidPacks& operator=(::InvalidPacks&&);

    MCNAPI void untrackInvalidPack(::ResourceLocation const&);

    MCNAPI ~InvalidPacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::InvalidPacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

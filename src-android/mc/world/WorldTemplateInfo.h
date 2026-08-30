#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/WorldTemplateData.h"

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
class WorldTemplatePackManifest;
namespace mce { class UUID; }
// clang-format on

struct WorldTemplateInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 968> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateInfo& operator=(WorldTemplateInfo const&);
    WorldTemplateInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateInfo(::WorldTemplatePackManifest const&, ::PackAccessStrategy const*);

    MCNAPI std::string const& getAuthors() const;

    MCNAPI std::string const& getDescription() const;

    MCNAPI std::string const& getGameType() const;

    MCNAPI std::string getIdAsString() const;

    MCNAPI ::mce::UUID getKey() const;

    MCNAPI ::WorldTemplatePackManifest const& getPackManifest() const;

    MCNAPI std::string const& getVersion() const;

    MCNAPI std::string const& getWorldIconAllowListPath() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getWorldIconPath() const;

    MCNAPI std::string const& getWorldName() const;

    MCNAPI ::Core::PathBuffer<std::string> const& getWorldPath() const;

    MCNAPI ulong getWorldSize() const;

    MCNAPI bool isPremium() const;

    MCNAPI bool isVirtualCatalogItem() const;

    MCNAPI bool isWorldIconOverridden() const;

    MCNAPI ~WorldTemplateInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::WorldTemplateData
    buildTemplateData(::WorldTemplatePackManifest const&, ::PackAccessStrategy const*);

    MCNAPI static ::WorldTemplateInfo const& getInvalid();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldTemplatePackManifest const&, ::PackAccessStrategy const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

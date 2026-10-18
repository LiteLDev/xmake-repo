#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/WorldTemplateData.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
class WorldTemplatePackManifest;
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class UUID; }
#else // @header-generator platform
struct WorldTemplateData;
#endif // @header-generator platform
// clang-format on

struct WorldTemplateInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 968> mData;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 1104> mUnk207bb5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateInfo& operator=(WorldTemplateInfo const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WorldTemplateInfo(WorldTemplateInfo const&);
#endif // @header-generator platform
    WorldTemplateInfo();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI WorldTemplateInfo(::WorldTemplatePackManifest const&, ::PackAccessStrategy const*);
#else // @header-generator platform
    MCNAPI WorldTemplateInfo(::WorldTemplatePackManifest const& manifest, ::PackAccessStrategy const* accessStrategy);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::std::string const& getAuthors() const;

    MCNAPI ::std::string const& getDescription() const;

    MCNAPI ::std::string const& getGameType() const;

    MCNAPI ::std::string getIdAsString() const;

    MCNAPI ::std::string const& getVersion() const;

    MCNAPI ::std::string const& getWorldIconAllowListPath() const;

    MCNAPI ::std::string const& getWorldName() const;

    MCNAPI bool isPremium() const;

    MCNAPI bool isWorldIconOverridden() const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::WorldTemplateData
#if defined(LL_PLAT_A) // @header-generator platform
    buildTemplateData(::WorldTemplatePackManifest const&, ::PackAccessStrategy const*);
#else // @header-generator platform
    buildTemplateData(::WorldTemplatePackManifest const& manifest, ::PackAccessStrategy const* accessStrategy);
#endif // @header-generator platform

    MCNAPI static ::WorldTemplateInfo const& getInvalid();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::WorldTemplatePackManifest const&, ::PackAccessStrategy const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::WorldTemplatePackManifest const& manifest, ::PackAccessStrategy const* accessStrategy);
#endif // @header-generator platform
    // NOLINTEND
};

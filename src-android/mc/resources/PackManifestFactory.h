#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/ManifestOrigin.h"
#include "mc/resources/PackCapabilityRegistry.h"
#include "mc/resources/interface/IPackManifestFactory.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IPackTelemetry;
class PackAccessStrategy;
class PackManifest;
class PackManifestFactoryCache;
class PackReport;
class ResourceLocation;
class SubpackInfoCollection;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PackManifestFactory : public ::IPackManifestFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::ReflectionCtx>>    mReflectionCtx;
    ::ll::TypedStorage<8, 24, ::PackCapabilityRegistry const>           mPackCapabilityRegistry;
    ::ll::TypedStorage<8, 8, ::IPackTelemetry&>                         mEventing;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackManifestFactoryCache>> mCache;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManifestFactory& operator=(PackManifestFactory const&);
    PackManifestFactory(PackManifestFactory const&);
    PackManifestFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PackManifestFactory();

    virtual std::unique_ptr<PackManifest> create(::PackAccessStrategy&, ::ResourceLocation const&, ::PackReport&, ::SubpackInfoCollection*);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackManifestFactory(::PackCapabilityRegistry const&, ::IPackTelemetry&);

    MCNAPI void load(::AppPlatform&);

    MCNAPI void save(::AppPlatform&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string alternateContentKeyLookup(std::string const&);

    MCNAPI static std::string contentKeyLookup(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& MANIFEST_PACK_UUID_UPGRADE_SALT();

    MCNAPI static std::unordered_map<std::string, const std::vector<char>>& mAlternateContentKeys();

    MCNAPI static std::unordered_map<std::string, const std::vector<char>>& mContentKeys();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackCapabilityRegistry const&, ::IPackTelemetry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<PackManifest>
           $create(::PackAccessStrategy&, ::ResourceLocation const&, ::PackReport&, ::SubpackInfoCollection*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

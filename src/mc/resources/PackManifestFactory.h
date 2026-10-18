#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/ManifestOrigin.h"
#include "mc/resources/PackCapabilityRegistry.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/resources/interface/IPackManifestFactory.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AppPlatform;
#else // @header-generator platform
#endif // @header-generator platform
class IPackTelemetry;
class PackAccessStrategy;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class PackCapabilityRegistry;
#endif // @header-generator platform
class PackManifest;
#if defined(LL_PLAT_A) // @header-generator platform
class PackManifestFactoryCache;
#else // @header-generator platform
#endif // @header-generator platform
class PackReport;
class ResourceLocation;
class SubpackInfoCollection;
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PackManifestFactory : public ::IPackManifestFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<cereal::ReflectionCtx>>    mReflectionCtx;
    ::ll::TypedStorage<8, 24, ::PackCapabilityRegistry const>           mPackCapabilityRegistry;
    ::ll::TypedStorage<8, 8, ::IPackTelemetry&>                         mEventing;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackManifestFactoryCache>> mCache;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk848295;
    ::ll::UntypedStorage<8, 16> mUnk6440d6;
    ::ll::UntypedStorage<8, 8>  mUnk89c744;
    ::ll::UntypedStorage<8, 8>  mUnk7afdc0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackManifestFactory& operator=(PackManifestFactory const&);
    PackManifestFactory(PackManifestFactory const&);
    PackManifestFactory();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~PackManifestFactory();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~PackManifestFactory() /*override*/;
#else // LL_PLAT_C
    virtual ~PackManifestFactory() /*override*/ = default;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<PackManifest> create(::PackAccessStrategy&, ::ResourceLocation const&, ::PackReport&, ::SubpackInfoCollection*);
    // clang-format on
#else // @header-generator platform
    virtual ::std::unique_ptr<::PackManifest> create(
        ::PackAccessStrategy&     accessStrategy,
        ::ResourceLocation const& location,
        ::PackReport&             report,
        ::SubpackInfoCollection*  subpackInfoStack
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PackManifestFactory(::PackCapabilityRegistry const&, ::IPackTelemetry&);

    MCNAPI void load(::AppPlatform&);

    MCNAPI void save(::AppPlatform&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string alternateContentKeyLookup(std::string const&);

    MCNAPI static std::string contentKeyLookup(std::string const&);
#else // @header-generator platform
    MCNAPI PackManifestFactory(::PackCapabilityRegistry const& packCapabilityRegistry, ::IPackTelemetry& eventing);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& MANIFEST_PACK_UUID_UPGRADE_SALT();
#else // @header-generator platform
    MCNAPI static ::std::string const& MANIFEST_PACK_UUID_UPGRADE_SALT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, const std::vector<char>>& mAlternateContentKeys();
#else // @header-generator platform
    MCNAPI static ::std::unordered_map<::std::string, ::std::vector<char> const>& mAlternateContentKeys();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, const std::vector<char>>& mContentKeys();
#else // @header-generator platform
    MCNAPI static ::std::unordered_map<::std::string, ::std::vector<char> const>& mContentKeys();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::PackCapabilityRegistry const&, ::IPackTelemetry&);
#else // @header-generator platform
    MCNAPI void* $ctor(::PackCapabilityRegistry const& packCapabilityRegistry, ::IPackTelemetry& eventing);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<PackManifest>
           $create(::PackAccessStrategy&, ::ResourceLocation const&, ::PackReport&, ::SubpackInfoCollection*);
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::PackManifest> $create(
        ::PackAccessStrategy&     accessStrategy,
        ::ResourceLocation const& location,
        ::PackReport&             report,
        ::SubpackInfoCollection*  subpackInfoStack
    );


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

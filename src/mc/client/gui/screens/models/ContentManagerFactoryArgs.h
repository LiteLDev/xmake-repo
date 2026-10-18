#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ClientPackSourceFactory;
class ContentCatalogService;
class IContentTierManager;
class IEntitlementManager;
class ILevelListCache;
class IResourcePackRepository;
class PackManifestFactory;
class ResourcePackManager;
class StoreCatalogRepository;
class WorldTemplateManager;
namespace Core { class FilePathManager; }
// clang-format on

struct ContentManagerFactoryArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>         mLevelListCache;
    ::ll::UntypedStorage<8, 24>                          mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&> mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>     mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>     mPackManifestFactory;
    ::ll::UntypedStorage<8, 24>                          mEntitlementManager;
    ::ll::UntypedStorage<8, 24>                          mContentTierManager;
    ::ll::UntypedStorage<8, 24>                          mStoreCatalog;
    ::ll::UntypedStorage<8, 24>                          mContentCatalogService;
    ::ll::TypedStorage<8, 8, ::ClientPackSourceFactory&> mPackSourceFactory;
    ::ll::UntypedStorage<8, 24>                          mFilePathManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentManagerFactoryArgs& operator=(ContentManagerFactoryArgs const&);
    ContentManagerFactoryArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ContentManagerFactoryArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ClientPackSourceFactory;
class ContentCatalogService;
class IContentTierManager;
class IEntitlementManager;
class ILevelListCache;
class IResourcePackRepository;
class PackManifestFactory;
class ResourcePackManager;
class StoreCatalogRepository;
class WorldTemplateManager;
namespace Core { class FilePathManager; }
// clang-format on

struct ContentManagerFactoryArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                                mLevelListCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const>      mWorldTemplateManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>                                        mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                            mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>                                            mPackManifestFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager>>             mEntitlementManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const> mContentTierManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StoreCatalogRepository> const>    mStoreCatalog;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const>     mContentCatalogService;
    ::ll::TypedStorage<8, 8, ::ClientPackSourceFactory&>                                        mPackSourceFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Core::FilePathManager> const>     mFilePathManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentManagerFactoryArgs& operator=(ContentManagerFactoryArgs const&);
    ContentManagerFactoryArgs(ContentManagerFactoryArgs const&);
    ContentManagerFactoryArgs();
};
#else // @header-generator platform
struct ContentManagerFactoryArgs {};
#endif // @header-generator platform
#endif // @header-generator platform

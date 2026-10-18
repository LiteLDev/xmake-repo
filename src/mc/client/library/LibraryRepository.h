#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/EDULibraryCategory.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/locale/I18nObserver.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class EducationContentServices;
class LibraryCollection;
class LibraryCollectionConfig;
class PackManifest;
class ResourcePackManager;
class WorldTemplateManager;
// clang-format on

class LibraryRepository : public ::ResourcePackListener,
                          public ::I18nObserver,
                          public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                                                    mServices;
    ::ll::UntypedStorage<8, 48>                                                    mGetResourcePackManager;
    ::ll::TypedStorage<1, 1, bool>                                                 mNeedsUpdate;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, EDULibraryCategory>> mLibraryCategories;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryRepository();

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&);

    virtual void onLanguageChanged(std::string const&, bool);

    virtual void onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    virtual void onLanguagesLoaded();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LibraryRepository(
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>> const&,
        std::function<ResourcePackManager&()>
    );

    MCNAPI void _setBaseCategories();

    MCNAPI std::shared_ptr<LibraryCollection> createLibraryCollection(std::shared_ptr<LibraryCollectionConfig>);

    MCNAPI ::EducationContentServices& getEducationContentServices();

    MCNAPI ::EDULibraryCategory* getLibraryCategory(std::string const&);

    MCNAPI void update();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>> const&,
        std::function<ResourcePackManager&()>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);

    MCNAPI void $onLanguageChanged(std::string const&, bool);

    MCNAPI void $onLanguageKeywordsLoadedFromPack(::PackManifest const&);

    MCNAPI void $onLanguagesLoaded();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class LibraryRepository {};
#endif // @header-generator platform

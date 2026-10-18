#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class StoreSearchQuery;
class WorldTemplateManager;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class LibraryCollectionConfig {
public:
    // LibraryCollectionConfig inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ExcludedDisplayCategory : uint {
        None                     = 1,
        ImportedTemplates        = 2,
        TutorialItems_Deprecated = 4,
    };
#else // @header-generator platform
    enum class CollectionSource : uint {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class CollectionSource : uint {
        None              = 0,
        Library           = 1,
        DemoLibrary       = 2,
        Channel           = 3,
        ChannelOfChannels = 4,
    };

    using SearchKeywords = std::optional<std::vector<std::string>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                        mWorldTemplateManager;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<std::string>> const>           mKeywords;
    ::ll::TypedStorage<4, 4, ::LibraryCollectionConfig::ExcludedDisplayCategory const> mExcludedDisplayCategories;
    ::ll::TypedStorage<4, 4, ::LibraryCollectionConfig::CollectionSource const>        mCollectionSource;
    ::ll::TypedStorage<8, 24, std::string>                                             mChannelName;
    ::ll::TypedStorage<8, 24, std::string>                                             mSearchString;
    ::ll::UntypedStorage<8, 600>                                                       mQuery;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryCollectionConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::StoreSearchQuery const& getQuery() const;

    MCNAPI std::string const& getSearchString() const;

    MCNAPI ~LibraryCollectionConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    enum class ExcludedDisplayCategory : uint {};
#endif // @header-generator platform
};

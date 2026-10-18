#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct EDULibraryCategory;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct EDULibraryCategory;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
struct EDULibraryCategoryParser {
public:
    // EDULibraryCategoryParser inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class CategoryType : int {
        SubCategory = 0,
        Worlds      = 1,
    };

    using SubCategoryCallback = std::function<void(
        std::shared_ptr<MainMenuScreenModel>,
        const std::string&,
        const std::string&,
        const std::string&,
        const std::string&,
        int,
        const std::vector<std::string>&,
        bool
    )>;

    using WorldsCallback = std::function<void(
        std::shared_ptr<MainMenuScreenModel>,
        const std::string&,
        const std::string&,
        const std::string&,
        const std::vector<std::string>&,
        const std::string&
    )>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void getCategories(
        std::unordered_map<std::string, EDULibraryCategory>&,
        std::string const&,
        std::function<void(
            std::shared_ptr<MainMenuScreenModel>,
            const std::string&,
            const std::string&,
            const std::string&,
            const std::string&,
            int,
            const std::vector<std::string>&,
            bool
        )>,
        std::function<void(
            std::shared_ptr<MainMenuScreenModel>,
            const std::string&,
            const std::string&,
            const std::string&,
            const std::vector<std::string>&,
            const std::string&
        )>
    );
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class CategoryType : int {
        SubCategory = 0,
        Worlds      = 1,
    };

    using SubCategoryCallback = ::std::function<void(
        ::std::shared_ptr<::MainMenuScreenModel>,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        int,
        ::std::vector<::std::string> const&,
        bool
    )>;

    using WorldsCallback = ::std::function<void(
        ::std::shared_ptr<::MainMenuScreenModel>,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::vector<::std::string> const&,
        ::std::string const&
    )>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void getCategories(
        ::std::unordered_map<::std::string, ::EDULibraryCategory>& returnRef,
        ::std::string const&                                       jsonString,
        ::std::function<void(
            ::std::shared_ptr<::MainMenuScreenModel>,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            int,
            ::std::vector<::std::string> const&,
            bool
        )>                                                         subCategoryCallback,
        ::std::function<void(
            ::std::shared_ptr<::MainMenuScreenModel>,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::vector<::std::string> const&,
            ::std::string const&
        )>                                                         worldsCallback
    );
    // NOLINTEND
#else // @header-generator platform
    enum class CategoryType : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct EDULibraryCategory;
// clang-format on

struct EDULibraryCategoryParser {
public:
    // EDULibraryCategoryParser inner types define
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
};

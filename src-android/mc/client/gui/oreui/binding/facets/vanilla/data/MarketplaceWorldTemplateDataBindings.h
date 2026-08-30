#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/RatingDataBindings.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/store/StoreCatalogCategory.h"
#include "mc/client/world/MarketplaceWorldTemplateData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
namespace OreUI { class IResourceAllowList; }
namespace SDL { struct ScreenLayoutQuery; }
// clang-format on

namespace OreUI {

struct MarketplaceWorldTemplateDataBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 256, ::World::MarketplaceWorldTemplateData> mTemplateData;
    ::ll::UntypedStorage<8, 72>                                       mThumbnailPath;
    ::ll::TypedStorage<8, 32, ::OreUI::RatingDataBindings>            mRatingDataBindings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getCreator() const;

    MCNAPI std::string const& getDiscountText() const;

    MCNAPI bool getHasDiscount() const;

    MCNAPI std::string const& getId() const;

    MCNAPI bool getIsExpired() const;

    MCNAPI bool getIsFree() const;

    MCNAPI bool getIsInstalled() const;

    MCNAPI bool getIsUpdateAvailable() const;

    MCNAPI std::string const& getName() const;

    MCNAPI int getNonDiscountedPrice() const;

    MCNAPI std::string const& getPackId() const;

    MCNAPI int getPrice() const;

    MCNAPI ::OreUI::RatingDataBindings const& getRatingDataBinding() const;

    MCNAPI ::StoreCatalogCategory const& getStoreCatalogCategory() const;

    MCNAPI ::OreUI::AllowListPath const& getThumbnailPath() const;

    MCNAPI ::OreUI::MarketplaceWorldTemplateDataBindings&
    operator=(::OreUI::MarketplaceWorldTemplateDataBindings const&);

    MCNAPI ~MarketplaceWorldTemplateDataBindings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::OreUI::MarketplaceWorldTemplateDataBindings fromMarketplaceWorldTemplateData(
        ::World::MarketplaceWorldTemplateData const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>> const&,
        std::vector<std::shared_ptr<SDL::ScreenLayoutQuery>> const&,
        ::Bedrock::NonOwnerPointer<DateManager> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI

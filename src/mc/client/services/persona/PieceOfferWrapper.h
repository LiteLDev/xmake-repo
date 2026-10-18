#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/common/title_info/TitleId.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/world/actor/player/persona/Rarity.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IStoreCatalogItem;
class IStoreCatalogRepository;
class PersonaPiece;
struct PackIdVersion;
namespace mce { class UUID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
class PieceOfferWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                      mCatalogOffer;
    ::ll::TypedStorage<8, 8, ::PersonaPiece const*> mPersonaPiece;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PieceOfferWrapper(::PersonaPiece const*);

    MCNAPI explicit PieceOfferWrapper(::IStoreCatalogItem const&);

    MCNAPI PieceOfferWrapper(::persona::PieceOfferWrapper&&);

    MCNAPI ::TitleInfo::TitleId getAchievementTitleId() const;

    MCNAPI ::IStoreCatalogItem const& getCatalogOffer() const;

    MCNAPI std::string const& getCreatorName() const;

    MCNAPI std::string getPersonaIconFileSystemName() const;

    MCNAPI std::string getPersonaIconLocationPath() const;

    MCNAPI ::PersonaPiece const* const getPersonaPiece() const;

    MCNAPI ::persona::Rarity const& getPersonaPieceRarity() const;

    MCNAPI ::SharedTypes::persona::PieceType const& getPersonaPieceType() const;

    MCNAPI ::mce::UUID getPieceId() const;

    MCNAPI std::string const getPieceIdAsStr() const;

    MCNAPI std::string const& getProductId() const;

    MCNAPI long getRealmsPlusDaysLeft() const;

    MCNAPI std::string getTitle() const;

    MCNAPI bool isAchievementOffer() const;

    MCNAPI bool isAchievementOfferOfCurrentTitle() const;

    MCNAPI bool isCatalogOfferWrapper() const;

    MCNAPI bool isFree() const;

    MCNAPI bool isHydrating() const;

    MCNAPI bool isItemTaggedForRealmsPlus() const;

    MCNAPI bool isLimitedTimeOffer(::DateManager const&) const;

    MCNAPI bool isLocked() const;

    MCNAPI bool isNewOffer() const;

    MCNAPI bool isOwned() const;

    MCNAPI bool isOwnedFromSubscription() const;

    MCNAPI bool isPurchasable() const;

    MCNAPI bool isRealmsPlusContentExpired() const;

    MCNAPI bool isRedeemable() const;

    MCNAPI bool isValid() const;

    MCNAPI bool isValidSaleItem() const;

    MCNAPI explicit operator bool() const;

    MCNAPI ::persona::PieceOfferWrapper& operator=(::persona::PieceOfferWrapper&&);

    MCNAPI bool operator==(::persona::PieceOfferWrapper const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::persona::PieceOfferWrapper const& INVALID_PIECE_OFFER_WRAPPER();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PersonaPiece const*);

    MCNAPI void* $ctor(::IStoreCatalogItem const&);

    MCNAPI void* $ctor(::persona::PieceOfferWrapper&&);
    // NOLINTEND
};
#else // @header-generator platform
class PieceOfferWrapper {};
#endif // @header-generator platform

} // namespace persona

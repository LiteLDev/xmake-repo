#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/DateRange.h"
#include "mc/client/services/catalog/ItemFlags.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/shared_types/PieceType.h"
#include "mc/world/actor/player/persona/Rarity.h"

// auto generated forward declare list
// clang-format off
class AchievementOfferInfo;
class CustomDocumentModifier;
class LinksToStyleMap;
class PackStatistics;
class PlatformOfferModel;
class StoreVisualStyle;
struct HardwareCompatibilityContext;
struct IconOverlay;
struct LinksToStyle;
struct TextStyle;
namespace Json { class Value; }
// clang-format on

struct DurableCustom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<AchievementOfferInfo>> mAchievementInfo;
    ::ll::TypedStorage<8, 24, std::string>                           mCreatorName;
    ::ll::TypedStorage<8, 24, std::string>                           mRealmsTier;
    ::ll::TypedStorage<8, 24, std::string>                           mRealmsPlusEndDate;
    ::ll::TypedStorage<8, 24, std::string>                           mRealmsPlusStartDate;
    ::ll::TypedStorage<1, 1, bool>                                   mShowRealmsPlusEndDate;
    ::ll::TypedStorage<8, 24, std::string>                           mShareUrl;
    ::ll::TypedStorage<8, 24, std::string>                           mVideoUrl;
    ::ll::TypedStorage<8, 24, std::string>                           mTextureVersion;
    ::ll::TypedStorage<8, 24, std::string>                           mCurrencyId;
    ::ll::UntypedStorage<8, 328>                                     mLinksToStyle;
    ::ll::UntypedStorage<8, 16>                                      mNamedLinksToStyleMap;
    ::ll::TypedStorage<8, 24, std::string>                           mPackType;
    ::ll::TypedStorage<8, 24, std::string>                           mCreatorPageId;
    ::ll::TypedStorage<8, 24, std::string>                           mTooltip;
    ::ll::TypedStorage<8, 24, std::string>                           mCoinCountText;
    ::ll::UntypedStorage<4, 20>                                      mPackStatistics;
    ::ll::TypedStorage<4, 4, ::ItemFlags>                            mItemFlags;
    ::ll::TypedStorage<8, 24, std::string>                           mItemOwnership;
    ::ll::TypedStorage<1, 1, bool>                                   mIsHardwareCompatible;
    ::ll::UntypedStorage<8, 24>                                      mIconOverlays;
    ::ll::TypedStorage<4, 4, int>                                    mPrice;
    ::ll::TypedStorage<4, 4, int>                                    mPacksIncludedInOfferCount;
    ::ll::TypedStorage<4, 4, int>                                    mTotalMSRP;
    ::ll::TypedStorage<4, 4, int>                                    mStorePriority;
    ::ll::TypedStorage<4, 4, int>                                    mNumSkins;
    ::ll::TypedStorage<4, 4, int>                                    mCoinCount;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                  mUnitDurationInSeconds;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType>      mPersonaPieceType;
    ::ll::TypedStorage<1, 1, ::persona::Rarity>                      mPersonaPieceRarity;
    ::ll::TypedStorage<1, 1, bool>                                   mPurchasable;
    ::ll::TypedStorage<1, 1, bool>                                   mRedeemable;
    ::ll::TypedStorage<1, 1, bool>                                   mIsPromoItem;
    ::ll::TypedStorage<1, 1, bool>                                   mPlatformRestricted;
    ::ll::TypedStorage<8, 24, std::vector<DateRange>>                mActiveOfferDates;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mBundleProductIds;
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>>            mPackIdentities;
    ::ll::UntypedStorage<8, 16>                                      mRelatedItemsRow;
    ::ll::TypedStorage<4, 4, int>                                    mDiscountedPrice;
    ::ll::TypedStorage<8, 24, std::string>                           mSaleDocumentId;
    ::ll::TypedStorage<8, 24, std::string>                           mSaleStartDate;
    ::ll::TypedStorage<8, 24, std::string>                           mSaleExpirationDate;
    ::ll::TypedStorage<4, 4, float>                                  mDiscountPercentage;
    ::ll::TypedStorage<8, 24, std::string>                           mSaleInfoCategory;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlatformOfferModel>>   mCoinModel;
    ::ll::TypedStorage<8, 24, std::string>                           mBundleTitle;
    ::ll::TypedStorage<8, 24, std::string>                           mBundlePriceInfo;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>              mBundlePriceInfoReplacements;
    ::ll::TypedStorage<8, 24, std::string>                           mProductSkuId;
    ::ll::UntypedStorage<8, 24>                                      mCoinBundleDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    DurableCustom& operator=(DurableCustom const&);
    DurableCustom();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DurableCustom(::DurableCustom const&);

    MCNAPI void
    fromCommonJson(::Json::Value const&, bool, ::CustomDocumentModifier*, ::HardwareCompatibilityContext const&);

    MCNAPI void fromJson(::Json::Value const&, bool, ::CustomDocumentModifier*, ::HardwareCompatibilityContext const&);

    MCNAPI ~DurableCustom();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DurableCustom const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "jni.h"
#include "mc/client/store/commerce/PurchaseResult.h"
#include "mc/client/store/iap/ProductType.h"
#include "mc/client/store/iap/PurchasePath.h"
#include "mc/client/store/iap/TrialUpgradePurchaseTier.h"

// auto generated forward declare list
// clang-format off
class NativeStoreListener;
class StoreListener;
struct BigIdProductSku;
struct ExtraLicenseData;
struct ProductSku;
struct PurchaseInfo;
// clang-format on

class AndroidStore : public ::Store {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<NativeStoreListener>> mNativeStoreListener;
    ::ll::TypedStorage<8, 8, ::_jobject*>                          mStore;
    // NOLINTEND

public:
    // prevent constructor by default
    AndroidStore();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AndroidStore();

    virtual bool requiresRestorePurchasesButton() const;

    virtual bool allowsSubscriptions() const;

    virtual std::string getStoreId() const;

    virtual std::string getProductSkuPrefix() const;

    virtual std::string getRealmsSkuPrefix() const;

    virtual void queryProducts(std::vector<BigIdProductSku> const&);

    virtual ::PurchaseResult purchase(::ProductSku const&, ::ProductType, std::string const&, ::PurchasePath);

    virtual void acknowledgePurchase(::PurchaseInfo const&, ::ProductType);

    virtual void queryPurchases(bool);

    virtual void restorePurchases();

    virtual bool isTrial() const;

    virtual void purchaseGame(::TrialUpgradePurchaseTier const);

    virtual bool isGameLicensed() const;

    virtual bool receivedLicenseResponse();

    virtual ::ExtraLicenseData getExtraLicenseData() const;

    virtual std::string getAppReceipt() const;

    virtual void registerLicenseChangeCallback(std::function<void()>);

    virtual void handleLicenseChange();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<Store> createGooglePlayStore(std::string const&, ::StoreListener&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $requiresRestorePurchasesButton() const;

    MCNAPI bool $allowsSubscriptions() const;

    MCNAPI std::string $getStoreId() const;

    MCNAPI std::string $getProductSkuPrefix() const;

    MCNAPI std::string $getRealmsSkuPrefix() const;

    MCNAPI void $queryProducts(std::vector<BigIdProductSku> const&);

    MCNAPI ::PurchaseResult $purchase(::ProductSku const&, ::ProductType, std::string const&, ::PurchasePath);

    MCNAPI void $acknowledgePurchase(::PurchaseInfo const&, ::ProductType);

    MCNAPI void $queryPurchases(bool);

    MCNAPI void $restorePurchases();

    MCNAPI void $purchaseGame(::TrialUpgradePurchaseTier const);

    MCNAPI bool $isGameLicensed() const;

    MCNAPI bool $receivedLicenseResponse();

    MCNAPI ::ExtraLicenseData $getExtraLicenseData() const;

    MCNAPI std::string $getAppReceipt() const;

    MCNAPI void $registerLicenseChangeCallback(std::function<void()>);

    MCNAPI void $handleLicenseChange();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

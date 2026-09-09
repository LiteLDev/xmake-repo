#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/HandleRangeResult.h"
#include "mc/client/gui/screens/models/SkinPackCollector.h"
#include "mc/deps/core/debug/brstd/static_vector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class IEntitlementManager;
class MainMenuScreenModel;
class PersonaClient;
class SkinPackModel;
class SkinPickerUpsellTreatmentQuery;
struct SkinPackMeta;
namespace mce { class UUID; }
// clang-format on

class UpsellPackCollector : public ::SkinPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                      mCatalog;
    ::ll::TypedStorage<8, 8, ::MainMenuScreenModel&>                                 mMainMenu;
    ::ll::UntypedStorage<8, 16>                                                      mSkinPickerUpsellTreatmentQuery;
    ::ll::TypedStorage<8, 8, std::unique_ptr<brstd::static_vector<SkinPackMeta, 3>>> mSkinPackMeta;
    ::ll::TypedStorage<4, 4, int>                                                    mNumUpsellPacks;
    ::ll::TypedStorage<1, 1, bool>                                                   mSearchActive;
    // NOLINTEND

public:
    // prevent constructor by default
    UpsellPackCollector& operator=(UpsellPackCollector const&);
    UpsellPackCollector(UpsellPackCollector const&);
    UpsellPackCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~UpsellPackCollector();

    virtual void start(bool);

    virtual bool exhausted() const;

    virtual ::HandleRangeResult handleRange(int, int);

    virtual void collect(::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>, ::PersonaClient&, std::vector<std::shared_ptr<SkinPackModel>>&, std::unordered_set<mce::UUID>&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $start(bool);

    MCNAPI bool $exhausted() const;

    MCNAPI ::HandleRangeResult $handleRange(int, int);

    MCNAPI void $collect(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::PersonaClient&,
        std::vector<std::shared_ptr<SkinPackModel>>&,
        std::unordered_set<mce::UUID>&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

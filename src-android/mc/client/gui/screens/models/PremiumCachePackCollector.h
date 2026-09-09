#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/HandleRangeResult.h"
#include "mc/client/gui/screens/models/SkinPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class IPremiumCachePackEntitlementValidator;
class PersonaClient;
class SkinPackModel;
class SkinRepository;
namespace mce { class UUID; }
// clang-format on

class PremiumCachePackCollector : public ::SkinPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::SkinRepository&> mSkinRepo;
    ::ll::TypedStorage<4, 4, int> mPremiumCachePacks;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IPremiumCachePackEntitlementValidator>> mPremiumCachePackEntitlementValidator;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PremiumCachePackCollector& operator=(PremiumCachePackCollector const&);
    PremiumCachePackCollector(PremiumCachePackCollector const&);
    PremiumCachePackCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PremiumCachePackCollector();

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

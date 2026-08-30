#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/CatalogPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class IEntitlementManager;
class PersonaClient;
class SkinPackModel;
namespace mce { class UUID; }
// clang-format on

class RealmsPlusPackCollector : public ::CatalogPackCollector {
public:
    // prevent constructor by default
    RealmsPlusPackCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RealmsPlusPackCollector();

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

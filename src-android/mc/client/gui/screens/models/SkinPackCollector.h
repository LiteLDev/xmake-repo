#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/HandleRangeResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class PersonaClient;
class SkinPackModel;
namespace mce { class UUID; }
// clang-format on

class SkinPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>> mExistenceTracker;
    ::ll::TypedStorage<4, 4, int>                    mNumPacksCollected;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SkinPackCollector();

    virtual void start(bool);

    virtual bool exhausted() const = 0;

    virtual ::HandleRangeResult handleRange(int, int) = 0;

    virtual void collect(::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>, ::PersonaClient&, std::vector<std::shared_ptr<SkinPackModel>>&, std::unordered_set<mce::UUID>&) = 0;
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

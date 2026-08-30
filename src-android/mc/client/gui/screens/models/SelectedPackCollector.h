#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/HandleRangeResult.h"
#include "mc/client/gui/screens/models/SkinPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class PersonaClient;
class SkinPackModel;
// clang-format on

class SelectedPackCollector : public ::SkinPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mSelectedPackId;
    ::ll::TypedStorage<1, 1, bool>         mCheckComplete;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectedPackCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SelectedPackCollector() = default;

    virtual bool exhausted() const;

    virtual ::HandleRangeResult handleRange(int, int);

    virtual void collect(::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>, ::PersonaClient&, std::vector<std::shared_ptr<SkinPackModel>>&, std::unordered_set<mce::UUID>&);
    // clang-format on
    // NOLINTEND
};

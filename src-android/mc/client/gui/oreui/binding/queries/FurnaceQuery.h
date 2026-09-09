#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class FurnaceQuery : public ::OreUI::QueryBase<OreUI::FurnaceQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::reference_wrapper<IClientInstance>> mClient;
    ::ll::UntypedStorage<8, 152>                                      mLitProgress;
    ::ll::UntypedStorage<8, 152>                                      mBurnProgress;
    // NOLINTEND

public:
    // prevent constructor by default
    FurnaceQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FurnaceQuery();

    virtual void update(double);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $update(double);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI

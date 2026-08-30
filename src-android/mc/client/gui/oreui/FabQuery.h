#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/FetchStatus.h"
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class LayoutServiceSystem;
namespace OreUI { class FabObject; }
// clang-format on

namespace OreUI {

class FabQuery : public ::OreUI::QueryBase<OreUI::FabQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                                mFetchStatus;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::FabObject>> mFab;
    ::ll::UntypedStorage<8, 24>                                 mLayoutServiceSystem;
    ::ll::TypedStorage<8, 240, ::TaskGroup>                     mTaskGroup;
    // NOLINTEND
};

} // namespace OreUI

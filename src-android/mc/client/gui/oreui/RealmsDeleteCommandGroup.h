#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsDeleteManager; }
// clang-format on

namespace OreUI {

class RealmsDeleteCommandGroup : public ::OreUI::CommandGroupBase<OreUI::RealmsDeleteCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mRealmsDeleteManager;
    ::ll::UntypedStorage<8, 248> mTaskGroup;
    ::ll::UntypedStorage<8, 144> mDeleteRealm;
    // NOLINTEND
};

} // namespace OreUI

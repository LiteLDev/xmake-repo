#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/util/ProfanityFilterContext.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class ITTSEventManager;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class ScreenReaderCommandGroup : public ::OreUI::CommandGroupBase<OreUI::ScreenReaderCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<ITTSEventManager>> mTTSEventManager;
    ::ll::UntypedStorage<8, 16>                                mAppPlatform;
    ::ll::UntypedStorage<8, 144>                               mClear;
    ::ll::UntypedStorage<8, 144>                               mRead;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenReaderCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenReaderCommandGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _clear() const;

    MCNAPI void _read(std::string const&, ::ProfanityFilterContext, bool, bool, bool, bool) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI

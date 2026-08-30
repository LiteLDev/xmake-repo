#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class SoundPlayerInterface;
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class SoundCommandGroup : public ::OreUI::CommandGroupBase<OreUI::SoundCommandGroup> {
public:
    // SoundCommandGroup inner types define
    using SoundHandle = ulong;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mPlayer;
    ::ll::UntypedStorage<8, 144> mPlay;
    ::ll::UntypedStorage<8, 144> mFadeOut;
    ::ll::UntypedStorage<8, 144> mIsPlaying;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SoundCommandGroup();
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

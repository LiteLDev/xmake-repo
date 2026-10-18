#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/messaging/surfaces/BaseMessageSurface.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GuiData;
class PlayerMessagingService;
struct MessageData;
// clang-format on

class SystemWhisperSurface : public ::BaseMessageSurface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mGuiData;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemWhisperSurface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SystemWhisperSurface();

    virtual void _handleNewMessages(std::vector<MessageData>&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SystemWhisperSurface(::PlayerMessagingService&, ::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>> const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerMessagingService&, ::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>> const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_handleNewMessages(std::vector<MessageData>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class SystemWhisperSurface {};
#endif // @header-generator platform

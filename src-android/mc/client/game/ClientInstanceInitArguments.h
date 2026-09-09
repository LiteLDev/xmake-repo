#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class IGameModuleApp;
class LoopbackPacketSender;
class Minecraft;
namespace Social { class IUserManager; }
// clang-format on

struct ClientInstanceInitArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const&> mUserManager;
    ::ll::TypedStorage<4, 4, int>                                                                    mId;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LoopbackPacketSender>>                                  mPacketSender;
    ::ll::TypedStorage<8, 8, ::IGameModuleApp&>                                                      mGameModuleApp;
    ::ll::UntypedStorage<8, 16>                                                                      mCreateMinecraft;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstanceInitArguments& operator=(ClientInstanceInitArguments const&);
    ClientInstanceInitArguments(ClientInstanceInitArguments const&);
    ClientInstanceInitArguments();
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ClientInstanceInitArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk545f58;
    ::ll::UntypedStorage<4, 4>  mUnk435ed3;
    ::ll::UntypedStorage<8, 8>  mUnk5579d1;
    ::ll::UntypedStorage<8, 8>  mUnkf9979d;
    ::ll::UntypedStorage<8, 16> mUnka22e91;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstanceInitArguments& operator=(ClientInstanceInitArguments const&);
    ClientInstanceInitArguments(ClientInstanceInitArguments const&);
    ClientInstanceInitArguments();
};
#else // @header-generator platform
struct ClientInstanceInitArguments {};
#endif // @header-generator platform
#endif // @header-generator platform

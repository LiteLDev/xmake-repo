#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/multiplayer/IAppearanceProcessorContext.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ILevel;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace persona::multiplayer {

#if defined(LL_PLAT_A) // @header-generator platform
class AppearanceProcessorContext
: public ::persona::multiplayer::IAppearanceProcessorContext,
  public ::std::enable_shared_from_this<persona::multiplayer::AppearanceProcessorContext> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                              mClientInstance;
    ::ll::TypedStorage<8, 8, ::ILevel*>                                                      mMultiPlayerLevel;
    ::ll::TypedStorage<8, 8, std::map<SubClientId, std::shared_ptr<IClientInstance>> const*> mClientInstanceMap;
    // NOLINTEND
};
#else // @header-generator platform
class AppearanceProcessorContext {};
#endif // @header-generator platform

} // namespace persona::multiplayer

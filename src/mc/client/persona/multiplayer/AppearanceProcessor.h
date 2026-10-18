#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/multiplayer/IAppearanceProcessor.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class PersonaAppearance;
class PersonaService;
class PersonaSessionManager;
namespace persona::multiplayer { class IAppearanceProcessorContext; }
namespace persona::multiplayer::appearance { class IProcessingStatManager; }
namespace persona::multiplayer::appearance { class ProcessingRequestQueue; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace persona::multiplayer {

#if defined(LL_PLAT_A) // @header-generator platform
class AppearanceProcessor : public ::persona::multiplayer::IAppearanceProcessor,
                            public ::std::enable_shared_from_this<persona::multiplayer::AppearanceProcessor> {
#else // @header-generator platform
class AppearanceProcessor {
#endif // @header-generator platform
public:
    // AppearanceProcessor inner types declare
    // clang-format off
    struct PrivateTag;
    // clang-format on

    // AppearanceProcessor inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ProcessingPath : uchar {
        Legacy             = 0,
        PersonaFromLocal   = 1,
        PersonaFromService = 2,
    };
#else // @header-generator platform
    enum class ProcessingPath : uchar {};
#endif // @header-generator platform

    struct PrivateTag {};
#if defined(LL_PLAT_A) // @header-generator platform

    using AppearanceCreationCallback = std::function<void(PersonaAppearance&&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mPersonaService;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<persona::multiplayer::IAppearanceProcessorContext>>> mContext;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<PersonaSessionManager>>> mPersonaSessionManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<persona::multiplayer::appearance::ProcessingRequestQueue>>> mRequestQueue;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<persona::multiplayer::appearance::IProcessingStatManager>>> mStatManager;
    // clang-format on
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace persona::multiplayer

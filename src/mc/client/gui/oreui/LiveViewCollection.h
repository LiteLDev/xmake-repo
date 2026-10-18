#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { class ILiveViewCollectionConsumer; }
namespace OreUI { class ILiveViewCollectionPublisher; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { class ILiveViewCollectionConsumer; }
namespace OreUI { class ILiveViewCollectionPublisher; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct LiveViewCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<OreUI::ILiveViewCollectionPublisher>> mPublisher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::ILiveViewCollectionConsumer>>   mConsumer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LiveViewCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct LiveViewCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::ILiveViewCollectionPublisher>> mPublisher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ILiveViewCollectionConsumer>>   mConsumer;
    // NOLINTEND
};
#else // @header-generator platform
struct LiveViewCollection {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

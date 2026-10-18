#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/storagemanager/IContentHandler.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IContentAcquisition;
class IContentManager;
class SceneFactory;
namespace StorageManager { class ContentItemProvider; }
namespace StorageManager { class WorldConverter; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace StorageManager {

#if defined(LL_PLAT_A) // @header-generator platform
class ContentHandler : public ::StorageManager::IContentHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SceneFactory&>                                       mSceneFactory;
    ::ll::UntypedStorage<8, 16>                                                     mContentAcquisition;
    ::ll::UntypedStorage<8, 48>                                                     mContentManagerFunc;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mRouteChangedSubscription;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManager::ContentItemProvider>> mCachedContentItemProvider;
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageManager::WorldConverter>>      mCachedWorldConverter;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentHandler& operator=(ContentHandler const&);
    ContentHandler(ContentHandler const&);
    ContentHandler();
};
#else // @header-generator platform
class ContentHandler {};
#endif // @header-generator platform

} // namespace StorageManager

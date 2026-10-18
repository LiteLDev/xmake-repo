#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class RenderControllerInfo;
class RenderControllerPtr;
class ResourceLoadManager;
class ResourcePackManager;
class SemVersion;
class TaskResult;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RenderControllerGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, long const> mResourceLoadTimeStamp;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::shared_ptr<RenderControllerInfo>>> _mRenderControllerInfos;
    ::ll::TypedStorage<4, 40, std::mutex> _mRenderControllerLock;
    ::ll::UntypedStorage<8, 24> mResourceLoadManager;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderControllerGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderControllerGroup();

    MCNAPI void _loadRenderController(std::string const&, ::MinEngineVersion const&, std::string const&);

    MCNAPI ::RenderControllerPtr getRenderController(::HashedString const&);

    MCNAPI std::shared_ptr<RenderControllerInfo> getRenderControllerInfo(::HashedString const&);

    MCNAPI void
    loadRenderControllers(::ResourcePackManager&, ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderControllerInfo;
class ResourceLoadManager;
class ResourcePackManager;
// clang-format on

class RenderControllerGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb8423f;
    ::ll::UntypedStorage<8, 64> mUnkfbd6c7;
    ::ll::UntypedStorage<8, 80> mUnk14af44;
    ::ll::UntypedStorage<8, 24> mUnk5d2735;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderControllerGroup& operator=(RenderControllerGroup const&);
    RenderControllerGroup(RenderControllerGroup const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderControllerGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderControllerGroup();

    MCNAPI ::std::shared_ptr<::RenderControllerInfo> getRenderControllerInfo(::HashedString const& name);

    MCNAPI void loadRenderControllers(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RenderControllerGroup {};
#endif // @header-generator platform
#endif // @header-generator platform
